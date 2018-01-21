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

    /* int el[256] = {0, };
    cin.getline(str, SIZE);
    for (int i=0; str[i]!='\0'; i++)
    {
        el[(int)str[i]]++;
    }
    for (int i=0; i<256; i++)
    {
        if(el[i]>0)
        cout << "character asci code: " << i << " : " << el[i] << endl;
    }
    cout << endl;
    */

    return 0;
}
