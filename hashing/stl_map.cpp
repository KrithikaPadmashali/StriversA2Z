#include<bits/stdc++.h>
using namespace std;

//STL collection ->1)MAP  2)UNORDERED_MAP
//map<key,value>
int main(){
   
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }


  //pre-compute

  //Map always keeps it in ascending order that is in increasing order

  map<int ,int> mapp;
  for(int i=0;i<n;i++){
     mapp[arr[i]]++;

  }
  // for(auto it:mapp){
  //   cout<<it.first<<"--->"<<it.second<<endl;
  // }


  int q;
  cin>>q;
  while(q--){
    int  number;
    cin>>number;
    //fetch 


    cout<<mapp[number]<<endl;
  }




  return 0;
}

