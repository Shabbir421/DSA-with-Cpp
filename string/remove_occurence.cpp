#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "daabcbaabcbc";
  string subs = "abc";
  for (int i = 0; i < s.size() - 1; i++)
  {
    if (s.length() > 0 && s.find(subs) < s.length())
    {

      s.erase(s.find(subs), subs.length());
    }
  }
  cout << s;
}
