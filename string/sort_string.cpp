#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string s3 = "edcab";
  vector<int> alpha(26, 0);
  for (int i = 0; i < s3.size(); i++)
  {
    alpha[s3[i] - 'a']++;
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
  cout << ans;
}
