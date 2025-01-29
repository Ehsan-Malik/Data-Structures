#include<iostream>
using namespace std;
int main()
{
    for(char ch=65; ch<=67; ch++)
    {
        char pr=ch;
        for (int i=1; i<=3; i++)
        {
            cout<<pr;
            pr++;
        }
        cout<<endl;
    }

    return 0;
}
