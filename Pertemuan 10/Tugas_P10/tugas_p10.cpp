#include <iostream>
#include <string>
using namespace std;

struct dataPasien {
    string nama;
    string penyakit;
    string alamat;
    int biaya;
};

int main () {
    int jmlPasien, jmlhargtot = 0;
    cout << " Selamat Datang di Program rekap pasien RS Jawsy" << endl;
    cout << "\n================================================\n" << endl;
    cout << " Silahkan masukan jumlah pasien yang akan direkap : " ;
    cin >> jmlPasien;
    cout << "\n================================================\n";

    dataPasien pasien[jmlPasien];
    for (int i = 0; i < jmlPasien; i++) {
        cin.ignore();
        cout << " Masukan nama pasien ke - " << ( i + 1) << " : ";
        getline(cin,pasien[i].nama);
        cout << " Masukan jenis penyakit pasien ke - " << ( i + 1) << " : ";
        getline(cin,pasien[i].penyakit);
        cout << " Masukan alamat pasien ke - " << ( i + 1) << " : ";
        getline(cin,pasien[i].alamat);
        cout << " Masukan total biaya perawatan pasien ke - " << ( i + 1) << " : ";
        cin >> pasien[i].biaya;
        jmlhargtot = jmlhargtot + pasien[i].biaya;
        cout << "\n================================================\n";
    }
    for (int i=0; i < jmlPasien; i++) {
        cout << " Rekap yang telah diinput" << endl;
        cout << " Pasien ke - " << ( i + 1) << endl;
        cout << "Nama            : " << pasien[i].nama << endl;
        cout << "Jenis Penyakit  : " << pasien[i].penyakit << endl;
        cout << "Alamat          : " << pasien[i].alamat << endl;
        cout << "Biaya Perawatan : " << pasien[i].biaya << endl;
        cout << "----------------------------------------" << endl;
     }

     cout << " Jumlah total pasien sekarang : " << jmlPasien << endl;
     cout << " Total biaya perawatan seluruh pasien : " << jmlhargtot << endl;

     return 0;
}

