#include<bits/stdc++.h>
using namespace std;

//approach 1
void sort1(vector<int>& arr){
  int count0=0,count1=0,count2=0;
  for(int num:arr){
    if (num==0) count0++;
    else if (num==1) count1++;
    else count2++;
  }
  for(int i=0;i<count0;i++) arr[i]=0;
  for(int i=count0;i<count0+count1;i++) arr[i]=1;
  for(int i=count0+count1;i<arr.size();i++) arr[i]=2;

}


//approach 2
void sort2(vector<int>& arr){
  int n=arr.size();
  //Dutch National Flag Problem
  int low=0,mid=0,high=n-1;
  while(mid<=high){
    if (arr[mid]==0){
      swap(arr[low],arr[mid]);
      low++;
      mid++;

    }
    else if(arr[mid]==1){
      mid++;
    }
    else{
      swap(arr[mid],arr[high]);
      high--;
    }
  }

}

int main() {
    vector<int> arr = {2, 0, 1, 2, 0, 1, 0};
    
    // Using approach 1
    sort1(arr);
    cout << "Sorted array using approach 1: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Resetting the array for the next approach
    arr = {2, 0, 1, 2, 0, 1, 0};

    // Using approach 2
    sort2(arr);
    cout << "Sorted array using approach 2: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


