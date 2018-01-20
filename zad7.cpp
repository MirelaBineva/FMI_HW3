#include <iostream>

using namespace std;

int power (int x, int n)
{
    if (n==0)
        return 1;
    if (n<0)
        return 1/power(x,-n);
    else
        return x*power(x,n-1);
}

int main()
{
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    int n;
    cout << "Enter the power: " << endl;
    cin >> n;
    cout << power(x,n);

    return 0;
}
