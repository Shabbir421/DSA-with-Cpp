
#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int rem, ans = 0;
  int originalnum=num;

  while (num)
  {
    rem = num % 10;
    num = num / 10;
    ans = ans * 10 + rem;
  }
  if (originalnum == ans)
  {
    cout << "palindrome"<<" ";
  }
  else
  {
    cout << "not palindrome"<<" ";
  }
  cout << ans << endl;
  return 0;
}

