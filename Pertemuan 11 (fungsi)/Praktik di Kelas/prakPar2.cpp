#include <iostream>
using namespace std;

double luas;

double lsegi3(double a, double t) {
    luas = (a*t)/2;
    return luas;
};
void garis(){
    cout << "\n=================================================\n";
}

int main () {
    double alas, tinggi;
    double hasil;

    cout << " Selamat datang di program menghitung segitiga \n";
    garis();
    cout << " Masukan alas : ";
    cin >> alas;
    cout << " Masukan tinggi : ";
    cin >> tinggi;
    garis();
    hasil = lsegi3(alas, tinggi);
    cout << " Luas segitiga tersebut adalah : " << hasil ;
    return 0;

}













