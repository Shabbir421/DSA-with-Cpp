#include <iostream>
#include <string>
using namespace std;

int main()
{
  string address = "11.11.1.1.1";
  string ans;
  int index = 0;
  while (index < address.size())
  {
    if (address[index] == '.')
    {
      ans = ans + "[.]";
    }
    else
    {
      ans = ans + address[index];
    }
    index++; // Don't forget to increment the index
  }

  cout << ans; // Print the result after the loop
  return 0;
}
