 /*
 switch case statement
 syntax:
    switch(expression) {
        case constant1:
            // code
            break;
        case constant2:
            // code
            break;
        default:
            // code
    }
    The switch statement evaluates the expression and matches the value of the expression to the case constants.
    If a match is found, the code block associated with the case is executed.   
 */
 /*
 #include<iostream>
 using namespace std;
 int main() {
    int day;
    cin >> day;

    switch(day) {
        case 1:
        cout << "Monday" <<endl;
        break;
        case 2:
        cout << "Tuesday" <<endl;
        break;
        case 3:
        cout << "wednesday" <<endl;
        break;
        case 4:
        cout<< "thursday" <<endl;
        break;
        case 5:
        cout << "friday" <<endl;
        break;
        case 6:
        cout << "saturday" <<endl;
        break;
        default:
         cout << "default" <<endl;  
    }
 } 
  */

#include<iostream>
using namespace std;
int main () {
    char letter;
    cin >> letter;
    switchcase(letter) {
        case "a":
        cout << "vowel" <<endl;
        break;
        case "e":
        cout << "vowel" <<endl;
        break;
        case "i":
        cout <<"vowel" <<endl;
        break;
        case "o":
        cout << "vowel" <<endl;
        break;
        case "u":
        cout << "vowel" <<endl;
        break;
        default:
        cout << "consonant" <<endl;
        break;
    }
}
