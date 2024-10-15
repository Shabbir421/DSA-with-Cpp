
#include <iostream>
using namespace std;

int main()
{
  // int row, col;
  // for (row = 1; row <= 5; row++)
  // {
  //   for (col = 1; col <= 5 - row; col++)
  //     cout << "  ";
  //   for (col = 1; col <= row; col++)
  //   {
  //     cout <<"* ";
  //   }
  //   cout << endl;
  // }

  //   int row, col;
  //   int n;
  //   cout<<"input the number";
  //   cin>>n;
  // for (row = 1; row <= n; row++)
  // {
  //   for (col = 1; col <= n - row; col++)
  //     cout << "  ";
  //   for (col = 1; col <= row; col++)
  //   {
  //     cout <<col <<" ";
  //   }
  //   cout << endl;
  // }

  char row, col;
  for (row = 'A'; row <= 'F'; row++)
  {
    for (col = 'A'; col <= 'F' - row; col++)
      cout << "    ";
    for (col = 'A'; col <= row; col++)
    {
      cout << col << " ";
    }
    cout << endl;
  }
}