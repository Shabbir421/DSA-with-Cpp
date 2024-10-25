// #include <iostream>
// using namespace std;
// int main()
// {
//! its give a largest sum of sub array

//   int arr[] = {3, 4, -5, 8, -12, 7, 6, -2};
//   int n = sizeof(arr) / sizeof(int);
//   int maxi = INT8_MIN;
//   for (int i = 0; i < n; i++)
//   {
//     int prefix = 0;
//     for (int j = i; j < n; j++)
//     {
//       prefix += arr[j];
//       maxi = max(maxi, prefix);
//     }
//   }
//   cout << maxi;
// }
//? time complexity= O(n^2)

#include <iostream>
using namespace std;
int main()
{
  //! kadans algo.
  int arr[] = {3, 4, -5, 8, -12, 7, 6, -2};
  int n = sizeof(arr) / sizeof(int);
  int maxi = INT8_MIN;
  int prefix = 0;
  for (int i = 0; i < n; i++)
  {
    prefix += arr[i];
    maxi = max(maxi, prefix);
    if (prefix < 0)
    {
      prefix = 0;
    }
  }
  cout << maxi;
  //? time complexity= O(n)
}