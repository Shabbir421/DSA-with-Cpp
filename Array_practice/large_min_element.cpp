#include <iostream>
using namespace std;

int main()
{
  int large[] = {4, 2, 1, 8, 3, 2, 5};
  int max = INT8_MIN;
  int n = sizeof(large) / sizeof(int);
  // Find the maximum element in the array

  for (int i = 0; i < n; i++)
  {
    if (large[i] > max)
     {
       max = large[i];
     }
  }
  cout << max << endl;
}