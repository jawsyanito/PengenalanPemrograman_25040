#include <iostream>
using namespace std;

struct identitas {
    string nama;
    string npm;
    int umur;
} ;

int main(){
    identitas mhs[3];
    string cari;

    for (int i = 0; i < 3; i++){
        cout << "Masukan nama ke - " << (i+1) << " : " ;
        cin >> mhs[i].nama;
        cout << "Masukan npm ke - " << (i+1) << " : " ;
        cin >> mhs[i].npm;
        cout << "Masukan umur ke - " << (i+1) << " : " ;
        cin >> mhs[i].umur;
        cout << "----------------------------------\n";
    }
    
    for (int i = 0; i < 3;i++){
        cout << "Nama mahasiswa ke - " << (i+1) << " : " << mhs[i].nama << endl;
        cout << "NPM mahasiswa ke - " << (i+1) << " : " << mhs[i].npm << endl;
        cout << "Usia mahasiswa ke - " << (i+1) << " : " << mhs[i].umur << endl ;
        cout << "----------------------------------\n";
    }
    
    cout << "Silahkan masukan nama mahasiswa yang akan dicari datanya : ";
    cin >> cari;
    
    for (int i = 0; i < 3; i++) {
        if (mhs[i].nama == cari) {
            cout << "Nama mahasiswa ke - " << (i+1) << " : " << mhs[i].nama << endl;
            cout << "NPM mahasiswa ke - " << (i+1) << " : " << mhs[i].npm << endl;
            cout << "Usia mahasiswa ke - " << (i+1) << " : " << mhs[i].umur << endl ;
            i = 4;
        } 
    } 
    return 0;
}














