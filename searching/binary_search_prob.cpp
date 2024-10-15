#include <iostream>
using namespace std;

int main()
{
  // find first and last position of element in array
  // if sorted array given then use of binary search
  // else use linear search

  int arr[] = {0, 1, 2, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = n - 1;
  int mid, first = -1, last = -1;
  int key = 2;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      first = mid;
      end = mid - 1;
      cout << "Element found at last  occurence index " << mid << endl;
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

  // find last position of element

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      last = mid;
      start = mid + 1;
      cout << "Element found at first  occurence index " << mid << endl;
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