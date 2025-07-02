#include <bits/stdc++.h>
using namespace std;

/*
arr1[]=[1,1,2,3,4,5]
arr2[]=[2,3,4,4,5,6]
union[]=[1,2,3,4,5,6]
*/
// brute using a set
vector<int> union_brute(vector<int> &arr1, vector<int> &arr2)
{
  set<int> st; // ordered set
  int n = arr1.size();
  int m = arr2.size();
  for (int i = 0; i < n; i++)
  {
    st.insert(arr1[i]);
  } // O(nlogn)
  for (int i = 0; i < m; i++)
  {
    st.insert(arr2[i]);
  } // O(mlogn)
  vector<int> union_brute;
  int i = 0;
  for (auto it : st)
  {
    union_brute.push_back(it);
  } // O(m+n)     worst case when every element is unique in both the sets

  return union_brute;
}
//////////////////////////////////////////////
// Optimal (already sorted arrays)
vector<int> union_optimal(vector<int> &arr1, vector<int> &arr2)
{
  int n = arr1.size();
  int m = arr2.size();
  vector<int> UnionArr;
  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (arr1[i] <= arr2[j])
    {
      if (UnionArr.size() == 0 || UnionArr.back() != arr1[i])
      {
        UnionArr.push_back(arr1[i]);
      }
      i++;
    }
    else
    {
      if (UnionArr.size() == 0 || UnionArr.back() != arr2[j])
      {
        UnionArr.push_back(arr2[j]);
      }
      j++;
    }
  }
  while (j < n)
  {
    if (UnionArr.size() == 0 || UnionArr.back() != arr2[j])
    {
      UnionArr.push_back(arr2[j]);
    }
    j++;
  }
  while (i < n)
  {
    if (arr1[i] <= arr2[j])
    {
      if (UnionArr.size() == 0 || UnionArr.back() != arr1[i])
      {
        UnionArr.push_back(arr1[i]);
      }
      i++;
    }
  }
  return UnionArr;
}
// Tc->O(n+m)
// sc->O(n+m)
///////////////////////////////////////////////////////////

int main()
{
  int n;
  cin >> n;
  vector<int> arr1(n);
  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  int m;
  cin >> m;
  vector<int> arr2(m);
  for (int i = 0; i < m; i++)
    cin >> arr2[i];

  vector<int> res = union_optimal(arr1, arr2);
  for (auto &it : res)
  {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}