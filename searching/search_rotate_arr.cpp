#include <iostream>
using namespace std;

int main()
{
  // find first and last position of element in array
  // if sorted array given then use of binary search
  // else use linear search

  int arr[] = {3, 4, 5, 6, 0, 1, 2};
  int n = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = n - 1;
  int mid;
  int key = 1;
  int ans = -1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {

      break;
    }
    // left side sorted
    else if (arr[mid] >= arr[0])
    {

      if (arr[start] <= key && arr[mid] > key)
        end = mid - 1;

      else
        start = mid + 1;
    }
    // rigth side sorted
    else
    {
      if (arr[mid] < key && arr[end] >= key)
        start = mid + 1;
      else
        end = mid - 1;
    }
  }
  cout << mid;
}