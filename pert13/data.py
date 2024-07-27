import sqlite3

class User:
    def __init__(self, username, email, phone_number):
        self.username = username
        self.email = email
        self.phone_number = phone_number
        self.id = None
    
    def save_to_db(self):
        conn = sqlite3.connect('user_data.db')
        cursor = conn.cursor()
        cursor.execute('''
        INSERT INTO users (username, email, phone_number)
        VALUES (?, ?, ?)
        ''', (self.username, self.email, self.phone_number))
        self.id = cursor.lastrowid
        conn.commit()
        conn.close()

    def update_email(self, new_email):
        conn = sqlite3.connect('user_data.db')
        cursor = conn.cursor()
        cursor.execute('''
        UPDATE users
        SET email = ?
        WHERE id = ?
        ''', (new_email, self.id))
        self.email = new_email
        conn.commit()
        conn.close()
        print(f"Email updated to: {self.email}")

    def log_activity(self, activity):
        conn = sqlite3.connect('user_data.db')
        cursor = conn.cursor()
        cursor.execute('''
        INSERT INTO activity_log (user_id, activity)
        VALUES (?, ?)
        ''', (self.id, activity))
        conn.commit()
        conn.close()
        print(f"Activity logged: {activity}")

    def display_info(self):
        conn = sqlite3.connect('user_data.db')
        cursor = conn.cursor()
        cursor.execute('''
        SELECT * FROM users
        WHERE id = ?
        ''', (self.id,))
        user = cursor.fetchone()
        print(f"Username: {user[1]}")
        print(f"Email: {user[2]}")
        print(f"Phone Number: {user[3]}")

        cursor.execute('''
        SELECT activity FROM activity_log
        WHERE user_id = ?
        ''', (self.id,))
        activities = cursor.fetchall()
        print("Activity Log:")
        for activity in activities:
            print(f"- {activity[0]}")
        
        conn.close()

# Buat instance dari kelas User dan simpan ke database
user1 = User(username="john_doe", email="john@example.com", phone_number="123-456-7890")
user1.save_to_db()

# Tampilkan informasi pengguna
user1.display_info()

# Perbarui email
user1.update_email("john.doe@newdomain.com")

# Log aktivitas pengguna
user1.log_activity("Logged in")
user1.log_activity("Updated profile")

# Tampilkan informasi pengguna setelah pembaruan
user1.display_info()
