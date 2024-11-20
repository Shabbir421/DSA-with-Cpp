#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a = "amazon";
  //! anti clock

  // char c=a[a.size()-1];
  // int index=a.size()-2;
  // while(index>=0){
  //   a[index+1]=a[index];
  //   index--;
  // }
  // a[0]=c;
  // cout<<a;

  //!  clock
  char c = a[0];
  int index = 1;
  while (index < a.size())
  {
    a[index - 1] = a[index];
    index++;
  }
  a[a.size() - 1] = c;
  cout << a;
}
