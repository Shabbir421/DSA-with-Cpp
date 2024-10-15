
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};

  int n = sizeof(arr) / sizeof(int);
  int a=n / 2;
  for (int i = 0; i < a; i++)
  {
   cout << arr[i] ;
  }

  for (int i = a; i<n ; i++)
  {
    cout << arr[i] << " ";
  }
}