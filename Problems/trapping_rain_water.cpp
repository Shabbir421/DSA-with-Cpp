#include <iostream>
#include <vector>

using namespace std;
int main()
{

  vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
  int n = height.size();
  int leftmax[n], rightmax[n];

  //? left max
  leftmax[0] = height[0];
  cout << "left max " << leftmax[0] << ",";
  for (int i = 1; i < n; i++)
  {
    leftmax[i] = max(leftmax[i - 1], height[i - 1]);
    cout << leftmax[i] << ",";
  }
  cout << endl;
  // right max
  rightmax[n - 1] = height[n - 1];
  cout << "right max " << rightmax[n - 1] << ",";
  for (int i = n - 2; i >= 0; i--)
  {
    rightmax[i] = max(rightmax[i + 1], height[i + 1]);
    cout << rightmax[i] << ",";
  }

  cout << endl;
  //? print traip max water in
  
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