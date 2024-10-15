#include <iostream>
using namespace std;

int bin_search(int *arr, int n, int key)
{
  int st = 0, end = n;
  while (st < n)
  {
    int mid = (st + end) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      st = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int num;
  cout << "enter search value :";
  cin >> num;
  int arr[] = {4, 3, 5, 3, 9, 11, 6, 8, 12, 50};
  int n = sizeof(arr) / sizeof(int);
  cout << "Searching index =" << bin_search(arr, n, num);
  return 0;
}