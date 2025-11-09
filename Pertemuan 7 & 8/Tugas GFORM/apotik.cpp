#include <iostream>
using namespace std;

int main () {
    int harga, jumlahObat;
    char isLanjut;
    double hargaTotal = 0 ,hargaTemp;
    cout << "---- Selamat Datang di Program Kasir Apotik Jawsy ----" << endl;
    do {
        cout << "\n Masukan jumlah obat : ";
        cin >> jumlahObat;
        cout << " Masukan harga obatnya : Rp ";
        cin >> harga;
        hargaTemp = jumlahObat * harga;
        hargaTotal = hargaTotal + hargaTemp;
        cout << "\nApakah ada obat lain yang dibeli ? (y/n) ";
        cin >> isLanjut;
    } while (isLanjut == 'y') ;
    cout << "\n----------------------------------------------------" << endl;
    cout << "\nAnda belanja sebanyak : Rp " << hargaTotal << endl;
    cout << "Terimakasih Telah membeli di Apotik Jawsy " << endl;
    return 0;
}

