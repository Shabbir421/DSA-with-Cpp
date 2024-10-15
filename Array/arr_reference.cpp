

// #include <iostream>
// using namespace std;

// void missing(int arr[])
// {
//   arr[0] = 1000;
// }

// void missing2(int *ptr)
// {
//   ptr[0] = 6;
// }
// int main()
// {
//   int a = 5;
//   int *ptr = &a;
//   cout << ptr << endl;

//   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//   int n = sizeof(arr) / sizeof(int);
//   // missing(arr);
//   // cout << arr[0] << " "<<endl;

//     missing2(ptr);
//   cout << ptr[0] << " "<<endl;
//   cout << "length of array =" <<n;
//   return 0;
// }

#include <iostream>
using namespace std;

int num(int nums[])
{
  cout << sizeof(nums) << endl;
  return 1;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
  cout << sizeof(arr) << endl;
  return 0;
}