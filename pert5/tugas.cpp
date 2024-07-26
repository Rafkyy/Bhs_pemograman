#include <iostream>
#include <string>
#include <map>
using namespace std;



int main() {
    int pilih;
    int mMakan;
    int mMinum;
    char pil;
menu: 
    cout << "MENU" << endl;
    cout << "1. Makanan" << endl;
    cout << "2. Minuman" <<endl;
    cout << "pilihan : " ;
    cin >> pilih;

    switch(pilih){
        case 1:
        cout << "Nasi Goreng : Rp.15.000" << endl;
        cout << "Mie Ayam:  Rp.12.000" << endl;
        cin >> mMakan;
           break;
        case 2:
        cout << "eS teh : Rp.15.000" << endl;
        cout << "Mie Ayam:  Rp.12.000" << endl;
        cin >> mMakan;
           break;

        default:
            cout << "Pilihan Salah" << endl;
            break;
        }
    
        cout << "Ingin Mengulangi ? (Y/N) : " ;
        cin >> pil;
        if ((pil == 'Y' || pil == 'y'))
            {goto menu;}
        else if (pil == 'N' || pil == 'n')
            {goto keluar;}

        keluar:
            cout << "\n TERIMA KASIH" << endl;
        return 0;
}