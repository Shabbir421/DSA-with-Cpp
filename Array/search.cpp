
// #include <iostream>
// #include <cmath>
// using namespace std;

// // store same type of datatype and contigous location

// int max()
// {
//   int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
//   int find = 12;
//   for (int i = 0; i < 10; i++)
//   {
//     if (arr[i] == find)
//     {
//       cout << arr[i] << " ";
//     }
//   }
// }

// int main()
// {

//   max();
// }

//----------------------------------------------------------------2 ---

// #include <iostream>
// #include <cmath>
// using namespace std;

// // store same type of datatype and contigous location

// int max(int n)
// {
//   int arr[10] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
//   int index;
//   int find = n;
//   for (int i = 0; i < 10; i++)
//   {
//     if (arr[i] == find)
//     {
//       index = i;
//       break;
//     }
//     else
//       return 0;
//   }
//   return index;
// }

// int main()
// {
//   int a;
//   cout << "enter value =";
//   cin >> a;
//   cout << max(a);
// }

//----------------------------------------------------------------3

#include <iostream>
using namespace std;

// store same type of datatype and contigous location

int linear_search(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int num;
  cout << "enter that value search ";
  cin >> num;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(int);
  cout << " value that search index :" << linear_search(arr, n, num);
}