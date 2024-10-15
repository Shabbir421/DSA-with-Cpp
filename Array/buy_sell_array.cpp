#include <iostream>
using namespace std;

int main()
{
  int price[] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(price) / sizeof(price[0]);
  int bestbuy[100000];
  bestbuy[0] = INT8_MAX;
  for (int i = 1; i < n; i++)
  {
    bestbuy[i] = min(bestbuy[i - 1], price[i - 1]);
    cout << bestbuy[i] << "," << endl;
  }
  int maxprofit = 0;
  for (int i = 0; i < n; i++)
  {
    int currentprofit = price[i] - bestbuy[i];
    maxprofit = max(maxprofit, currentprofit);
  }
  cout << "max profit: " << maxprofit << endl;

  // time complexity = O(n+n)=O(2nd) =O(n)
}