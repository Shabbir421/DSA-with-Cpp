
#include <iostream>
using namespace std;

int main()
{
  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // int mult = 1, rem, ans = 0;
  // while (num > 0)
  // {

  //   rem = num % 2;

  //   num = num / 2;

  //   ans = ans + rem * mult;

  //   mult = mult * 10;
  // }
  // cout << ans << endl;



//----------------------------binary to decimal ------------------------------------
    int num;
  cout << "Enter a number: ";
  cin >> num;
  int mult = 1, rem, ans = 0;
  while (num )
  {

    rem = num % 10;

    num = num / 10;

    ans = ans + rem * mult;

    mult = mult * 2;
  }
  cout << ans << endl;
}