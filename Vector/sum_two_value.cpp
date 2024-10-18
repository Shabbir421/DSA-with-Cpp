#include <iostream>
using namespace std;
int main()
{
  // int arr[] = {2, 7, 11, 15, 27};
  // int n = sizeof(arr) / sizeof(int);
  // int targate = 22;
  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (arr[i] + arr[j] == targate)
  //     {
  //       cout << "true";
  //       break;
  //     }
  //   }
  // }
  //-------------------------2-----------------------------
  // int arr[] = {2, 7, 11, 27, 15};
  // int n = sizeof(arr) / sizeof(int);
  // int targate = 22;
  // int start = 0, end = n - 1;
  // while (start < end)
  // {
  //   if (arr[start] + arr[end] == targate)
  //   {
  //     cout << start<<" "<<end;
  //     break;
  //   }
  //   else if (arr[start] + arr[end] < targate)
  //   {
  //     start++;
  //   }
  //   else
  //   {
  //     end--;
  //   }
  // }
  //--------------------------------3-------------------------
  int arr[] = {2, 7, 11, 27, 15};
  int n = sizeof(arr) / sizeof(int);
  int targate = 22;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == targate)
      {
        cout << i << " " << j;
      }
    }
  }
}