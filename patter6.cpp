
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!\n";
  int n;
  cin >> n;
  int count;
  count = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
            cout<<count;
            cout<<" ";
            count++;
    }
    cout << endl;
  }

}


