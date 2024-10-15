#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  int n =sizeof(arr)/sizeof(arr[0]);
    int freq[10000]={0};
    int minval=INT8_MAX,maxval=INT8_MIN;
    for(int i=0;i<n;i++){
      minval=min(minval,arr[i]);
      maxval=max(maxval,arr[i]);
    }
    for(int i=0;i<n;i++){
      freq[arr[i]]++;
    }


}