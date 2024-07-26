# Membuat data pengguna
users = [
    {"username": "user1", "email": "user1@example.com", "password": "pass123", "age": 25, "gender": "Male","No.Telp": "08128822" },
    {"username": "user2", "email": "user2@example.com", "password": "password", "age": 30, "gender": "Male","No.Telp": "08128822"},
    {"username": "user3", "email": "user3@example.com", "password": "abc123", "age": 22, "gender": "Male","No.Telp": "08128822" },
    {"username": "user4", "email": "user4@example.com", "password": "mypassword", "age": 28, "gender": "Male","No.Telp": "08128822"},
    {"username": "user5", "email": "user5@example.com", "password": "pass1234", "age": 35, "gender": "Male","No.Telp": "08128822"}
]

def login(username, password):
    for user in users:
        if user["username"] == username and user["password"] == password:
            return f"Login berhasil. Selamat datang, {user['username']}!"
    return "Username atau password salah. Coba lagi."

# Fungsi untuk input login
def login_system():
    print("Selamat datang di sistem login aplikasi!")
    username = input("Masukkan username: ")
    password = input("Masukkan password: ")
    result = login(username, password)
    print(result)

# Memulai sistem login
login_system()
