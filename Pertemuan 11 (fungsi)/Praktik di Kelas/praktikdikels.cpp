#include <iostream>
using namespace std;

double lsegi3(double alas, double tinggi) {
        return (alas*tinggi)/2 ;
    }
   
int main() {    
    int alas, tinggi;
    double luas;

    cout << " Masukan alasnya : ";
    cin >> alas;
    cout << " Masukan tingginya : ";
    cin >> tinggi;

    luas = lsegi3(alas, tinggi);
    cout << " Luasnya adalah : " << luas;
    
    
    return 0;
}








  




