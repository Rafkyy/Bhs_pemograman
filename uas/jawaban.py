# Definisikan kelas User untuk menyimpan data pengguna
class User:
    def __init__(self, username, email, phone_number):
        self.username = username
        self.email = email
        self.phone_number = phone_number
        self.activity_log = []
    
    def update_email(self, new_email):
        self.email = new_email
        print(f"Email updated to: {self.email}")
    
    def log_activity(self, activity):
        self.activity_log.append(activity)
        print(f"Activity logged: {activity}")

    def display_info(self):
        print(f"Username: {self.username}")
        print(f"Email: {self.email}")
        print(f"Phone Number: {self.phone_number}")
        print("Activity Log:")
        for activity in self.activity_log:
            print(f"- {activity}")

# Buat instance dari kelas User
user1 = User(username="john_doe", email="john@example.com", phone_number="123-456-7890")

# Tampilkan informasi pengguna
user1.display_info()

# Perbarui email
user1.update_email("john.doe@newdomain.com")

# Log aktivitas pengguna
user1.log_activity("Logged in")
user1.log_activity("Updated profile")

# Tampilkan informasi pengguna setelah pembaruan
user1.display_info()
