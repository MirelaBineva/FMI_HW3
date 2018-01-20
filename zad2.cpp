#include <iostream>

using namespace std;

int main()
{
    cout << "Enter 10 symbols (capital letters, small letters and numbers): ";

    int counterCap = 0;
    int counterSmall = 0;
    int counterNum = 0;
    char ch[10];

    for (int i=0; i<=9; i++)
    {

        cin >> ch[i];
    }


    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            counterCap++;
        }
        else if (ch[i]>='a'&&ch[i]<='z')
        {
            counterSmall++;
        }
        else if (ch[i]>='0' && ch[i]<='9')
        {
            counterNum++;
        }
    }
    cout << "Capital letters: " << counterCap << endl;
    cout << "Small letters: " << counterSmall << endl;
    cout << "Numbers: " << counterNum;
    }
    return 0;

