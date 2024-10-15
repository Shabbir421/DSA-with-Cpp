
// #include <iostream>
// #include <cmath>
// using namespace std;

// int max()
// {
//   int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
//   int start = 0, end = 9;
//   while (start < end)
//   {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
//   for (int i = 0; i < 10; i++)
//     cout << arr[i] << " ";
// }

// int main()
// {
//   max();
// }

//----------------------------------------------------------------2--

// #include <iostream>
// #include <cmath>
// using namespace std;

// int max()
// {
//   int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
//   int start = 0, end = 9;
//   while (start < end)
//   {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
//   for (int i = 0; i < 10; i++)
//     cout << arr[i] << " ";
// }

// int main()
// {
//   max();
// }

//-----------------------------------3--------------------------------

#include <iostream>
#include <cmath>
using namespace std;

void printarr(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

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
    arr[i] = copyarr[i];
  }
  printarr(arr, n);
  return 0;
}
