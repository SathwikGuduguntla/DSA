 /*
 nested loops 
 syntax:
 if (condition) {
     if (condition) {
         // code
     } else {
         // code
     }
 } else {
     // code
 }

 */
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num ;
    if(num > 33) {
        if( num > 80) {
            cout << "A" << endl;
        }
        else {
            cout << "B" <<endl;
        }
    }else {
      cout << "fail" << endl;   
    }
        }
    
