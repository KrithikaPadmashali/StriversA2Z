#include <bits/stdc++.h>
using namespace std;

// Brute
/*
  sort then go back, i.e if i have 1 2 4 5 7 7  i know largest=arr[n-1] so if i do

  for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
          second_largest=arr[i];
          break;
        }
  }

  or [1,7,7,7,7,7]  so sorting logn then going through all the n elements so TC->O(nlogn)
*/

// Better
/*
so first finding the largest element then seting slargest = -1 then checking for two condition if arr[i]>slargest && slargest!=largest then setting slargest to arr[i]
 int largest = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  slargest=-1;
  for(int i=0;i<n;i++){
  if(arr[i]>slargest && arr[i]!=largest){
  slargest=arr[i];
  }
  }
}
TC->0(2n)

*/
// optimal
// O(N)
int second_largest(int arr[], int n)
{
  int largest = arr[0], slargest = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      slargest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > slargest)
    {
      slargest = arr[i];
    }
  }
  return slargest;
}
int second_smallest(int arr[], int n)
{
  int smallest = arr[0], ssmallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      ssmallest = smallest;
      smallest = arr[i];
    }
    else if (arr[i] < ssmallest)
    {
      ssmallest = arr[i];
    }
  }
  return ssmallest;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int res1 = second_largest(arr, n);
  int res2 = second_smallest(arr, n);
  cout << res1 << " and " << res2;
  return 0;
}