#include <iostream>
#include <string>
#include <vector>

using namespace std;

void foo() {
  int x;
  foo();
  cout << "high\n";
}

int main() {
  //int* x = new int;
  //for (int i = 0; i < 1000000000; ++i) {
  //  x = new int;
  //}
  //cout << x << "\n";
  cout << "Vector<int8_t>: " << sizeof(vector<int8_t>) << "\n";
  cout << "int8_t: " << sizeof(int8_t) << "\n";
  cout << "Vector<int64_t>: " << sizeof(vector<int64_t>) << "\n";
  cout << "int64_t: " << sizeof(int64_t) << "\n";
  char c = ' ';
  cin >> c;
  foo();
  return 0;
}
