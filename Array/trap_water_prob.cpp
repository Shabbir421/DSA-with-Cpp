#include <iostream>
using namespace std;

int main()
{
  int height[] = {4, 2, 0, 6, 3, 2, 5};
  int n = sizeof(height) / sizeof(height[0]);
  int leftmax[20000];
  leftmax[0] = height[0];

  cout << leftmax[0] << ", ";
  for (int i = 1; i < n; i++)
  {
    leftmax[i] = max(leftmax[i - 1], height[i - 1]);
    cout << leftmax[i] << ",";
  }
  cout << endl;
  int rightmax[100000];
  rightmax[n - 1] = height[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    rightmax[i] = max(rightmax[i + 1], height[i + 1]);
    cout << rightmax[i] << ",";
  }
  cout << rightmax[n - 1] << ",";
  cout << endl;

  int watertrap = 0;
  for (int i = 0; i < n; i++)
  {
    int currentwater = min(leftmax[i], rightmax[i]) - height[i];
    if (currentwater > 0)
    {
      watertrap += currentwater;
    }
  }
  cout << "water trap :" << watertrap;
}