#include <iostream>
using namespace std;

int main()
{
  // it similar to book allocation problem
  int arr[] = {5, 10, 30, 20, 15};
  int n = sizeof(arr) / sizeof(int);
  int start = 30, end = 80, mid, ans;
  while (start <= end)
  {
    mid = start + end / 2;
    int page = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
      page += arr[i];
      if (page > mid)
      {
        count++;
        page = arr[i];
      }
    }
    if (count <= mid)
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  cout << ans;
}
