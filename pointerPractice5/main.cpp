#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  // passing this program the argument "./run run"
  // this returns the value of argv, which is an address
  cout << argv << endl;
  // this returns the value at the address stored in argv (./run)
  cout << *argv << endl;
  // this returns the first char of the string at argv[1] (r) can also be
  // written as argv[1][0]
  cout << **(argv + 1) << endl;
  // this returns the first char of the string at argv[0] (.) can also be
  // written as **argv
  cout << argv[0][0] << endl;
  // this returns the address of argv.
  cout << &argv << endl;
  // this returns the address that argv[1] points to.
  cout << &argv + 1 << endl;
  // this returns the value at argv (./run) this is the same as the second
  // example. It does this because *& cancels itself out.
  cout << **&argv << endl;

  return 0;
}
