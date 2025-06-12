#include<bits/stdc++.h>
using namespace std;

void printing_Nto1(int n,int count){
  if (count==0){
    return;
  }
  cout<<count<<" ";
  printing_Nto1(n,count-1);
}

int main(){
  int n;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  printing_Nto1(n,n);
  return 0;
}