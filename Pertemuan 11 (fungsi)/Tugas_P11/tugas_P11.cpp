#include <iostream>
using namespace std;

double luas;
const double pi = 3.14;

double lsegi3(double alas, double tinggi);
double lsegi4(double sisi1, double sisi2);
double llingkar(double jejari);

void garis () {
    cout << "\n==============================================\n";
}

int main () {
    double alas, tinggi, sisi1, sisi2, jejari;
    int pilih;

    garis();
    cout << "Selamat datang di program menghitung luas bangun datar";
    garis();
    cout << "Bangun apa yang ingin ada hitung ?\n";
    cout << "1. Segitiga \n2. Segiempat \n3. Jajar Genjang \n4. Lingkaran \n5. Keluar \n";
    cin >> pilih;
    garis();

    switch(pilih) {
        case 1 :
            cout << "Masukan alasnya : ";
            cin >> alas;
            cout << "Masukan tingginya : ";
            cin >> tinggi;
            luas = lsegi3(alas, tinggi);
            break;

        case 2 :
            cout << "Masukan sisi 1 : ";
            cin >> sisi1;
            cout << "Masukan sisi 2 : ";
            cin >> sisi2;
            luas = lsegi4(sisi1, sisi2);
            break;
            
        case 3 :
            cout << "Masukan alasnya : ";
            cin >> alas;
            cout << "Masukan tingginya : ";
            cin >> tinggi;
            luas = lsegi4(alas, tinggi);
            break;
            
        case 4 :
            cout << "Masukan jari jarinya : ";
            cin >> jejari;
            luas = llingkar(jejari);
            break;
        
        default :
            cout << "Anda keluar dari program" << endl;
            break;
    }

    cout << "Luas bangun datar yang anda pilih adalah : " << luas << endl;
    return 0;
}

double lsegi3(double alas, double tinggi) {
    luas = (alas*tinggi)/2;
    return luas;
}
double lsegi4(double sisi1, double sisi2) {
    luas = sisi1*sisi2;
    return luas;
}
double llingkar(double jejari) {
    luas = pi *(jejari * jejari);
    return luas;
}