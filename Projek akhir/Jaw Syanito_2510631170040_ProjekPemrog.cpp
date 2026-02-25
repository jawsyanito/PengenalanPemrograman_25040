/**
 * Program Final Project 
 * Mata Kuliah Pengenalan Pemrograman
 * Nama Project  : Program Rekap Toko Baju 
 * Nama Mahasiswa: Jaw Syanito Riptanto Putra
 * NPM           : 2510631170040
 * Kelas         : 2025 A
**/

// Memanggil file header yang akan digunakan
#include <iostream> // Fungsi standar input dan output

// Menyederhanakan pemanggilan fungsi pada std
using namespace std; 

//Jumlah maks array yang akan dipakai
const int maxPembeli = 100;
const int MaxbarangPertranksaksi = 3;

//Deklarasi banyak pembeli sementara 
int banyakPembeli = 0;

//Tipe data baru bersarang yang dipakai untuk merekap data pelanggan
struct dataBarang {
    string jenisBaju;
    int jumlah;
    float totalHargaBarang = 0;
};
struct dataPembeli {
    dataBarang barangdibeli[MaxbarangPertranksaksi];
    int banyakJenisDibeli = 0;
    float totalBelanjaan= 0;
};

//Deklarasi array yang akan digunakan untuk merekap data pelanggan
dataPembeli rekapPembeli[maxPembeli];

//Deklarasi fungsi yang akan dipakai
void garis();
void bersihkanLayar();
void menuUtama();
void daftarBarang();
void tampilRekap();
void hargaFinal();

//Fungsi untuk menampilkan garis batas (Biar rapih)
void garis (){
    cout << "\n======================================================" << endl;
}

//Fungsi untuk menghapus layar secara sederhana (Biar rapih)
void bersihkanLayar(){
    for (int i = 0; i < 30; i++) {
        cout << endl;
    }
}

//Fungsi untuk menampilkan menu utama
void menuUtama(){
    bersihkanLayar();
    garis();
    cout << "Selamat datang di Program Rekap Harian Toko Baju JawSyn";
    garis();
    cout << "Silahkan Pilih : " << endl
         << "1. Mulai Rekap " << endl
         << "2. Tampilkan Hasil Rekap " << endl
         << "3. Keluar " << endl;
}

//Fungsi untuk menampilkan barang yang dijual beserta harganya
void daftarBarang(){
    cout << "Kode barang yang tersedia : " << endl
         << "1. Kemeja      (100k)" << endl
         << "2. Kaos santai (30k)" << endl
         << "3. Baju muslim (70k)" << endl;
}

//Fungsi untuk menampilkan hasil rekap beserta penghasilan yang didapat
void tampilRekap(){
    float pemasukan = 0;
    garis();
    cout << "\nHasil Rekap Harian Toko Baju JawSyn" << endl;
    garis();

    cout << "Banyak pembeli hari ini adalah : " << banyakPembeli << endl;
    cout << "Promo : " << endl
         << "Pembelian diatas 500k diskon 25%" << endl
         << "Pembelian diatas 250K diskon 10%" << endl;
    
    for (int i = 0; i < banyakPembeli; i++){
        cout << "\n\nPembeli ke - " << (i + 1) << " : " << endl;

        for (int j = 0; j < rekapPembeli[i].banyakJenisDibeli; j++){
            cout << rekapPembeli[i].barangdibeli[j].jenisBaju << " , Jumlah : " << rekapPembeli[i].barangdibeli[j].jumlah << endl;
        }

        cout << "Total belanjaan : " << rekapPembeli[i].totalBelanjaan << " K " << endl;
        pemasukan = pemasukan + rekapPembeli[i].totalBelanjaan;
    }

    cout << "\nPemasukan hari ini adalah : " << pemasukan << " K " << endl;
}

//Fungsi untuk menghitung jumlah belanjaan perpelanggan setelah diskon
void hargaFinal(){
    for (int i = 0; i < banyakPembeli;i ++){
        rekapPembeli[i].totalBelanjaan = 0;
        for (int j = 0; j < rekapPembeli[i].banyakJenisDibeli; j++){
            rekapPembeli[i].totalBelanjaan = (rekapPembeli[i].totalBelanjaan + rekapPembeli[i].barangdibeli[j].totalHargaBarang);
        }

        //Menghitung total belanjaan setelah diskon
        if (rekapPembeli[i].totalBelanjaan>=500){
            rekapPembeli[i].totalBelanjaan = (rekapPembeli[i].totalBelanjaan * 0.75);
        } else if (rekapPembeli[i].totalBelanjaan>=250){
            rekapPembeli[i].totalBelanjaan = (rekapPembeli[i].totalBelanjaan * 0.90);
        } else {
        rekapPembeli[i].totalBelanjaan = rekapPembeli[i].totalBelanjaan;
        }
    }
}

//Funsi Utama
int main () {
    int pilihMenu;
    string baju;
    char isLanjut = 'y';

    do {
    menuUtama();
    cin >> pilihMenu;

    switch (pilihMenu) {
        case 1 : 
            bersihkanLayar();
            cout << "Banyak pembeli hari ini : ";
            cin >> banyakPembeli;

            for (int i = 0; i < banyakPembeli; i++ ){
                int tranksaksi = 0;
                bersihkanLayar();
                daftarBarang();
                cout << "\nRekap pembeli ke - " << (i + 1) << " : " << endl;
                do {
                    int kodeBaju = 0;
                    int jumlahBaju = 0;
                    cout << "Kode baju yang dibeli : ";
                    cin >> kodeBaju;

                    //Konversi kode baju ke dalam bentuk string
                    switch (kodeBaju) {
                        case 1 : 
                        baju = "Kemeja"; 
                        break;

                        case 2 :
                        baju = "Kaos santai";
                        break;

                        case 3 :
                        baju = "Baju muslim";
                        break;

                        default :
                        cout << "Kode tidak valid";
                        break;
                    }
                    
                    rekapPembeli[i].barangdibeli[tranksaksi].jenisBaju = baju;
                    
                    cout << "Jumlah : ";
                    cin >> jumlahBaju;
                    
                    rekapPembeli[i].barangdibeli[tranksaksi].jumlah = jumlahBaju;

                    //Menghitung Total belanjaan barang pertranksaksi
                    if (kodeBaju == 1){
                        rekapPembeli[i].barangdibeli[tranksaksi].totalHargaBarang = (jumlahBaju * 100);
                    } else if (kodeBaju == 2){
                        rekapPembeli[i].barangdibeli[tranksaksi].totalHargaBarang = (jumlahBaju * 30);
                    } else if (kodeBaju == 3){
                        rekapPembeli[i].barangdibeli[tranksaksi].totalHargaBarang = (jumlahBaju * 70);
                    }

                    rekapPembeli[i].banyakJenisDibeli = rekapPembeli[i].banyakJenisDibeli + 1;
                    tranksaksi = tranksaksi + 1;
                    
                    cout << "Apakah pembeli ini membeli barang yang lain ? (y/n) ";
                    cin >> isLanjut;
                } while (isLanjut == 'y');
            } break;

        case 2 :
            bersihkanLayar();
            hargaFinal();
            tampilRekap();
            break;

        case 3 : 
            bersihkanLayar();
            cout << "Anda keluar dari program" << endl;
            return 0;
            break;

        default :
            cout << "Inputan tidak valid" << endl;
            break;

    }           
    
    cout << "Apakah anda ingin kembali ke menu utama ? (y/n) ";
    cin >> isLanjut;
    } while (isLanjut == 'y');

    return 0;
}