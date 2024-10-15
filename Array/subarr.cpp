// #include <iostream>
// using namespace std;

// int main()
// {
//   int arr[] = {2, 3, 4, 5, 6, 7, 8};
//   int n = 7;
//   int maxsum = arr[0];
//   for (int start = 0; start < n; start++) // n
//   {
//     for (int end = start; end < n; end++) // n
//     {
//       // cout << "(" << start << "," << end << ")";
//       int cuurentsum = 0;

//       for (int i = start; i <= end; i++) // n  time complexity =n*n*n  = O(n^3)
//       {
//         cuurentsum = cuurentsum + arr[i];
//       }
//       cout << cuurentsum << " ";
//       maxsum = min(maxsum, cuurentsum);
//     }
//     cout << endl;
//   }
//   cout << "Maximum sum is: " << maxsum << endl;
// }

// // Time complexity: O(n^3)

//-----------------------------------------------2----------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//   int arr[] = {2, 3, 4, 5, 6, 7, 8};
//   int n = 7;
//   int maxsum = arr[0];
//   for (int start = 0; start < n; start++) // n
//   {
//     int cuurentsum = 0;
//     for (int end = start; end < n; end++) // n
//     {
//       cuurentsum += arr[end];
//       maxsum = min(maxsum, cuurentsum);
//     }
//   }
//   cout << "Maximum sum is: " << maxsum << endl;
// }

// // Time complexity: O(n^2)

//------------------------------------------3--------------------------
// kadane algorithm use

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 3, 4, 5, 6, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  int maxsum = arr[0];
  int cuurentsum = 0;
  for (int start = 0; start < n; start++) // n
  {
    cuurentsum += arr[start];
    maxsum = min(cuurentsum, maxsum);
    if (cuurentsum < 0)
    {
      cuurentsum = 0;
    }
  }
  cout << "Maximum sum is: " << maxsum << endl;
}

//time complexity for this = O(n)