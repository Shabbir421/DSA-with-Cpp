#include <iostream>
using namespace std;

int main()
{
  int arr[1000];
  int a;
  cout << "enter the array size : ";
  cin >> a;
  cout << "enter the array elements :";
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  }
  int key;
  cout << "Enter the element to search for: ";
  cin >> key;

  int n = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = n - 1;
  int mid;
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (arr[mid] == key)
    {
      cout << "Element found at index " << mid << endl;
      break;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
}