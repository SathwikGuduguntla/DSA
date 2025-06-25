#include <iostream>
using namespace std;
int main() {
    int a , b ;
    cout << "enter the numbers to swap";
    cin >> a >> b;
    cout << " a is " << a << "b id " << b <<endl;
    a= a+b;
    b = a-b;
    a = a -b;
    cout << " after swapping a is " << a << " and b is " << b << endl; 
   
    cout << "entwer the numbers" ;
    cin >> a >> b;
    cout << "the addition of the a and b is " << a + b  << endl;
    cout << "the subtraction of the a and b is " << a - b  << endl;
    cout << "the multiplication of the a and b is " << a * b  << endl;
    cout << "the division of the a and b is " << a / b  << endl;
    cout << "the modulus of the a and b is " << a % b  << endl;
    cout << "the increment of the a is " << ++a << endl;
    cout << "the decrement of the a is " << --a << endl; 

    if ( a % 2 == 0 || b % 2 == 0   ) {
        cout << "the number is even  " << endl;
    } else {
        cout << "the number is odd " << endl;   
    } 
     
    int n , area , r , pi = 3.12; 
    cout << " enter the number ";
    cin >> n >> r;
    area =  pi*n* r^2 ;
    cout << "the area of the triangle is " << area << endl; 
    
    int  sum;
    cout << "enter the numner N natural numbers";
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "the sum of the first " << n << " natural numbers is " << sum << endl;
     
    char d;
    cout << " enter the character to find the ascil value ";
    cin >> d;
    cout<< " the value of the ascill value of the character " << d << " is " << int(d) << endl;

    int minutes , hours ;
    cout << " enter the minutes to convert into hours and minutes ";
    cin >> minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    cout << "the time in hours and minutes is " << hours << " hours and "
            << minutes << " minutes" << endl;



}  