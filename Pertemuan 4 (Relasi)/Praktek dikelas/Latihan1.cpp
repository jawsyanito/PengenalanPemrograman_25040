#include <iostream>
using namespace std;

int main () {
    string jabatan, status ;
    int tunjangan;

    cout << "Jabatan : " ;
    cin >> jabatan ;
    cout << "Status : " ;
    cin >> status ;

    if (jabatan == "Supervisor") {
        if (status == "Menikah") {
        tunjangan = 5000000 ;} 
        else {tunjangan = 250000;} }
    else {
        if (status == "Menikah")
        {tunjangan = 750000 ;}
        else {tunjangan = 300000;} }
    
    cout << "tunjangan anda adalah : " << tunjangan ;
        return 0;
    }
    



   

















