#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pilihanMakanan, pilihanMinuman;
    int pilih;
    char pil;
menu: 
    cout << "MENU" << endl;
    cout << "1. Makanan" << endl;
    cout << "2. Minuman" <<endl;
    cout << "pilihan : " ;
    cin >> pilih;

    double hargaMakanan[] = {15000, 12000, 18000, 20000, 15000};
    double hargaMinuman[] = {5000, 6000, 10000, 12000, 8000};

    string makanan[] = {"Nasi Goreng", "Mie Ayam", "Ayam Goreng", "Nasi Padang", "Soto Ayam"};
    string minuman[] = {"Es Teh", "Es Jeruk", "Jus Alpukat", "Jus Mangga", "Kopi"};

    switch(pilih){
        case 1:
    cout << "Menu Makanan:\n";
    for (int i = 0; i < sizeof(makanan) / sizeof(makanan[0]); ++i) {
        cout << i + 1 << ". " << makanan[i] << " - Rp " << hargaMakanan[i] << endl;
    }
    cout << "\nMasukkan nomor makanan yang dipilih: ";
    cin >> pilihanMakanan;

        case 2:
    cout << "\n\nMenu Minuman:\n";
    for (int i = 0; i < sizeof(minuman) / sizeof(minuman[0]); ++i) {
        cout << i + 1 << ". " << minuman[i] << " - Rp " << hargaMinuman[i] << endl;
    }
    cout << "Masukkan nomor minuman yang dipilih: ";
    cin >> pilihanMinuman;
    break;
    
    default:
    cout << "Pilihan Salah" << endl;
    break;
    }
    double totalHarga = hargaMakanan[pilihanMakanan - 1] + hargaMinuman[pilihanMinuman - 1];
    cout << fixed << setprecision(2);
    cout << "\nPilihan Anda "<< makanan[pilihanMakanan - 1]<< " + " << minuman [pilihanMinuman - 1] <<endl ;
    cout << "Total Harga: Rp " << totalHarga << endl;
    
    cout << "Ingin Mengulangi ? (Y/N) : " ;
    cin >> pil;
        if ((pil == 'Y' || pil == 'y'))
            {goto menu;}
        else if (pil == 'N' || pil == 'n')
            {goto keluar;}

    keluar:
        cout << "\nTERIMA KASIH" << endl;

    return 0;
}
