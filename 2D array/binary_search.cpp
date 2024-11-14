#include <iostream>
using namespace std;
int main()
{
  int row = 4, col = 5;
  int matrix[4][5] = {2, 6, 10, 14, 18,
                      20, 24, 27, 29, 38, 47, 52, 78, 93, 102, 108, 111, 200, 218, 320};

  int x = 52;
  for (int i = 0; i < row; i++)
  {
    if (matrix[i][0] <= x && x <= matrix[i][col - 1])
    {
      int start = 0, end = col - 1, mid;
      while (start <= end)
      {
        mid = start + end / 2;
        if (matrix[i][mid] == x)
        {
          cout << "found :" <<"row :" <<i <<" col :" <<" " << mid;
          break;
        }
        else if (matrix[i][mid] <= x)
        {
          start = mid + 1;
        }
        else
        {
          end = mid - 1;
        }
      }
    }
  }
}