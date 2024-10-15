
#include <iostream>
#include <cmath>
using namespace std;

// store same type of datatype and contigous location

int max()
{
  int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
  int sum = 0;
  for (int i = 0; i < 10; i++)
  {
    sum = sum + arr[i];
  }
  cout << sum << " ";
}

int main()
{

  max();
}