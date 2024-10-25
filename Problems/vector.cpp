#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  // create vectore
  vector<int> v;
  vector<int> v1(5, 1);
  cout << v.size() << "size :" << endl;
  cout << v.capacity() << "capa :" << endl;
  v.push_back(2);
  v.push_back(4);
  v.push_back(5);
  cout << "capa :" << v.capacity() << endl;
  cout << "size :" << v.size() << endl;

  // update value
  v1[1] = 5;
  cout << "capa :" << v1.capacity() << endl;
  cout << "size :" << v1.size() << endl;
  v1.push_back(8);
  cout << "capa :" << v1.capacity() << endl;
  cout << "size :" << v1.size() << endl;

  //? delete value from element
  vector<int> vnew;
  vnew.push_back(4);
  vnew.push_back(5);
  vnew.push_back(7);
  vnew.push_back(3);
  vnew.pop_back();
  cout << "capacity vnew:" << vnew.capacity() << endl;
  cout << "size vnew:" << vnew.size() << endl;

  vnew.erase(vnew.begin() + 1);
  cout << "capacity vnew:" << vnew.capacity() << endl;
  cout << "size vnew:" << vnew.size() << endl;

  // loop
  for (int i = 0; i < vnew.size(); i++)
  {
    cout << vnew[i] << " ";
  }

  //? insert value
  vnew.insert(vnew.begin() + 1, 50); // insert value
  cout << endl;
  for (int i = 0; i < vnew.size(); i++)
  {
    cout << vnew[i] << " ";
  }
  cout << endl;

  vnew[1] = 28;
  for (int i = 0; i < vnew.size(); i++)
  {
    cout << vnew[i] << " ";
  }
  cout << endl;
  vnew.clear();
  cout << "capacity vnew:" << vnew.capacity() << endl;
  cout << "size vnew:" << vnew.size() << endl;

  // arr value print
  vector<int> arr;
  arr.push_back(2);
  arr.push_back(4);
  arr.push_back(5);
  arr.push_back(6);
  cout << arr[0] << endl;
  cout << arr.front() << endl;
  cout << arr.back() << endl;
  cout << endl;
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  vector<int> ans;
  ans.push_back(10);
  ans.push_back(4);
  ans.push_back(50);
  ans.push_back(0);
  ans.push_back(3);

  //?increase and sort
  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  cout << endl;


  // binary search
  cout << binary_search(ans.begin(), ans.end(), 3) << endl;
  // searchindex
  cout << find(ans.begin(), ans.end(),4) - ans.begin() << endl;

  //? decrease and sort
  sort(ans.begin(), ans.end(), greater<int>());
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  cout << endl;

  //? decrease and sort  2
  sort(ans.rbegin(), ans.rend());
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  cout << endl;
}