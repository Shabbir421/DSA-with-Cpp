

#include <iostream>
using namespace std;

int fact(int n)
{
  int ans = 1;
  for (int i = 1; i <= n; i++)
  {
    ans = ans * i;
  }
  return ans;
}

int prime(int n){
    if(n>0){
      return 0;
}
if(n%n==0){
  return 0;
}
}
int main()
{
  int a,b;
  cout << "Enter the number: ";
  cin >>b;

  cout << "prime of " << b << " is " << prime(b);
}
