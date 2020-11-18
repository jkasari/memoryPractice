#include <iostream>

using namespace std;

void displayArr(const int32_t arrSize, const int32_t* arr) {
  for(int i = 0; i < arrSize; ++i) {
    cout << arr[i] << endl;
  }
}

void incrementAtIndex(const int32_t arrIndex, int32_t* arr) {
  ++arr[arrIndex];
}

int main() {
  const int32_t arrSize = 5;
  int32_t* arr = new int32_t[arrSize];
  displayArr(arrSize, arr);
  incrementAtIndex(3, arr);
  cout << "---------------------" << endl;
  displayArr(arrSize, arr);
  return 0;

}
