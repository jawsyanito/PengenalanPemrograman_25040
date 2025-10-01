#include <iostream>
using namespace std;

int main () {
    double rerata ;
    int nilai1, nilai2, biaya, kebenaran, k1, k2 ;
    
    cout << "Masukan nilai ujian pertama : " ;
    cin >> nilai1 ;
    cout << "Masukan nilai ujian kedua : " ;
    cin >> nilai2 ;
    if (nilai1 < 0 || nilai1 > 100) {
        k1 = 0;
    } else {
        k1 = 1;
    }

    if (nilai2 < 0 || nilai2 > 100) {
        k2 = 0;
    } else {
        k2 = 1;
    }
    kebenaran = k1 + k2 ; 

    rerata = ((nilai1+nilai2) / 2) ;
    
    if (kebenaran > 1 ) {
        if ( rerata > 79 ) {
            cout << "Nilai Anda A" << endl ;
            biaya = 100000 ;
        } else if ( rerata > 49 ) {
            cout << "Nilai anda B " << endl ;
            biaya = 200000 ;
        } else if ( rerata > -1 ) {
            cout << "Nilai anda C " << endl ;
            biaya = 300000 ;
        } else {
            cout << "Nilai tidak valid" << endl ;
        }
    } else {
        cout << "nilai anda tidak valid" << endl ;
        return 0 ;
    }

    cout << "Biaya untuk masuk adalah : Rp " << biaya << endl ;
    return 0 ;
}