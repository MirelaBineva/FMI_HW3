#include <cstring>
#include <iostream>
using namespace std;

main()

{
int sign;
char temp;
char word1[20], word2[20];

    cin >> word1;
    cin >> word2;

   /* cout << word1<<endl;
    cout << word2;
    */
for (sign=0;sign<5;sign++)
{
temp=word1[sign];
word1[sign]=word2[sign];
word2[sign]=temp;
}
cout<<"lenght:  ";
if (strlen(word1)>strlen(word2) )

{
    cout<<strlen(word1)<< " After the change:  "<<word1<<endl;
}
else
{
    cout<<strlen(word2)<< " After the change:  "<<word2<<endl;
}

return 0;
}
