#include <iostream>
using namespace std;
int main()
{

  // int arr[] = {1, 4, 45, 6, 10, 8};
  // int n = sizeof(arr) / sizeof(int);
  // int targate = 13;

  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     for (int k = j + 1; k < n; k++)
  //     {
  //       if (arr[i] + arr[j] + arr[k] == targate)
  //       {
  //         cout << i << " " << j << " " << k;
  //       }
  //     }
  //   }
  // }
  //?time complexity =O(n^3)

  int arr[] = {1, 4, 6, 8, 10, 45};
  int n = sizeof(arr) / sizeof(int);
  int targate = 13, ans;
  int start, end;
  for (int i = 0; i < n - 2; i++)
  {
    ans = targate - arr[i];
    start = i + 1, end = n - 1;
    while (start < end)
    {
      if (arr[start] + arr[end] == ans)
      {
        cout << "Triplet " << arr[i] << " " << arr[start] << " " << arr[end];
        break;
      }
      else if (arr[start] + arr[end] > ans)
      {
        end--;
      }
      else
      {
        start++;
      }
    }
  }
}