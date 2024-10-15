
#include <iostream>
using namespace std;

int main(){
  // int n;
  // cout<<"enter any no";
  // cin>>n;

  // for( int i=1;i<=n;i=i+2 ){
  //   cout<<i<<endl;
  // }

  //--------------------even odd------------------------

  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   if(i%2==1){
  //     cout<<i<<endl;
  //   }
  // }

  //------------------------prnt alphabet------------------------

  // char name;
  // for(name='A'; name<='Z'; name++){
  //     cout<<name<<" ";
  // }

  //------------------------ reverse------------------------

  // int i;
  // for( i=10;i>=1;i--)
  // {
  //   cout<<i<<endl;
  // }

  //   int i,n;
  //   cout<<"enter reverse no.";
  //   cin>>n;
  // for( i=n;i>=1;i--)
  // {
  //   cout<<i<<endl;
  // }
 
  //------------------------ table------------------------

  //  int i ,n=2;
  // for( i=1; i<=10; i++ )
  // {
  //   cout<<i*n<<" ";
  // }

    //  int i ,n;
    //  cout<<"enter table no.";
    //  cin>>n;
    //   for( i=1; i<=10; i++ )
    //   {
    //     cout<<n<<'*'<<i<<'='<<i*n<<endl;
    //   }

  //------------------------ power of any no ------------------------
        // int i ,n, power;
        // cout<<"enter any number =";
        // cin>>n;
        // power=n*n*n;
        // cout<<power<<endl;


        int i ,n, power,num;
        cout<<"enter any number =";
        cin>>n;
        cout<<"enter power =";
        cin>>power;

        num=n;
        for(i=1; i<power; i++){
          num=num*n;
        }
        cout<<n<<"^"<<power<<"=" <<num<<endl;
 
}