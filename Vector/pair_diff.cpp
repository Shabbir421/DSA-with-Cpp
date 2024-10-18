#include <iostream>
using namespace std;
int main()
{
  // it only work sorted arr
  //-------------------------2-----------------------------
  int arr[] = {2, 3, 5, 10, 50, 80};
  int n = sizeof(arr) / sizeof(int);
  int targate = 45;
  int start = 0, end = 1;
  while (end<n)
  {
    if (arr[end] - arr[start] == targate)
    {
      cout << start << " " << end;
      break;
    }
    else if (arr[end] - arr[start] < targate)
    {
      end++;
    }
    else
    {
      start++;
    }
  }

  //--------------------------------3-------------------------

  // int arr[] = {2,3,5,10,50,80};
  // int n = sizeof(arr) / sizeof(int);
  // int targate = 45;

  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if ( arr[j]-arr[i]  == targate)
  //     {
  //       cout << i << " " << j;
  //     }
  //   }
  // }
}