#include <iostream>

using namespace std;

void displayArr(const int32_t arrSize, const int32_t* arr) {
  for(int i = 0; i < arrSize; ++i) {
    cout << arr[i] << endl;
  }
}

int main() {
  const int32_t arrSize = 5;
  const int32_t* arr = new int32_t[arrSize];
  displayArr(arrSize, arr);
  return 0;

}
