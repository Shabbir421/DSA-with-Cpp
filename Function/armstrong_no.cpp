#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n)
{
  int count = 0;
  while (n)
  {
    count++;
    n = n / 10;
  }
  return count;
}

bool armstrongnumber(int num, int digit)
{
  int n = num, ans = 0, rem;

  while (n)
  {
    rem = n % 10;
    n = n / 10;
    ans += pow(rem, digit); // Using pow correctly
  }
  if (ans == num)
    return 1;

  else
    return 0;
}

int main()
{
  int num;
  cout << "Enter the value: ";
  cin >> num;
  int digit = countdigit(num);
  cout << armstrongnumber(num, digit) << endl;
}
