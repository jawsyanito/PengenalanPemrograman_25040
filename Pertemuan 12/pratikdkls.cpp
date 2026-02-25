#include <iostream>
#include <string>
using namespace std;
 
int main () {
    string nama;
    int umur;

    cout << "Masukan nama : ";
    getline ( cin, nama );
    cout << "Masukan umur anda : ";
    cin >> umur;

    cout << "Umur anda 5 tahun yang akan datang adalah : " << (umur + 5) << endl;


    return 0;
}


