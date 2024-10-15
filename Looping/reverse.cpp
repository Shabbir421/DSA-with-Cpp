
#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int rem, ans = 0;
  while (num)
  {
    rem = num % 10;
    num = num / 10;
    ans = ans * 10 + rem;

  }
  cout << ans << endl;
}