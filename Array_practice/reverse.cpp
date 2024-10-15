// #include <iostream>
// using namespace std;

// int main()
// {
//   int large[] = {4, 2, 1, 8, 3, 2, 5};
//   int n = sizeof(large) / sizeof(int);
//   // Find the maximum element in the array

//   for (int i = n - 1; i >= 0; i--)
//   {
//     int n = large[i];
//     cout << n << " ";
//   }
// }

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};

  int n = sizeof(arr) / sizeof(int);
  int copyarr[n];
  for (int i = 0; i < n; i++)
  {
    int j = n - i - 1;
    copyarr[i] = arr[j];
  }

  for (int i = 0; i < n; i++)
  {
    cout << copyarr[i] << " ";
  }
}