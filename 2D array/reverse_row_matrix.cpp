#include <iostream>
using namespace std;
int main()
{
  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // before reverse of row value
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  //! logic

  for (int i = 0; i < 3; i++)
  {
    int start = 0, end = 3 - 1;
    while (start < end)
    {
      swap(arr1[i][start], arr1[i][end]);
      start++, end--;
    }
  }

  // Print the reversed array
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }
}