#include <iostream>
#include <string>
using namespace std ;

int main(){

string namObat ;
int jumlah, stok ;
double harga, bayar ;

namObat = "Paracetamol" ;

cout << "Obat yang tersedia Paracetamol " << endl;

cout << "Masukan stok obat : " ;
cin >> stok ;

if (stok >= 50) {
    cout << "Stok aman " << endl ;
} else if (stok >= 20) {
    cout << "Stok menipis " << endl ;
} else {
    cout << "Stok habis, segera restok! " << endl ;
}

cout << "Masukkan harga satuan obat: ";
cin >> harga;

cout << "Masukkan jumlah obat yang dibeli : ";
cin >> jumlah;

if ( jumlah > stok ) {
    cout << "Maaf stok tidak tersedia\n"; 
    return 0 ;
} else if ( jumlah < 10 ) {
    cout << "Minimum Pembelian Obat adalah 10" ;
    return 0 ;
} else {
    bayar = jumlah * harga; 
    cout << "Nama Obat\t\t: " << namObat << endl;
    cout << "Jumlah obat yang dibeli\t: " << jumlah << endl;
    cout << "Total yang harus dibayarkan adalah : Rp" << bayar << endl; }

return 0 ;

}


















