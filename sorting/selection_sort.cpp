#include <iostream>
using namespace std;

int main()
{
  int large[] = {4, 2, 1, 8, 3, 2, 5};
  int n = sizeof(large) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    int minindex = i;
    for (int j = i; j < n; j++)
    {
      if (large[j] < large[minindex])
      {
        minindex=j;
      }
    }
     swap(large[i], large[minindex]);
  }

  for (int i = 0; i < n; i++)
  {
    cout << large[i] << " ";
  }
}