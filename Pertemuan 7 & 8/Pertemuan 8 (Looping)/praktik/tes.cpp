#include <iostream>
using namespace std;

int main () {
    int angka , max, min;
    cout << "Masukan angka ke - 1 : " ;
    cin >> angka ;
    max = angka ;
    min = angka ;

    for (int a = 2 ; a <= 10 ; a++ ) {
         cout << "Masukan angka ke - " << a << " : ";
         cin >> angka ;

         if (angka > max) {
            max = angka ;
         } if (angka < min) {
            min = angka ;
         }

    }
    
    cout << "Nilai max : " << max << endl;
    cout << "NIlai min : " << min  << endl;
        return 0;
}




