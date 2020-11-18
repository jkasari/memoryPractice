#include <iostream>

using namespace std;

void displayArr(const int32_t arrSize, const int32_t* arr) {
  if(arrSize == 0) {
    cout << "[]" << endl;
    return;
  }

  cout << "[" << arr[0];
  for(int i = 1; i < arrSize; ++i) {
    cout << ", " << arr[i];
  }
  cout << "]" << endl;
}

void incrementAtIndex(const int32_t arrIndex, int32_t* arr) {
  ++arr[arrIndex];
}

int main() {
  const int32_t arrSize = 9;
  int32_t* arr = new int32_t[arrSize];
  displayArr(arrSize, arr);
  incrementAtIndex(3, arr);
  displayArr(arrSize, arr);
  return 0;

}
