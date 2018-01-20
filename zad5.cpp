#include <iostream>

using namespace std;
const int SIZE = 100;

int main()
{

    int counter=0;


    char arr[SIZE];
    int size;
    cout << "How long do you want  your word to be: ";
    cin >> size;
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
        {
        if (arr[i]=='T')
        {
            counter++;
            cout << "Yes! " << counter << endl;
        }
        else
            counter++;
        }

    }




    return 0;
}
