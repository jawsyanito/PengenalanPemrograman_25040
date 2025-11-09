#include <iostream>
using namespace std;

int main() {
    int matkul, jumlahMshw;
    double rerata, nilaitot;
    int maxnilai = 0;
    int indexMax = 0;
    
    cout << "Selamat datang di program rekap nilai" << endl;
    cout << "\n-------------------------------------" << endl;
    cout << "\nMasukan jumlah mahasiswa yang akan direkap : ";
    cin >> jumlahMshw ;
    cout << "Silahkan masukan jumlah matkul yang ingin direkap : ";
    cin >> matkul;
    
    string namaMhsw[jumlahMshw] ;
    int dataMhsw[jumlahMshw][matkul] ;
    double rataMhsw [jumlahMshw] ;
    int indexMaxPerMatkul[matkul] ;

    for (int i = 0; i < jumlahMshw; i++) {
        cout << "\n-------------------------------------\n" << endl ;
        cout << " Masukan nama depan mahasiswa ke - " << (i + 1) << " : " ;
        cin >> namaMhsw [i] ;
        nilaitot = 0;
        
        for (int j = 0; j < matkul; j++) {
            cout << " Masukan nilai matkul ke - " << (j + 1) << " : " ; 
            cin >> dataMhsw [i][j] ;
            nilaitot = nilaitot + dataMhsw [i][j] ;
            rataMhsw [i] = nilaitot / matkul ;
        }
    }
    cout << "\n-------------------------------------\n" << endl ;
    
    cout << "Rekap rata - rata nilai mahasiswa\n";
    for (int i = 0; i < jumlahMshw; i++){
        cout << namaMhsw[i] << " Memiliki rata rata nilai : " << rataMhsw [i] << endl;
    }
    
    cout << "Rekap rata - rata nilai mahasiswa\n";
    for (int j = 0; j < matkul; j++) {
        maxnilai = dataMhsw [0][j] ;
        indexMaxPerMatkul[j] = 0;
        for (int i = 0 ; i < jumlahMshw ; i++) {
            if (maxnilai < dataMhsw[i][j]) {
                maxnilai = dataMhsw[i][j];
                indexMaxPerMatkul[j] = i;
            }
        }
    }
    
    for (int i = 0; i < matkul; i++){
        cout << "Mahasiswa dengan nilai tertinggi Matkul ke - " << (i + 1) << " adalah : " << namaMhsw[indexMaxPerMatkul[i]] << endl;
    }

    return 0;
}