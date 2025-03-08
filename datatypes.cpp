//data types
/*
primary data types: bulit-in data types
1. int
2. float
3. double
4. char
5. void
6. bool
7. wchar_t
8. short
9. long
dervided data types: derived from primary data types
1. array    
2. pointer
3. reference
4. function     
user defined data types: defined by user
1. class
2. structure
3. union
4. enumeration-enum
5. typedef


*/
 /*#include <iostream>
using namespace std;
int main(){
    int apple;
    cin>> apple;
  cout<<"number of apples :" <<apple << endl;

  return 0;
}
   */


#include <iostream>
using namespace std;
int main() {
    int a ,b ;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    int c;
    c = b;
    b = a;
    a = c;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    return 0;

}


