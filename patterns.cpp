/*

patterns
in the outer loop canot the no of looops
for the inner loops focous on the columns 2 connect the somehow to the rows
print '*'



*/

#include <iostream>
using namespace std;
void printl(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printl(n);
}