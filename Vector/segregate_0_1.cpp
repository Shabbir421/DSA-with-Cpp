#include <iostream>
using namespace std;

int main()
{
  // int arr[] = {0, 0, 1, 1, 0, 1};
  // int n = sizeof(arr) / sizeof(int);
  // for (int i = 0; i < n; i++)
  // {
  //   if (arr[i] == 0)
  //   {
  //     cout<<arr[i];
  //   }
  // }
  //   for (int i = 0; i < n; i++)
  // {
  //   if (arr[i] == 1)
  //   {
  //     cout<<arr[i];
  //   }
  // }

  int arr[] = {0, 0, 1, 1, 0, 1};
  int n = sizeof(arr) / sizeof(int);
  int start = 0, end = n - 1;
  while (start < end)
  {
    if (arr[start] == 0)
    {
      start++;
    }
    else
    {
      if (arr[end] == 0)
      {
        swap(arr[start], arr[end]);
        start++, end--;
      }
      else
      {
        end--;
      }
    }
  }
  // Print the sorted array
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}