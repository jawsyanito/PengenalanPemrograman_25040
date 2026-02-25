//Menu tampil ganjil genap sampe batas

#include <iostream>
using namespace std;

int angka = 0;

void ganjil(int batas){
    for (int i=0 ; i < batas; i++) {
        if ( i % 2 != 0){
            cout << i << " ";
        }
    }
}

void genap(int batas){
    for (int i=0 ; i < batas; i++) {
        if ( i % 2 == 0){
            cout << i << " ";
        }
    }
}

int main () {
    int batas, pilih;

    cout << "Selamat datang di program tampilan bilangan ganjil genap";

    cout << "Apa yang ingin anda tampilkan ?"<< endl;
    cout << "1. Ganjil \n2. Genap\n";
    cin >> pilih;

    cout << "Silahkan masukan batas bilangan yang akan diinput : ";
    cin >> batas;

    switch (pilih) {
        case 1 : 
            ganjil(batas);
        break;

        case 2 :
            genap(batas);
        break;

        default :
            cout << "Masukan  tidak valid";
        break;
    }

    cout << "\nTerimakasih telah menggunakan program ini ! " << endl;

    return 0;
}