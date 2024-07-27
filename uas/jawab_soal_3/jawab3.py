import tkinter as tk

def greet():
    print("Hello, world!")

# Membuat jendela utama
root = tk.Tk()
root.title("Contoh GUI")

# Membuat tombol dan menempatkannya di jendela utama
greet_button = tk.Button(root, text="Greet", command=greet)
greet_button.pack()

# Menjalankan aplikasi
root.mainloop()
