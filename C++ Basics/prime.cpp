
#include <iostream>
using namespace std;

int main()
{

  int i, n;
  cout << "Enter a no.: ";
  cin >> n;
  if (n <= 1)
    return false;
  for (i = 2; i< n; i++)
  {
    if ((n % i == 0))
    {
      cout << "not prime";
      return 0;
    }
  }

  cout << "prime";
  return 0;
}