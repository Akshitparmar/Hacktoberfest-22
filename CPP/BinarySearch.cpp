#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid =  (right + left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return 0;
}

int main() {
  int arr1[10];
  int n;
  int key;

  cout << "Enter 10 elements "<<endl;
  for (int i = 0; i < 10; i++) {
    cin >> arr1[i];
  }
  cout <<"Enter an element to be searched "<< endl;
  cin >> n;

  key= binarySearch(arr1, 0, 9, n);

  if (key == -1) {
    cout << "Not Found" << endl;
  } else {
    cout <<n<<" is found at "<< key<<"th index"<< endl;
  }

  return 0;
}
