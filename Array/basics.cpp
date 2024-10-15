
#include <iostream>
#include <cmath>
using namespace std;

// store same type of datatype and contigous location

int max()
{
  int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
  int ans = INT8_MIN; // FOR MAX VALUE FINDING

  for (int i = 0; i < 10; i++)
  {
    if (arr[i] > ans)
      ans = arr[i];
  }

}

int min()
{
  int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
  int ans = INT8_MAX; // FOR MIN VALUE FINDING

  for (int i = 0; i < 10; i++)
  {
    if (arr[i] < ans)
      ans = arr[i];
  }
}


int main()
{
  cout << "min value of arr = " << min()<<endl;
  cout << "max value of arr = " << max();

}