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

  //unordered-Map always keeps it in g order that it was inputted, it is better and should be used as it takes O(1) while a map takes O(n) but in worst cases the unordered map can take O(n)  see why at the end of the code

  unordered_map<int ,int> mapp;
  for(int i=0;i<n;i++){
     mapp[arr[i]]++;

  }
  for(auto it:mapp){
    cout<<it.first<<"--->"<<it.second<<endl;
  }

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


