

#include <iostream>
using namespace std;

  char bishop(int A=2, int B=3){
    int count = 0;

    count+=min(8-A,8-B);
    count+=min(8-A,B-1);
    count+=min(A-1,B-1);
    count+=min(A-1,8-B);
    return count;
  }

int main(){

  // int a,b;
  // cout <<"enter int that change =";
  // cin >> a>>b;
  // cout << bishop(a,b) << endl;
}
