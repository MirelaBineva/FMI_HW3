#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 150;
/* void print(char *str)
{
    for(int i=0; str[i] != '\n'; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
} */
int main()
{
   /* char str[SIZE];
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
*/
     char str[SIZE] = {0, };
    cin.getline(str, SIZE);

    int asc[256];
    for (int i = 0; i < 256; i++)
	{
		asc[i] = 0;
	}

	for (int i = 0; i < strlen(str); i++)
	{
		asc[(int)str[i]]++;
	}

    for (int i = 0; i < 256; i++)
	{
		if (asc[i] > 0)
		{
			cout <<(char)i<< " : " << asc[i] << endl;
		}
	}
    

    return 0;
}
