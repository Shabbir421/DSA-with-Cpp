
#include <iostream>
using namespace std;

int main()
{
  //      int row,col;
  //   for(row=1; row<=5; row++){
  //     for(col=row; col>=1; col--){
  //   cout<<col <<" ";
  // }
  //  cout<<endl;
  // }

  //        char row,col;
  //   for(row='a'; row<='e'; row++){
  //     for(col='a'; col<=row; col++){
  //   cout<<row <<" ";
  // }
  //  cout<<endl;
  // }

  //       char row,col;
  //   for(row='a'; row<='e'; row++){
  //     for(col='e'; col>=row; col--){
  //   cout<<row <<" ";
  // }
  //  cout<<endl;
  // }

  //      int row,col;
  //   for(row=5; row>=1; row--){
  //     for(col=1; col<=row; col++){
  //   cout<<col <<" ";
  // }
  //  cout<<endl;
  // }

  //  int row,col;
  //   for(row=1; row<=5; row++){
  //     for(col=5; col>=5-row+1; col--){
  //   cout<<col <<" ";
  // }
  //  cout<<endl;
  // }

  int row, col,n;
  cout<<"enter the no";
  cin>>n;
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= n - row; col++)
      cout << "  ";
    for (col = 1; col <= 2 * row - 1; col++)

      cout << "* ";
    cout << endl;
  }
}