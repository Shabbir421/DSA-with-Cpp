#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int rem, ans = 0, mul = 1;

  while (num)
  {
    rem = num % 2;
    rem=rem^1;
    num = num / 2;
    ans = ans + rem * mul;
    mul = mul * 2;
  }
   cout << ans << endl;
}