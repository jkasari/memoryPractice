#include <iostream>

using namespace std;

/**
 * This creates a copy of the value you pass it.
 * That copy ONLY exists in this function.
 */
void addOnePassedByValue(int x) {
  cout << "Address of x in addOnePassedByValue " << &x << endl;
  x = x + 1;
}
/**
 * This uses the real value at is address.
 * Anything done in this fucntion to x is done to the value you passed to the function.
 */
void addOnePassedByReference(int& x) {
  cout << "Address of x in addOnePassedByReference " << &x << endl;
  x = x + 1;
}
/**
 * This creates a copy of the pointer that you pass it.
 * This is a copy of the address that the pointer was pointing at NOT the value at that location.
 */
void addOnePassedByPointer(int* x) {
  cout << "Address of x in addOnePassedByPointer " << &x << endl;
  cout << "Address that x points to addOnePassedByPointer " << x << endl;
  cout << "the value at the address that x points to addOnePassedByPointer " << *x << endl;
  *x = *x + 1;
}

/**
 * This uses the real pointer.
 * Anything done with x will affect the pointer that you passed to the function. 
 */
void addOnePassedByReferenceToPointer(int*& x) {
  cout << "Address of x in addOnePassedByReferenceToPointer " << &x << endl;
  cout << "Address that x points to addOnePassedByReferenceToPointer " << x << endl;
  cout << "the value at the address that x points to addOnePassedByReferenceToPointer " << *x << endl;
  *x = *x + 1;
}


int main() {
  int i = 0;
  cout << "Address of i in main " << &i << endl;
  cout << i << endl;
  addOnePassedByValue(i);
  cout << i << endl;
  addOnePassedByReference(i);
  cout << i << endl;
  int* ptr = &i;
  cout << "The address of ptr " << &ptr << endl;
  cout << "Address where ptr points to " << ptr << endl;
  cout << "Value at location of address " << *ptr << endl;
  addOnePassedByPointer(ptr);
  cout << i << endl;
  addOnePassedByReferenceToPointer(ptr);
  cout << i << endl;
  return 0;
}