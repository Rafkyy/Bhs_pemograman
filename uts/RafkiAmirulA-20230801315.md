# SOAL 1
 1. Jelaskan secara singkat apa itu paradigma dalam Bahasa Pemograman?
# JAWABAN :
**Bahasa pemrograman** adalah alat yang digunakan oleh programmer (pengembang perangkat lunak) untuk menulis kode yang kemudian dapat dieksekusi oleh komputer untuk melakukan tugas tertentu. Bahasa pemrograman menyediakan sintaks dan struktur yang memungkinkan manusia untuk memberikan instruksi kepada komputer dalam bentuk yang dapat dipahami dan dijalankan oleh mesin.

**Paradigma** dalam bahasa pemrograman adalah pendekatan atau gaya pemrograman yang menyediakan serangkaian konsep dan praktik untuk menulis kode program.

# SOAL 2
 2. Jelaskan apa yang dimaksud dengan model data, operator, seleksi dan fungsi?
# JAWABAN :
Berikut adalah penjelasan singkat mengenai model data, operator, seleksi, dan fungsi:

**Model data** adalah cara untuk mengorganisasi dan menyimpan data dalam sistem informasi. Ini mencakup berbagai struktur seperti tabel dalam model relasional, pohon dalam model hierarkis, atau objek dalam model berorientasi objek.

**Operator** adalah simbol atau kata kunci yang digunakan untuk melakukan operasi pada data atau variabel. Contohnya termasuk operator aritmatika (+, -, *, /), operator perbandingan (==, !=, >, <), dan operator logika (&&, ||, !).

**Seleksi** adalah mekanisme dalam pemrograman yang memungkinkan program untuk membuat keputusan berdasarkan kondisi tertentu, seperti menggunakan pernyataan if-else atau switch-case untuk menentukan alur eksekusi kode.

**Fungsi** adalah blok kode yang dirancang untuk melakukan tugas tertentu dan dapat dipanggil kapan saja dalam program. Fungsi dapat menerima parameter sebagai input dan dapat mengembalikan nilai setelah dieksekusi.


# SOAL 3
 3. Jelaskan konsep perulangan pernyataan (Looping Statement) dibawah ini:
```
int n, _ , i, _ ;
cout <<"Masukan jumlah baris : ";
cin >> n;
for (i = l; i <= _; i++)
cout << " ";
for (j = l; _ <= i; _++)
cout << "*";
cout << "\n";
```
Pecahkan perulangan diatas berikan pejelasan terhadap program tersebut dan keluaran dari program tersebut!
# JAWABAN :
Penjelasan Kode yang Diperbaiki:
```
int n, i, j;
cout << "Masukan jumlah baris : ";
cin >> n;
for (i = 1; i <= n; i++) {
    for (int k = 1; k <= n - i; k++) {
        cout << " ";
    }
    for (j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << "\n";
}
```

Pengguna memasukkan jumlah baris (n).

Perulangan luar (for (i = 1; i <= n; i++)) mengontrol jumlah baris.

Perulangan pertama (for (int k = 1; k <= n - i; k++)) mencetak spasi untuk 
membentuk segitiga kanan yang rata kiri.

Perulangan kedua (for (j = 1; j <= i; j++)) mencetak tanda bintang (*) untuk 
membentuk pola segitiga.

cout << "\n"; digunakan untuk pindah ke baris berikutnya setelah setiap baris pola selesai dicetak.

**Ini mencetak segitiga kanan dengan bintang, dengan jumlah baris sesuai input pengguna.**

# SOAL 4
 4. Buatlah program sederhana dengan hasil akhir seperti berikut:
 ```
 > g++ soal4.ccp -o soal4 && ./soal4
 Berarti Usia Kalian sekarang adalah 21 Tahun
 ```
 # JAWABAN :
 JAWABAN ANDA (jawaban4.cpp)

 # SOAL 5
  5. Buatlah program sederhana dengan hasil akhir seperti berikut:
 ```
 > g++ soal5.ccp -o soal4 && ./soal5
 Masukan Angka Pertama : 10
 Masukan Angka Kedua : 2
 Penjumlahan : 12
 Pengurangan : 8
 Perkalian : 20
 Pembagian : 5
 
 ```
# JAWABAN :
JAWABAN ANDA (jawaban5.cpp)

 # SOAL 6
 Lengkapi Codingan Berikut:
```
int main(){
	menu();
	tambah();
	kurang();
	kali();
	bagi();
	return 0;
}
```
# JAWABAN :
JAWABAN ANDA (jawaban6.cpp)


# SOAL 7
7. Buatlah Diagram Alur/Flow yang sesuai dengan source code yang anda lengkapi  (soal nomor 6)
# JAWABAN :
JAWABAN ANDA (jawaban7.puml)