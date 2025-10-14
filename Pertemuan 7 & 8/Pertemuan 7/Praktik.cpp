#include <iostream>
using namespace std;

int main () {
    int bulan ;
    cout << "Masukan angka bulan :" ;
    cin >> bulan ;

    switch (bulan) {
        case 1 : cout << bulan <<  " adalah Bulan Januari\n" ; break ;
        case 2 : cout << bulan <<  " adalah Bulan Februari\n" ; break ;
        case 3 : cout << bulan <<  " adalah Bulan Maret\n" ; break ;
        case 4 : cout << bulan <<  " adalah Bulan April\n" ; break ;
        case 5 : cout << bulan <<  " adalah Bulan Mei\n" ; break ;
        case 6 : cout << bulan <<  " adalah Bulan Juni\n" ; break ;
        case 7 : cout << bulan <<  " adalah Bulan Juli\n" ; break ;
        case 8 : cout << bulan <<  " adalah Bulan Agustus\n" ; break ;
        case 9 : cout << bulan <<  " adalah Bulan September\n" ; break ;
        case 10 : cout << bulan <<  " adalah Bulan Oktober\n" ; break ;
        case 11: cout << bulan <<  " adalah Bulan November\n" ; break ;
        case 12: cout << bulan <<  " adalah Bulan Desember\n" ; break ;
        default : cout << " Bulan tidak valid\n" ;
    }
    return 0;
}



 
