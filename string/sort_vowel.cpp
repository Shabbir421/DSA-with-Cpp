#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string s3 = "leetcode";
  vector<int> alpha(26,0);
  for (int i = 0; i < s3.size(); i++)
  {
    if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
    {
      alpha[s3[i] - 'a']++;
      s3[i] = '#';
    }
  }
  string ans;
  for (int i = 0; i < 26; i++)
  {
    char c = 'a' + i;
    while (alpha[i])
    {
      ans += c;
      alpha[i]--;
    }
  }
  int first = 0, second = 0;
  while (second < ans.size())
  {
    if (s3[first] == '#')
    {
      s3[first] = ans[second];
      second++;
    }
    first++;
  }
  cout << s3;
}
