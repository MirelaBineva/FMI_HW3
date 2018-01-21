#include <iostream>

using namespace std;
const int SIZE = 150;
void print(char *str)
{
    for(int i=0; str[i] != '\n'; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
int main()
{
    char str[SIZE];
    //cin.getline(str, SIZE);
    char c;
    for (int i=0; i< SIZE; i++)
    {
        cin >> c;
        if ( c== '\n')
            break;
        str[i] = c;
    }
    print(str);



    return 0;
}
