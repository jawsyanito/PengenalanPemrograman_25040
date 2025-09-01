// Nama : Jaw Syanito Riptanto Putra
// NPM : 2510631170040
// Kelas : 1A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    int usia;

    cout<<"Selamat Datang di Praktikum Pengenalan Pemrograman\n" << endl;
    cout<<"Masukan Nama Anda : ";
    getline(cin, nama);
    
    cout<<"Berapa umur anda : ";
    cin>> usia ;
    
    cout<<"\nNama anda anda adalah = " << nama ;
    cout<<"\nUmur anda adalah = " << usia ;

    return 0;
}