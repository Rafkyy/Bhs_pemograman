# SOAL 1
 1. Jelaskan sesuai dengan pemahaman anda apa itu Bahasa Pemrograman?
# JAWABAN :
**Bahasa pemrograman** adalah alat yang digunakan oleh programmer (pengembang perangkat lunak) untuk menulis kode yang kemudian dapat dieksekusi oleh komputer untuk melakukan tugas tertentu. Bahasa pemrograman menyediakan sintaks dan struktur yang memungkinkan manusia untuk memberikan instruksi kepada komputer dalam bentuk yang dapat dipahami dan dijalankan oleh mesin.
# SOAL 2
2. Jelaskan berdasarkan pemahaman anda apa saja paradigma dalam Bahasa Pemrograman?
# JAWABAN :
**Paradigma** dalam bahasa pemrograman adalah pendekatan atau gaya pemrograman yang menyediakan serangkaian konsep dan praktik untuk menulis kode program. Berikut adalah beberapa paradigma utama dalam bahasa pemrograman beserta penjelasan dan contohnya:

Paradigma Pemrograman Imperatif:

Penjelasan: Pemrograman imperatif berfokus pada pernyataan-pernyataan yang mengubah status program. Dalam paradigma ini, program terdiri dari serangkaian instruksi yang dijalankan oleh komputer untuk mengubah keadaan sistem.
Contoh Bahasa: C, C++, Java, Python.
Karakteristik:
Menggunakan variabel untuk menyimpan data.
Menggunakan pernyataan seperti penugasan (assignment), pengulangan (loops), dan percabangan (conditionals).
Program dieksekusi dalam urutan yang ditentukan oleh programmer.
Paradigma Pemrograman Deklaratif:

Penjelasan: Pemrograman deklaratif berfokus pada apa yang harus dilakukan, bukan bagaimana melakukannya. Programmer mendeskripsikan hasil yang diinginkan tanpa menentukan langkah-langkah eksekusi.
Contoh Bahasa: SQL, HTML, Prolog.
Karakteristik:
Tidak menggunakan perintah imperatif (tidak ada loops atau assignments).
Menekankan pada logika dan deklarasi hasil.
Sering digunakan dalam pemrograman basis data dan pengembangan web.
Paradigma Pemrograman Fungsional:

Penjelasan: Pemrograman fungsional berfokus pada komputasi sebagai evaluasi fungsi matematika. Fungsi dalam paradigma ini tidak memiliki efek samping (pure functions).
Contoh Bahasa: Haskell, Lisp, Erlang, Scala.
Karakteristik:
Menggunakan fungsi sebagai unit dasar komputasi.
Mendukung higher-order functions (fungsi yang dapat menerima fungsi lain sebagai argumen atau mengembalikan fungsi sebagai hasil).
Menghindari perubahan status dan data mutable.
Menggunakan konsep rekursi sebagai pengganti loops.
Paradigma Pemrograman Berorientasi Objek (Object-Oriented Programming/OOP):

Penjelasan: Pemrograman berorientasi objek berfokus pada objek yang mengandung data dan metode untuk memanipulasi data tersebut. Paradigma ini mendukung enkapsulasi, pewarisan, dan polimorfisme.
Contoh Bahasa: Java, C++, Python, Ruby.
Karakteristik:
Menggunakan kelas (class) dan objek (object) sebagai unit dasar.
Mendukung enkapsulasi untuk menyembunyikan detail implementasi.
Mendukung pewarisan untuk membentuk hierarki kelas dan memperluas fungsionalitas.
Mendukung polimorfisme untuk memperlakukan objek dari kelas yang berbeda dengan cara yang sama.
Paradigma Pemrograman Logika:

Penjelasan: Pemrograman logika berfokus pada mendefinisikan fakta dan aturan logika, dan menggunakan inferensi untuk menemukan solusi. Program ditulis sebagai serangkaian aturan logika.
Contoh Bahasa: Prolog.
Karakteristik:
Menggunakan aturan logika dan fakta untuk mendefinisikan hubungan antar data.
Sistem inferensi digunakan untuk menghasilkan hasil dari aturan dan fakta yang diberikan.
Cocok untuk pemecahan masalah yang melibatkan logika dan hubungan kompleks.
Paradigma Pemrograman Berbasis Skrip (Scripting):

