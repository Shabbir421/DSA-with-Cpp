
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

#include <iostream>
#include <cmath>
using namespace std;

int max()
{
  int arr[10] = {4, 3, 5, 14, 9, 11, 6, 8, 12, 50};
  int secound_max = arr[0];
  int ans = arr[0];
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] > ans)
      ans = arr[i];
  }
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] != ans)
      secound_max = max(secound_max, arr[i]);
  }
  cout << secound_max;
  
}

int main()
{
  max();
}