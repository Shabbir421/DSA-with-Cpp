

#include <iostream>
using namespace std;

  char convert(char name){
    char ans =name-'c' + 'C';
    return ans;
  }

int main(){

  char name;
  cout <<"enter Char that change =";
  cin >> name;
  cout << convert(name) << endl;
}
