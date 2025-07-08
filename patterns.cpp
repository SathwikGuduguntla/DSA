/*

patterns
in the outer loop canot the no of looops
for the inner loops focous on the columns 2 connect the somehow to the rows
print '*'



*/
#include <iostream>
using namespace std;

void print7(int n) {
    for(int i=0;i<n n;i++) {
        for(int j=0;j<n-i-1;j++) {
              cout << "";

        }
        for(int j=0;j<=2*i+1;j++){
            cout << "*";
        } 
        for(int j=0;j<=n-i-1;j++){
            cout << "";
        }
        cout <<endl;
    }
}
int main() {
    int t;
    cin >>t;
    for(int i=0;i<t;i++) {
        int n;
        cin >>n;
        print7(n);
    }
}
    