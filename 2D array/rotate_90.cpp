#include <iostream>
using namespace std;
int main()
{
  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr1) / sizeof(int);
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

  for (int i = 0; i < 3 - 1; i++)
  {
    for (int j = 2; j > 0; j--)
    {
      swap(arr1[i][j], arr1[j][i]);
    }
  }

  // Print the reversed array
  for (int i = 0; i < 3; i++)
  {
    for (int j = 2; j >= 0; j--)
    {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }
}
