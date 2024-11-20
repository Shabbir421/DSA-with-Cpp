#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s3 = "hello \"hii\"  ";
  cout << s3;
  // string s;
  // getline(cin,s);
  // cout<<s;

  string s1 = "hello", s2 = "bye";
  string s = s1.append(s2);
  cout << s;

  string s4 = "motka";
  int size = 0;
  while (s4[size] != '\0')
  {
    size++;
    cout << size;
  }
  for (int i = s4.size() - 1; i >= 0; i--)
  {
    cout << s4[i]; // Accessing characters using the index }
  }

  cout << endl;
  string a = "vishal";
  for (int i = a.size(); i >= 0; i--)
    cout << a[i];
}
