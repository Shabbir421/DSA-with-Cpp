#include <iostream>
using namespace std;

int missing()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
  int sum = 0;
  int ans, n;
  for (int i = 1; i < 10; i++)
  {
    sum = sum + arr[i];
    ans = n * (n + 1) / 2;
  }
  return sum;
}

int main()
{
  cout << missing() << " ";
}