Penjelasan: Pemrograman berbasis skrip digunakan untuk menulis skrip yang mengotomatisasi tugas-tugas tertentu. Biasanya digunakan untuk pemrograman sistem, web, dan otomasi.
Contoh Bahasa: Python, JavaScript, Bash, Perl.
Karakteristik:
Biasanya diinterpretasikan, bukan dikompilasi.
Digunakan untuk mengotomatisasi tugas-tugas rutin.
Cepat dalam pengembangan dan eksekusi.
Paradigma Pemrograman Paralel dan Konkuren:

Penjelasan: Pemrograman paralel dan konkuren berfokus pada penulisan program yang dapat dieksekusi secara bersamaan oleh beberapa prosesor atau thread.
Contoh Bahasa: Go, Erlang, Scala (dengan Akka), Java (dengan concurrency utilities).
Karakteristik:
Mendukung eksekusi parallel untuk meningkatkan kinerja.
Menggunakan konsep seperti thread, goroutines, actor model, dan message passing.
Mengatasi masalah sinkronisasi dan komunikasi antar proses/thread.


# SOAL 3
3. Jelaskan type data yang anda ketahui dan berikan penjelasan terkait type data tersebut!
# JAWABAN :
# Tipe Data Primitif

a. Integer
Penjelasan: Menyimpan bilangan bulat tanpa desimal.
Contoh: 5, -42, 1024.
Bahasa Pemrograman: int (C, C++, Java, Python).

b. Floating Point (Float)
Penjelasan: Menyimpan bilangan desimal.
Contoh: 3.14, -0.001.
Bahasa Pemrograman: float (C, C++, Java, Python).

c. Double
Penjelasan: Menyimpan bilangan desimal dengan presisi lebih tinggi.
Contoh: 3.141592653589793.
Bahasa Pemrograman: double (C, C++, Java, Python).

d. Character (Char)
Penjelasan: Menyimpan satu karakter.
Contoh: 'a', 'Z'.
Bahasa Pemrograman: char (C, C++, Java).

e. Boolean
Penjelasan: Menyimpan nilai benar atau salah.
Contoh: true, false.
Bahasa Pemrograman: bool (C++, Java, Python).

# Tipe Data Non-Primitif
a. String
Penjelasan: Menyimpan rangkaian karakter atau teks.
Contoh: "Hello, World!".
Bahasa Pemrograman: std::string (C++), String (Java), str (Python).

b. Array
Penjelasan: Menyimpan sekumpulan nilai dengan tipe data yang sama.
Contoh: [1, 2, 3].
Bahasa Pemrograman: int[] (C++, Java), list (Python).

c. List
Penjelasan: Kumpulan elemen yang bisa diubah (mutable).
Contoh: [1, "apple", 3.14].
Bahasa Pemrograman: list (Python), ArrayList (Java).

d. Tuple
Penjelasan: Kumpulan elemen yang tidak bisa diubah (immutable).
Contoh: (1, "banana", 4.5).
Bahasa Pemrograman: tuple (Python).

e. Dictionary
Penjelasan: Kumpulan pasangan kunci-nilai (key-value pairs).
Contoh: {"name": "Alice", "age": 25}.
Bahasa Pemrograman: dict (Python), HashMap (Java).

f. Set
Penjelasan: Kumpulan elemen yang unik dan tidak terurut.
Contoh: {1, 2, 3}.
Bahasa Pemrograman: set (Python), HashSet (Java).


# SOAL 4
 Lengkapi Codingan Berikut:
```int main(){
	menu();
	tambah();
	kurang();
	kali();
	bagi();
	return 0;
}
```
# JAWABAN :
JAWABAN ANDA (essay4.cpp)


# STUDI KASUS
# Berdasarkan soal essay no 4.
Buatlah Diagram Alur/Flow yang sesuai dengan source yang anda lengkapi 

# JAWABAN
JAWABAN ANDA (studikasus.puml)
