#include <iostream>

using namespace std;

int main() {
    int tahun_lahir;
    int tahun_sekarang = 2024;

    cout << "Masukkan tahun lahir kalian: ";
    cin >> tahun_lahir;

    int usia = tahun_sekarang - tahun_lahir;

    cout << "Berarti Usia Kalian sekarang adalah " << usia << " Tahun" << endl;

    return 0;
}
