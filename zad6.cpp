#include <iostream>

using namespace std;

void printBinary (int number)
{
    if (number>=2)
        printBinary (number/2);
    cout << number%2;
}



int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printBinary(n);





    return 0;
}
