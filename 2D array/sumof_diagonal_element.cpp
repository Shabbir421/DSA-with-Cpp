#include <iostream>
using namespace std;
int main()
{
  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int first = 0;
  int sec = 0;
  // first diagonal
  int i = 0;
  while (i < 3)
  {
    first += arr1[i][i];
    i++;
  }

  // sec diagonal

  i = 0;
  int j = 3 - 1;
  while (j >= 0)
  {
    sec += arr1[i][j];
    i++, j--;
  }
  cout << first << " " << sec << " ";
}