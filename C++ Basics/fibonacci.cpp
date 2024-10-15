
#include <iostream>
using namespace std;

int main(){

    int n, first=0, second=1,next;
    cout<<"enter no :";
    cin>>n;
    cout <<"fib sequences : "<<first<<" "<<second<<" ";
    for(int i=2; i<n; i++){
      next=first+second;
      first=second;
      second=next;
      cout<<next<<" ";
    
    }
    return 0;
   
}