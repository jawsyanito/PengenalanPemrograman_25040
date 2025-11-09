#include <iostream>
using namespace std;

int main() {
    int umur1, umur2 ;

    cout << "Masukan umur orang pertama : " ;
    cin >> umur1 ;
    cout << "Masukan umur orang kedua : " ;
    cin >> umur2 ;

    if (umur1<umur2) {
        cout << "Orang pertama lebih muda dari orang kedua" ;
    } else if (umur1>umur2) {
        cout << "Orang pertama lebih tua dari orang kedua";
    } else if (umur1==umur2) {
        cout << "Umur kedua orang tersebut adalah sama" ;
    }

    return 0 ;

}