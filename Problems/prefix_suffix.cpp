#include <iostream>
using namespace std;

int main()
{
  //! sub array problem

  //  int arr[] = {1, 2, 3, 4};
  //  int n = sizeof(arr) / sizeof(int);
  //  for (int i = 0; i < n; i++)
  //  {
  //    for (int j = 0; j <= i; j++)
  //    {
  //      cout << arr[j] << " ";
  //    }
  //    cout << endl;
  //  }
  //! devide array in 2 sub array with equal sum

  // int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
  // int n = sizeof(arr) / sizeof(arr[0]);
  // int totalsum = 0;
  // int prefix = 0;

  // // Calculate the total sum of the array
  // for (int i = 0; i < n; i++)
  // {
  //   totalsum += arr[i];
  // }

  // // Check if the array can be divided into two parts with equal sum
  // for (int i = 0; i < n; i++)
  // {
  //   prefix += arr[i];               // Accumulate the prefix sum
  //   int ans = totalsum - prefix; // Remaining sum (suffix)

  //   if (prefix == ans)
  //   {
  //     cout << "true";
  //     return 0;
  //   }
  // }

  // cout << "false";
  // return 0;

  //! prefix : arr[]={1,2,3,4,5}= prefix is : 1,3,6,10,15
  int arr[] = {4,-6,2,8};
  int n = sizeof(arr) / sizeof(int);
  int maxi = INT8_MIN;
  for (int i = 0; i < n ; i++)
  {
    int prefix = 0;
    for (int j = i; j < n; j++)
    {
      prefix += arr[j];
      maxi = max(maxi, prefix);
    }
  }
  cout<<maxi;

  //! suffix :
}