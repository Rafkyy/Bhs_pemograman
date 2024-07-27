import sqlite3

# Koneksi ke SQLite database (akan membuat file database jika belum ada)
conn = sqlite3.connect('user_data.db')

# Membuat cursor untuk eksekusi perintah SQL
cursor = conn.cursor()

# Membuat tabel untuk menyimpan data pengguna
cursor.execute('''
CREATE TABLE IF NOT EXISTS users (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    username TEXT UNIQUE NOT NULL,
    email TEXT NOT NULL,
    phone_number TEXT
)
''')

# Membuat tabel untuk menyimpan log aktivitas
cursor.execute('''
CREATE TABLE IF NOT EXISTS activity_log (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    user_id INTEGER,
    activity TEXT,
    FOREIGN KEY (user_id) REFERENCES users (id)
)
''')

# Commit perubahan dan tutup koneksi
conn.commit()
conn.close()
