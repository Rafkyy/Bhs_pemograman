def perkalian(x , y):
    return x * y

def pengurangan(x , y):
    return x - y

def penambahan(x , y):
    return x + y

def pembagian(x , y):
    return x / y

def main():
    print("Silakan pilih operasi:")
    print("1. Perkalian")
    print("2. Pengurangan")
    print("3. Penambahan")
    print("4. Pembagian")

    pilihan = input("pilihan (1/2/3/4): ")

    num1 = float(input("Masukkan bilangan pertama: "))
    num2 = float(input("Masukkan bilangan kedua: "))

    if pilihan == '1':
        print("Hasil perkalian:", perkalian(num1, num2))
    elif pilihan == '2':
        print("Hasil pengurangan:", pengurangan(num1, num2))
    elif pilihan == '3':
        print("Hasil penambahan:", penambahan(num1, num2))
    elif pilihan == '4':
        print("Hasil pembagian:", pembagian(num1, num2))
    else:
        print("Pilihan tidak valid")
if __name__ == "__main__":
    main()
