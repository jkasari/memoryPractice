#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  char stackArr[] = "Hello world";
  cout << stackArr[2] << endl;
  cout << *(stackArr + 2) << endl;
  int* ptr = nullptr;
  cout << ptr << endl;
  // cout << *ptr << endl; // This causes a seg fault.
  cout << static_cast<char>(*stackArr + 2) << endl;


  cout << static_cast<int>(*(stackArr + 13)) << endl;
  char* heapArr = new char[12];
  strcpy(heapArr, "Hello World");
  cout << heapArr << endl;
  delete [] heapArr;


  int* heapArr2 = new int[argc];
  delete [] heapArr2;



  return 0;
}
