#include <iostream>
using namespace std;
int main()
{
  //! suffix: arr[]={9,5,8,12,2,3,7,4}  ,suffix is : end to first check max : 4,7,7,7,12,12,12,12

  int arr[] = {9, 5, 8, 12, 2, 3, 7, 4};
  int n = sizeof(arr) / sizeof(int);
  int ans = INT8_MIN;
  int suffix = arr[n - 1];
  int diff = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    suffix = max(suffix, arr[i]);
    diff = suffix - arr[i];
    ans = max(ans, diff);
  }
  cout << ans << " ";
  //? time complexity= O(n)
}