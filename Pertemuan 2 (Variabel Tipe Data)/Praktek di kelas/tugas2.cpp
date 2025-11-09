#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, npm ;
    int usia ;
    double tinggi ;
    
    
    cout << "Masukan NPM anda\t: ";
    cin >> npm ;
    cout << "Masukan Nama anda\t: ";
    cin >> nama ;
    cout << "Masukan Usia anda\t: ";
    cin >> usia ;
    cout << "Masukan Tinggi anda\t: ";
    cin >> tinggi ;


    cout << "Nama\t: " << nama << endl;
    cout << "Usia\t: " << usia << endl;
    cout << "NPM\t: " << npm << endl;
    cout << "Tinggi\t: " << tinggi << endl;
    
    return 0 ;
}
