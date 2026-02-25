#include <iostream>
#include <string>
using namespace std;

void garis() {
    cout << "\n================================================\n";
}

struct identitas {
    string nama, kota, asalSekolah, npm;
};

int main() {
    int jmlMhsw ;
    int pilih;
    char isLanjut = 'y';
    identitas mahasiswa[jmlMhsw];

    system("cls");
    garis();
    cout << "Selamat datang di Program Data Mahasiswa";
    garis();

    do {
        cout << "\nMenu Pilihan:\n";
        cout << "1. Input data mahasiswa\n";
        cout << "2. Tampilkan semua data mahasiswa\n";
        cout << "3. Cari data mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {

        case 1: {
            cout << "Masukan jumlah mahasiswa yang akan diinput: ";
            cin >> jmlMhsw;

            for (int i = 0; i < jmlMhsw; i++) {
                cout << "\nMahasiswa ke-" << (i+1) << ":\n";
                cout << "Nama          : ";
                getline(cin,mahasiswa[i].nama);
                cout << "NPM           : ";
                cin >> mahasiswa[i].npm;
                cout << "Kota tinggal  : ";
                cin >> mahasiswa[i].kota;
                cout << "Asal sekolah  : ";
                cin >> mahasiswa[i].asalSekolah;
            }

            cout << "\nData berhasil disimpan.\n";
            break;
        }

        case 2: {
            if (jmlMhsw == 0) {
                cout << "Belum ada data mahasiswa.\n";
            } else {
                garis();
                cout << "DATA MAHASISWA:\n";
                garis();
                for (int i = 0; i < jmlMhsw; i++) {
                    cout << "Mahasiswa ke-" << (i+1) << endl;
                    cout << mahasiswa[i].nama << " | "
                         << mahasiswa[i].npm << " | "
                         << mahasiswa[i].kota << " | "
                         << mahasiswa[i].asalSekolah << endl;
                }
            }
            break;
        }

        case 3: {
            if (jmlMhsw == 0) {
                cout << "Belum ada data untuk dicari.\n";
                break;
            }

            int cariPilihan;
            cout << "\nCari berdasarkan:\n";
            cout << "1. Nama\n2. NPM\n3. Kota\n4. Asal Sekolah\n";
            cout << "Pilih: ";
            cin >> cariPilihan;

            string keyword;
            cout << "Masukan kata kunci: ";
            cin >> keyword;

            bool ditemukan = false;

            for (int i = 0; i < jmlMhsw; i++) {
                if ((cariPilihan == 1 && mahasiswa[i].nama == keyword) ||
                    (cariPilihan == 2 && mahasiswa[i].npm == keyword) ||
                    (cariPilihan == 3 && mahasiswa[i].kota == keyword) ||
                    (cariPilihan == 4 && mahasiswa[i].asalSekolah == keyword)) 
                {
                    ditemukan = true;
                    garis();
                    cout << "Data ditemukan:\n";
                    cout << mahasiswa[i].nama << " | "
                         << mahasiswa[i].npm << " | "
                         << mahasiswa[i].kota << " | "
                         << mahasiswa[i].asalSekolah << endl;
                }
            }

            if (!ditemukan) {
                cout << "Data tidak ditemukan.\n";
            }
            break;
        }

        case 4:
            cout << "Terima kasih telah menggunakan program.\n";
            return 0;

        default:
            cout << "Pilihan tidak valid.\n";
        }

        cout << "\nIngin kembali ke menu? (y/n) : ";
        cin >> isLanjut;

    } while (isLanjut == 'y' || isLanjut == 'Y');

    cout << "Program selesai.\n";
    return 0;
}
