#include <bits/stdc++.h>
using namespace std;

// Take an element and place it in the correct order

// best case O(n) as no swaps happen worst and average are O(n^2)
void insertion_sort(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}