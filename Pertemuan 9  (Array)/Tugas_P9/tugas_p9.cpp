#include <iostream>
using namespace std;

int main(){
    int jmlBarang;
    int harga, stok;
    
    cout << "\n------------------------------------------\n" << endl;
    cout << "Selamat datang di program stok warung Jawsy" << endl;
    cout << "\n------------------------------------------\n" << endl;
    
    
    cout << "Masukan jumlah barang yang ingin diinput : ";
    cin >> jmlBarang;
    
    int dataWarung[jmlBarang][2] ;
    string namaBarang[jmlBarang] ;
    
    for (int i = 0; i < jmlBarang; i++) {
        cout << "\n------------------------------------------\n" << endl;
        cout << "Masukan nama barang ke - " << (i+1) << " : ";
        cin >> namaBarang [i] ;
        cout << "\nMasukan jumlah stok barang: ";
        cin >> dataWarung[i][0];
        cout << "Masukan harga barang      : ";
        cin >> dataWarung[i][1];
    }
    cout << "\n------------------------------------------\n" << endl;
    cout << "Nama Barang\tStok\tHarga" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < jmlBarang; i++) {
        cout << namaBarang[i] << "\t\t" << dataWarung[i][0] << "\t" << dataWarung[i][1] << endl;
    }
    
    return 0;

}












