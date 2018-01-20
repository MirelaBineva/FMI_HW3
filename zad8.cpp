#include <iostream>

using namespace std;
const int SIZE=100;

int length ( char* str)
{
    if (str[0]=='\0')
        return 0;

        return 1 + length (str +1);
}


int main()
{
    char str[SIZE];
    cout << "Enter a string ";
    cin >> str;
    cout << length (str);


    return 0;
}
