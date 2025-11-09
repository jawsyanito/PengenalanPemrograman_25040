#include <iostream>
using namespace std;

int main() {
    char isLanjut ;
    int pilihan ;
    cout << "Program\n" ;
    cout << "1. Tambah data \n" ;
    cout << "2. Hapus data \n" ;
    cout << "3. Keluar \n" ;

    do {
        cout << "Apa yang anda pilih ? " ;
        cin >> pilihan ;
        switch (pilihan) {
            case 1 : cout << "Anda Menambah Data\n" ; break ;
            case 2 : cout << "Anda Menghapus Data\n" ; break ;
            case 3 : cout << "Anda Keluar Dari Program\n" ; return 0 ;
            default : cout << "Pilihan tidak valid\n" ;
        }

        cout << "Apakah anda ingin lanjut? (y/n)" ;
        cin >> isLanjut ;
    } while (isLanjut == 'y' ) ;

    cout << "Program selesai " ;

return 0;    
}