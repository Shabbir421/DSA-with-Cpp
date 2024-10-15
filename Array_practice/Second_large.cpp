// #include <iostream>
// using namespace std;

// int main()
// {
//   int large[] = {4, 2, 1, 8, 3, 2, 5};
//   int n = sizeof(large) / sizeof(int);
//   int first = large[0];
//   int second = large[0];

//   // Find the maximum element in the array

//   for (int i = 0; i < n; i++)
//   {
//     if (large[i] > first)

//       first = large[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (large[i] != first)

//       second = max(second, large[i]);
//   }
//   cout << second << endl;
// }

#include <iostream>
using namespace std;

int main()
{
  int large[] = {4, 2, 1, 8, 3, 2, 5};
  int n = sizeof(large) / sizeof(int);
  int sum = 0;

  // Find the sum element in the array

  for (int i = 0; i < n; i++)
  {
    sum = sum + large[i];
  }
  cout << sum << endl;
}