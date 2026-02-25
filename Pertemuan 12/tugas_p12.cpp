#include <iostream>
using namespace std;

float diskon;
// Struct untuk barang
struct Barang
{
    string nama;
    int harga;
};

// Fungsi menghitung total harga
int hitungTotal(int harga, int jumlah)
{
    return harga * jumlah;
};
float diskonHarga(float harga, float diskon)
{
    return harga - (harga*diskon);
}
int main()
{
    Barang daftar[6] = {{"Ayam Geprek", 8000}, {"Teh Manis", 4000}, {"Nasi", 3000}, {"Perkedel", 2000}, {"Telur balado", 5000}, {"Rendang", 10000}};
    float totalKeseluruhan = 0,hargaFinal = 0;
    char lanjut;

    do
    {
        // Tampilkan menu
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << ". " << daftar[i].nama << " - Rp." << daftar[i].harga << endl;
        }

        int pilih, jumlah;
        cout << "Pilih menu (1-6): ";
        cin >> pilih;
        cout << "Jumlah: ";
        cin >> jumlah;

        int total = hitungTotal(daftar[pilih - 1].harga, jumlah);
        totalKeseluruhan += total;

        cout << "Total " << daftar[pilih - 1].nama << " = Rp." << total << endl;

        cout << "Pesan lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    if (totalKeseluruhan > 100000) {
        hargaFinal = diskonHarga(totalKeseluruhan, 0.2 );
    } else if (totalKeseluruhan > 50000) {
        hargaFinal = diskonHarga(totalKeseluruhan, 0.1 );
    } else if (totalKeseluruhan > 20000 ) {
        hargaFinal = diskonHarga(totalKeseluruhan, 0.05 );
    } else { 
        hargaFinal = totalKeseluruhan;
    }
    
    cout << "\nAnda Belanja sebesar : Rp." << totalKeseluruhan << endl;
    
    if (totalKeseluruhan > 100000){
        cout << "Yang harus dibayar : Rp."  << hargaFinal << endl;
        cout << "Anda menghemat : Rp." << (totalKeseluruhan - hargaFinal) << endl;
        cout << "Terimakaasih banyak, kamu banyak duitnya !!"<< endl;
    } else if (totalKeseluruhan > 50000){
        cout << "Yang harus dibayar : Rp."  << hargaFinal << endl;
        cout << "Anda menghemat : Rp." << (totalKeseluruhan - hargaFinal) << endl;
        cout << "Terimakasih orang baik" << endl;
    } else if (totalKeseluruhan > 20000 ) {
        cout << "Yang harus dibayar : Rp."  << hargaFinal << endl;
        cout << "Anda menghemat : Rp." << (totalKeseluruhan - hargaFinal) << endl;
        cout << "Terimakasih." << endl;
    } else {
        cout << "Yah kamu gak dapet diskon , T_T" << endl;
    }
    return 0;
}
