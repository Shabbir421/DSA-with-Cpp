#include <iostream>
using namespace std;
int main()
{

  int arr[] = {4, 3, 2, 1, 2, 7, 6};
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    arr[i]--;
  }
  for (int i = 0; i < n; i++)
  {
    arr[arr[i] % n] += n;
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] / n == 0)
    {
      cout << "missing" << i + 1;
      break;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] / n == 2)
    {
      cout << "index :" << i + 1;
      break;
    }
  }
}