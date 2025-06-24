#include<bits/stdc++.h>
using namespace std;

int main(){

  //the array is inputted
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  //Precompuation of hash value
  int hash[13]={0};
  for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
  }



  //the values for which the count is supposed to be found 
  int q;
  cin>>q;
  while(q--){
    int number;
    cin>>number;


    cout<<hash[number]<<endl;
  }

  return 0;
}