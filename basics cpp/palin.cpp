#include <iostream>
using namespace std;

// main program
int main()
{
  // variables initialization
  int num, reverse = 0, rem, temp;
  num = 121;
  cout << "\nThe number is: " << num << endl;

  temp = num;
  // loop to find reverse number
  while (temp != 0)
  {
    rem = temp % 10;
    reverse = reverse * 10 + rem;
    temp /= 10;
  };

  // palindrome if num and reverse are equal
  if (num == reverse)
    cout << num << " is Palindrome" << endl;
  else
    cout << num << " is not a Palindrome";
}