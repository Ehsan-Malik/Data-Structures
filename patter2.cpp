#include <iostream>
using namespace std;

int main2() {
  cout << "Hello World!\n";
  int n;
  cin >> n;
  int count;
  count = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }

  return 0;
}