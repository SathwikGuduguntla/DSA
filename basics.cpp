#include<iostream>
using namespace std;
// // write a program that takes an input of age
// // and print if you are adult or not 
// // >=10 ,yes
// // <10  else if 

// int main() {
//     int marks;
//     cin >> marks;
//       if (marks < 25) {
//         cout << "f" ;
//       } 
//       else if(marks <=49 ) {
//         cout << "d";
//       } 
//       else if (marks <=59) {
//         cout << "c";
//       } 
//       else if (marks <= 69) {
//         cout << "b";
//       }
//       else if (marks <=79) {
//         cout << "a";
//       }
//       return 0;
// } 
//  nested loop
// int main () {
//     int age;
//     cin >> age;
//     if (age < 18){
//         cout << "not eligable for the job";
//     } 
//     else if (age <=54) {
//         cout << "eligible for the job , but not retirement";
//     } 
//     else if (age <= 57) {
//         cout << "eligbale fot the job";
//          if(age >=55) {
//             cout << "but retirment soon";
//          }
//     } 
//     else if (age >=57) {
//       cout << "you have retire";
//     }
//     return 0;
// }
// switch case 
// int main() {
//     int day;
//     cin >> day;
//     switch(day) {
//         case 1: 
//           cout << "monday";
//           break;
//         case 2: 
//            cout << "tuesday";
//              break;
//         case 3: 
//            cout << "wednesday";
//             break;
//         case 4: 
//            cout << "thursday";
//             break;
//         case 5:
//            cout << "friday";
//             break;
//         case 6: 
//            cout << "saturday";
//               break;
//         case 7: 
//           cout << "sunday";
//           break;
//        default:
//         cout << "Invaild";
//     } 
//     cout << "check";
//     return 0;
// } 
//  arrays
//   int main() {
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >>arr[4] ;
//     for ( int i=0 ;i <5 ;i ++) {
//         cout << arr[i] << "";
//     }
//      arr[3] += 10;
//        cout <<arr[3];
//        return 0;
//   }
// // 2D- array 
// int main() {
//   int arr[3] [5];
//   arr[1] [3] = 78;
//   cout << arr[1][2];
//   return 0;
// }
// //   string 
// int main() {
//     string s="string";
//     int len = s.size();
//     s[len-1] = 'z';
//     cout << s[len -1];
//     return 0; 
// }
// for loop
// int main() {
   
//     for(int i=1;i<=10;i++) {
//         cout << "striver" <<endl;
//     }
// }
// while loop 
// int main() {
//     int i;
//     cin >> i;
//     while(i <= 5) {
//         cout << "striver" << i << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// function
// functions are similar set of code which performs something for you
// functions are used increase the modularise codecvt
// functions are used to increase readiabulty 
// void which does not return anything
// return
// parameters
// non paramaterised
// void printName(string name) {
//     cout <<"hey striver" << name;
// }
// int main() {
//     string name;
//     cin >> name;
//     cout << "hey striver!:";
//     return 0;

// }
// int maxx(int num1 , int num2) {
//     if(num1 >= num2)  
//         return num1;
//     return num2;
// }
// int main() {
//     int num1 ,num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1,num2);
//     cout << maximum;
//     return 0;
// }
void dosomething(string &s) {
  s[0] = 't';
  cout <<  s <<endl;
}
int main() {
     string s = "raj";
    dosomething(s);
    cout << s <<endl;
    return 0;
}