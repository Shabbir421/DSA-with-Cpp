#include <iostream>
using namespace std;

int main()
{
  // Use binary search to find the square root of a number
  int a;
  cout << "Enter the number: ";
  cin >> a;

  if (a < 0)
  {
    cout << "Square root of a negative number is not defined in real numbers." << endl;
    return 0;
  }

  int start = 0;
  int end = a;
  int mid;
  int ans = -1;

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (mid * mid == a)
    {
      ans = mid;
      break;
    }
    else if (mid * mid < a)
    {
      ans = mid; // Store the potential answer
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  cout << "The integer square root of " << a << " is: " << ans << endl;

  return 1; // Indicating successful execution of the program
}
