#include <iostream>
using namespace std;
int main()
{
    cout << "hello world" << endl;
    int age;
    cout << "enter your age";
    cin >> age;
    cout << "your age is" << age << endl;
    string name, college;
    cout << "enter your name ";
    cin >> name;
    cout << "your name is " << name << endl;
    cout << "your name is " << name << " and your age is " << age << endl;
    cout << " enter your college name ";
    cin >> college;
    cout << "your college name is " << college << endl;

    /* Data types
    int
    float
    double
    char
    string
    bool
    */
    int x = 0;
    cout << "enter a nunber ";
    cin >> x;
    cout << "the number you entered is  " << x << endl;
    float pi = 3.12;
    cout << "the value of the pi is " << pi << endl;
    char initial = 'A';
    cout << "the initial is " << initial << endl;
    bool ispass = true;
    cout << "thew value of the pass is " << ispass << endl;

    int a, b;
    cout << "enter two numbers to add";
    cin >> a >> b;
    cout << "the sum of the two numbers is " << a + b << endl;

    double celsius, fehrenheit;
    cout << " ennter the tempature in celsius ";
    cin >> celsius;
    fehrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "the temparture in fehranherit is " << fehrenheit << endl;

    int num1, num2, temp;
    cout << " enter the two numbers to swap ";
    cin >> num1 >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "the first number is " << num1 << " and the second number is " << num2 << endl;

    return 0;
}
