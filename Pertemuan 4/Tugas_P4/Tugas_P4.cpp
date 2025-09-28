#include <iostream>
#include <string>
using namespace std ;

int main(){

string namObat ;
int jumlah, stok ;
double harga, bayar ;

stok = 100;
namObat = "Paracetamol" ;

cout << "Obat yang tersedia Paracetamol " << endl;

cout << "Masukkan harga satuan obat: ";
cin >> harga;

cout << "Masukkan jumlah obat yang dibeli : ";
cin >> jumlah;

if ( jumlah > stok ) {
    cout << "Maaf stok tidak tersedia\n"; 
} else if ( jumlah < 10 ) {
    cout << "Minimum Pembelian Obat adalah 10" ;
} else {
    bayar = jumlah * harga; 
    cout << "Nama Obat\t\t: " << namObat << endl;
    cout << "Jumlah obat yang dibeli\t: " << jumlah << endl;
    cout << "Total yang harus dibayarkan adalah : Rp" << bayar << endl; }

return 0 ;

}


















