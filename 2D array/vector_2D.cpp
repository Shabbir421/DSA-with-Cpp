#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  // create 2d vector
  // vector<vector<int>> matrix(3, vector<int>(4, 3));
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //     cout << matrix[i][j] << " ";
  //   cout << endl;
  // }
  // cout << "rows:" << matrix.size() << " ";
  // cout << endl;
  // cout << "cols:" << matrix[0].size() << " ";

  // user input
  int n, m;
  cout << "enter the value :";
  cin >> n >> m;

  vector<vector<int>> matrix(n, vector<int>(m, 1));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrix[i][j];
    }
    cout << endl;
  }
  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}