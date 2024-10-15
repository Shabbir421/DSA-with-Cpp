#include <iostream>
using namespace std;

int main()
{
  // find first and last position of element in array
  // if sorted array given then use of binary search
  // else use linear search

  int arr[] = {0, 1, 1, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = n - 1;
  int mid;
  int key = 2;
  int ans = n;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      ans = mid;
      break;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      ans = mid;
      end = mid - 1;
    }
  }
  if (ans != -1)
    cout << "Element found at index: " << ans << endl;
  else
    cout << "Element not found in the array." << endl;

  return 0; // Indicating successful execution of the program
}