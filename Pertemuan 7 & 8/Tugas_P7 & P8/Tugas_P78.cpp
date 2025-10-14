#include <iostream>
using namespace std;

int main () {
    int stok, harga, beli,total, stoktambah, stokkurang, pilih1, pilih2 ;
    char isLanjut ;
    
    harga = 0;
    stok = 0;
    total = 0;

    do {
        cout << " Selamat datang di Apotik JAWSY \n";
        cout << "Pilihan : \n";
        cout << "1. Menambah / mengurangi stok \n";
        cout << "2. Menampilkan jumlah  stok \n";
        cout << "3. Langsung beli obat \n";
        cout << "4. Keluar \n";
        cout << "Pilih : ";
        cin >> pilih1 ;

        switch (pilih1)
        {
        case 1:
            {
            do {
                cout << "Selamat datang Silahkan Pilih :\n";
                cout << "1. Menambah stok\n";
                cout << "2. Mengurangi stok\n";
                cout << "3. Keluar\n";
                cout << " Pilih : ";
                cin >> pilih2;
            
                switch (pilih2)
                {
                case 1 :
                cout << "\nSilahkan masukan jumlah stok yang ingin ditambah : ";
                cin >> stoktambah;
                stok = stok + stoktambah;
                    break;
                case 2 :
                    cout << "\nSilahkan masukan jumlah stok yang ingin dikurang : ";
                    cin >> stokkurang;
                    stok = stok - stokkurang;
                    break;
                default:
                    cout << "Anda keluar";
                    break;
            }
            cout << "\nApakah anda ingin lanjut menambah/mengurangi stok? (y/n) : ";
            cin >> isLanjut;
            }
            while (isLanjut == 'y') ;
            break;
            }
        case 2:
            cout << "Jumlah stok sekarang adalah : " << stok << endl;
            break;
        case 3:
            cout << "Harga Obat = Rp.10.000 " << endl;
            cout << "Masukan obat yang ingin anda beli : ";
            cin >> beli;
            
            if (beli > stok)
            {
                cout << "Maaf stok obat tidak tersedia\n";
                
            } else {
                total = total + beli;
                stok = stok - beli;
                harga = total * 10000;
                cout << "Anda membeli sebanyak : " << total << endl;
                cout << "Sisa stok yang tersedia : " << stok << endl;
                cout << "Total yang harus dibayar : Rp " << harga << endl;
            }
            break;
        case 4:
            cout << "Anda keluar dari program" << endl;
            return 0;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            return 0;
            break;
        }
        cout << "\nApakah anda ingin lanjut ? (y/n) : ";
        cin >> isLanjut;
    } 

    while (isLanjut == 'y');
    cout << "Program Selesai" << endl;
    return 0;
}