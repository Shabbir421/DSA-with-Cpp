#include <iostream>
using namespace std;

int main()
{

  int arr[] = {
      0,
      1,
      2,
      3,
      4,
      1,
      2,
      3,
  };
  int n = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = n - 1, mid;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {

      return mid;
    }
    else if (arr[mid] > arr[mid - 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    cout << mid << endl;
  }

  // for (int i = 0; i < n - 1; i++)
  // {
  //   if (arr[i] > arr[i + 1])
  //   {
  //     cout << arr[i] << " ";
  //     break;
  //   }
  // }
}