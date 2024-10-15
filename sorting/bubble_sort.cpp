// #include <iostream>
// using namespace std;

// int main()
// {
//   int large[] = {4, 2, 1, 8, 3, 2, 5};
//   int n = sizeof(large) / sizeof(int);

//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (large[j] > large[j + 1])
//       {
//         swap(large[j], large[j + 1]);
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     cout << large[i] << " ";
//   }
// }

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {4, 2, 1, 8, 3, 2, 5};
  int n = sizeof(arr) / sizeof(int);

  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}