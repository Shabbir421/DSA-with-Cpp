#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6};
  int n = 7;
  for (int start = 0; start < n; start++) // n
  {
    for (int end = start; end < n; end++) // n
    {
      // cout << "(" << start << "," << end << ")";
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " , ";
    }
    cout << endl;
  }
}