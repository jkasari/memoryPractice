#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  //passing this program the argument "./run run"
  //this returns the address at argv
  cout << argv << endl;
  //this returns the value at argv (./run)
  cout << *argv << endl;
  //this returns the first char of the string at argv[1] (r)
  cout << **(argv + 1) << endl;
  //this returns the first char of the string at argv[0] (.)
  cout << **argv << endl;
  //this returns the address that argv[0] points to.
  cout << &argv << endl;
  //this returns the address that argv[1] points to.
  cout << &argv + 1 << endl;
  //this returns the value at argv (./run) this is the same as the second example.
  cout << **&argv << endl;
  cout << *&(argv + 1) << endl;

  return 0;
}
