#include <iostream>
using namespace std;

int main()
{
  int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
  int size = sizeof(arr) / sizeof(int);
  int ans = arr[0], start = 0, end = size - 1, mid;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    // left side
    if (arr[mid] >= arr[0])
    {
      start = mid + 1;
    }
    // right side
    else
    {
      ans = arr[mid];
      end = mid - 1;
    }
  }
  cout << ans;
}