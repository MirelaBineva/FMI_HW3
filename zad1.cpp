#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a small letter from a to z: ";
    char letter;
    cin >> letter;
    if (letter>='a' && letter<='z')
    {
        letter=letter-32;
        cout << (char) letter;;
    }
       return 0;
}
