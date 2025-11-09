
#include <iostream>
using namespace std;

int main () {
    int n1, n2,n3,n4=0,n5=0, sering1, sering2;
    
    
    cin >> n1;
    
    for (int i=2; i<=5; i++) {
        cin >> n2;
        if (n2 == n1) {
            sering1 = n2;
            n4 = n4+1;
        } else {
           n3 = n2;
        } 
        if (i >= 3 ){
            if (n2 == n3) {
                sering2 = n2;
                n5 = n5 + 1;
        }
    }

    }
    if (n4 > n5) {
    cout << "Nilai tersering : " << sering1; 
} else {
    cout << "Nilai tersering : " << sering2; 
    }
return 0;
}
 














