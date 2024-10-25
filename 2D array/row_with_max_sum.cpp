#include <iostream>
using namespace std;
int main()
{
  int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int sum = INT8_MIN, index = -1;
  for (int row = 0; row < 3; row++)
  {
    int total = 0;
    for (int col = 0; col < 4; col++)
    {
      total += arr1[row][col];
      if (sum < total)
      {
        sum = total;
        index = row;
      }
    }
  }
  cout <<"max row index sum :"<< index;
}