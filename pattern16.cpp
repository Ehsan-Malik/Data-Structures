#include<iostream>
using namespace std;
int main()
{
    int j=1;
    for(char ch=67; ch>=65; ch--)
    {
        char pr=ch;
        for (int i=1; i<=j; i++)
        {
            cout<<pr;
            pr--;
        }
        cout<<endl;
        j++;
    }

    return 0;
}
