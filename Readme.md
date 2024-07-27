
rename src jadi src-old
docker compose up -d --build

jika eror 
docker compose down
docker ps
docker stop mysqlpython
docker container prune
[y/n] y
docker network prune
docker volume prune
[y/n] y

docker compose up -d --build


docker exec -it (nama container) bash

didalam container lakukan
composer create-project Laravel/Lumen .
composer require flipbox/lumen-generator

Jika eror lakukan
rm -rf composer.lock

buka vc codenya cari src/boostrap/app.php
hilangkan tanda // di

// $app->withFacades();

// $app->withEloquent();

lalu tambahkan di bawahnya
   $app->register(Flipbox\LumenGenerator\LumenGeneratorServiceProvider::class);

kemudian rename .env.example menjadi .env

isi .env terkait database kamu

DB_CONNECTION=mysql
DB_HOST=db
DB_PORT=3306
DB_DATABASE=homestead
DB_USERNAME=root
DB_PASSWORD=p455w0rd

setelah itu masuk di dalam container (docker exec)
lakukan perintah
php artisan key:generate
php artisan migrate
setelah itu
rm -rf app/Models/User.php

setelah itu cari src/database/seeders/DatabaseSeeder.php

     $this->call([
            UserSeeder::class,
    ]);
setelah itu masih di dalam container (docker exec)
lakukan
php artisan migrate:fresh --seed
setelah itu cari app/Models/User.php
ubah menjadi

class User extends Model
{
    protected $connection = 'mysql';
    protected $table = 'users';
    
}

setelah itu cari app/Http/Controller/UserController.php
tambahkan di line 7
use Illuminate\Support\Facades\DB;
cari public function index(){
	//tambahkan
        $data = DB::connection('mysql')->table('users')->get();
        return response()->json($data, 200);

}

setelah itu cari src/routes/web.php

// buat baru dibawahnya
$router->group(['prefix' => 'api/user'], function() use ($router){
    $router->get('/', ['uses' => 'UserController@index']);
});

jika eror ada kata2 stream lakukan perintah didalam container (docker exec)
chmod 777 -R storage/*




cari src/app/Http/Middleware/Authenticate.php
// tambahkan di line 7
use Illuminate\Support\Facades\DB;
// Dan tambahkan
        if ($this->auth->guard($guard)->guest()) {
            if($request->header('password')) {
                $token = $request->header('password');
                if ($token) {
                    $check_token = DB::connection('mysql')
                        ->table('users')
                        ->where('password', $token)
                        ->first();
                        // echo($check_token);

                    if ($check_token === null) {
                        $res['success'] = false;
                        $res['message'] = 'Permission Not Allowed';
                        return response()->json($res, 403);
                    }
                } else {
                    $res['success'] = false;
                    $res['message'] = 'Not Authorized';
                    return response()->json($res, 401);
                }
            } else {
                //return response($request->header('password'), 401);
                $res['success'] = false;
                $res['message'] = 'Not Authorized';
                return response()->json($res, 401);
        }
    }

cari src/app/Providers/AuthServiceProvider.php
// tambahkan
            if ($request->header('Authorization')) {
                $token = str_replace('Bearer ', '', $request->header('Authorization'));
                return DB::table('users')->where('password', $token)->first();
            }
cari src/routes/web.php
// tambahkan
$router->group(['prefix' => 'api/user'], function() use ($router){
    $router->get('/', ['uses' => 'UserController@index']);
    $router->get('/{id}', ['uses' => 'UserController@get_user']);
});
