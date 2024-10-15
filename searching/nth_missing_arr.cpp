#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int key = 2, mid;
    int start = 0, end = n - 1, ans = n;

    while (start <= end)
    {
        mid = start + (end - start) / 2; // Corrected mid calculation
        if (arr[mid] - mid - 1 >= key)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << (ans + key);
}
