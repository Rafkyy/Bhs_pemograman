#include <iostream>

using namespace std;

void tambah(double a, double b) {
    cout << "Hasil: " << a + b << endl << endl;
}

void kurang(double a, double b) {
    cout << "Hasil: " << a - b << endl << endl;
}

void kali(double a, double b) {
    cout << "Hasil: " << a * b << endl << endl;
}

void bagi(double a, double b) {
    if (b != 0) {
        cout << "Hasil: " << a / b << endl << endl;
    } else {
        cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}

int main() {
    int pilihan;
    double num1, num2;

        cout << "Pilih operasi yang ingin dilakukan:" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka Pertama: ";
            cin >> num1 ;
            cout << "Masukkan angka Kedua: ";
            cin >> num2 ;
        }

        switch (pilihan) {
            case 1:
                tambah(num1, num2);
                break;
            case 2:
                kurang(num1, num2);
                break;
            case 3:
                kali(num1, num2);
                break;
            case 4:
                bagi(num1, num2);
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
            return 0;
    } 



