#include <iostream>
using namespace std;

int main() {
    int num = 4;
    cout <<sizeof (num) << endl;
    char name = 'a';
   cout <<sizeof (name) << endl;
    bool flg;
    flg = (name == 'a') ? true : false;  
    cout << flg << endl; 

    cout << (void*)&name << endl; 

   int  a = 6;
    cout << (a++)<<endl;
    int b =a+5;
    cout << (b) <<endl; 
    cout << (--b) <<endl;
    cout << (b--) <<endl;
     char ch = 'pqr';
    cout <<(4+2 "ch") <<endl;
    cout<< ("pqr" + 4 + 2);

    return 0;
}
