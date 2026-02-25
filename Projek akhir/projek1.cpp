
#include <iostream>
using namespace std;

const int maxPembeli = 100;
const int maxBarangPerTransaksi = 3 ;
int banyakPembeli = 0;

struct dataBarang {
    string jenis;
    int jumlah;
};
struct dataPelanggan {
    dataBarang barangDibeli[maxBarangPerTransaksi];  
    int banyakBarangDibeli = 0;
};

dataPelanggan rekapPelangan[maxPembeli];

void menu1();
void jenisBaju();
void tampilRekap();

void menu1(){
    cout << "==================================================" << endl;
    cout << "Selamat datang di program rekap harian butik Jnito" << endl;
    cout << "==================================================" << endl;
    cout << "\nSilahkan pilih : " << endl;
    cout << "1. Mulai Rekap \n2. Tampilkan hasil rekap \n3. Keluar dari program" << endl;
}

void jenisBaju(){
    cout << "Baju yang tersedia : " << endl;
    cout << "1. Kemeja  " << endl
         << "2. Kaos  " << endl
         << "3. Baju Formal  " << endl;
}

void tampilRekap(){
    if (banyakPembeli == 0) {
        cout << "\n*** Data rekap harian masih kosong. ***" << endl;
        return;
    } else {
    cout << "\n==================================================" << endl;
    cout << "          HASIL REKAP PENJUALAN HARIAN" << endl;
    cout << "==================================================" << endl;
    
    for (int i = 0; i < banyakPembeli; i++) {
        cout << "\n[ PEMBELI KE-" << (i + 1) << " ]" << endl;
        
        if (rekapPelangan[i].banyakBarangDibeli == 0) {
            cout << "  - Tidak ada barang yang dicatat." << endl;
            continue;
        }
        for (int j = 0; j < rekapPelangan[i].banyakBarangDibeli; j++) {
            cout << "  - Jenis: " << rekapPelangan[i].barangDibeli[j].jenis
                 << ", Jumlah: " << rekapPelangan[i].barangDibeli[j].jumlah << endl;
        }
    }
    cout << "==================================================" << endl;
    }
}

int main(){
    int pilih;
    char isLanjut1 = 'y',isLanjut2 = 'n' ;
    
    do {
        menu1();
        cin >> pilih;
        
        switch (pilih) {
            case 1 : 
            cout << "Banyak pembeli hari ini : ";
            cin >> banyakPembeli;

            if (banyakPembeli > maxPembeli) {
                    cout << "Maksimal pembeli adalah " << maxPembeli << endl;
                    banyakPembeli = maxPembeli ;
                }    

            jenisBaju();    

            for (int i = 0; i < banyakPembeli; i++) {
                    cout << "\n=== Rekap Pembeli Ke-" << (i + 1) << " ===" << endl;
                    char isLanjut1 = 'y';
                    int barangCounter = 0; 
                    rekapPelangan[i].banyakBarangDibeli = 0;
                    
                    while (isLanjut1 == 'y' && barangCounter < maxBarangPerTransaksi) {
                        int jenisPilihan;
                        string jenisBajuStr;

                        cout << "Pilih Jenis (1-3) : " ;
                        cin >> jenisPilihan; 
                        switch (jenisPilihan) {
                            case 1: jenisBajuStr = "Kemeja"; break;
                            case 2: jenisBajuStr = "Kaos"; break;
                            case 3: jenisBajuStr = "Baju Formal"; break;
                            default: jenisBajuStr = ""; break;
                        }
                        rekapPelangan[i].barangDibeli[barangCounter].jenis = jenisBajuStr;

                        cout << "Jumlah : ";
                        cin >> rekapPelangan[i].barangDibeli[barangCounter].jumlah; 

                        rekapPelangan[i].banyakBarangDibeli++; 
                        barangCounter++; 
                        
                        cout << "Apakah pembeli ini membeli barang lain ? (y/n) ";
                        cin >> isLanjut1;
                }    
            } 
            break;

            case 2 :
            tampilRekap();
            break;
            
            
        }    
        cout << "Apakah anda ingin kembali ke menu utama ? (y/n) ";
        cin >> isLanjut2;
    }  while (isLanjut2 == 'y');    
    return 0;


};    

















