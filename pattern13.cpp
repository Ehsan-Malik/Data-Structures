#include<iostream>
using namespace std;
int main()
{
    char ch=65;
    int i=1;
    while(i<=3)
    {
        for (int j=1;j<=i; j++)
        {
            cout<<ch;
        }
        i++;
        ch++;
        cout<<endl;
    }
    return 0;
}
