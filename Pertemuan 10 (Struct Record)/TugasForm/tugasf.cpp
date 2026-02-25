// Nama : Jaw Syanito Ripanto Putra
// NPM : 2510631170040
// Kelas : 1 A

#include <iostream>
#include <string>
using namespace std;

//Agar tampilan lebih rapih
void garis() {
    cout << "\n================================================\n";
}

//Membuat tipe data baru
struct identitas {
    string nama, kota, asalSekolah, npm;
};

int main () {
    int jmlMhsw, pilih ;
    char isLanjut;
    string cari;
    
    garis();
    cout << "Selamat datang di Program Data Mahasiswa";
    garis();
    
    cout << "Masukan jumlah mahasiswa : ";
    cin >> jmlMhsw;
    cin.ignore(); //Biar getline gak lompat
    
    identitas mahasiswa[jmlMhsw];

    do { //Loop agar menampilkan menu
            //Pakai switch Case untuk menu pilihan
            cout << "Silahkan pilih : "<< endl;  
            cout << "1. Input data\n2. Tampilkan data\n3. Cari kumpulan data mahasiswa berdasarkan kota" << endl;
            cin >> pilih;
            cin.ignore();
            switch (pilih) {
                case 1 : //Input data pakai looping
                
                for (int i = 0 ; i < jmlMhsw; i++) {
                    cout << "Masukan nama mahasiswa ke - " << (i + 1) << " : ";
                    getline (cin, mahasiswa[i].nama);
                    cout << "Masukan NPM mahasiswa ke - " << (i + 1) << " : ";
                    cin >> mahasiswa[i].npm;
                    cout << "Masukan kota tinggal mahasiswa ke - " << (i + 1) << " : ";
                    cin >> mahasiswa[i].kota;
                    cin.ignore();
                    cout << "Masukan asal sekolah mahasiswa ke - " << (i + 1) << " : ";
                    getline (cin, mahasiswa[i].asalSekolah);
            
                }
                cout << "Data telah disimpan" << endl;
                break;

                case 2 : //Tampilkan data keseluruhan pakai loop
                    for (int i = 0; i < jmlMhsw; i++){
                        garis();
                        cout << "Mahasiswa ke - " << (i+1) << endl;
                        cout << mahasiswa[i].nama << " | " << mahasiswa[i].npm << " | " << mahasiswa[i].kota << " | " << mahasiswa[i].asalSekolah << endl;
                    }
                break;

                case 3 : //Cari data berdasar kota
                    cout << "Masukan kota yang ingin dicari : ";
                    cin >> cari;
                    //Menyocokan kota yang diinput sama yang dicar pakai looping
                    for (int i = 0 ; i < jmlMhsw; i++) {
                        if (mahasiswa[i].kota == cari) {
                            cout << mahasiswa[i].nama << " | " << mahasiswa[i].npm << " | " << mahasiswa[i].kota << " | " << mahasiswa[i].asalSekolah << endl;
                            garis();
                        }
                    }
                break;

                default :
                    cout << "Tidak valid" << endl;
                    break;
            }
            
            cout << "Apakah anda ingin kembali ke menu utama ?(y/n) "; //Untuk akhiri loop
            cin >> isLanjut;

    } while (isLanjut == 'y');
        
return 0;
}