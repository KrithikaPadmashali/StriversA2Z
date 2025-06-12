#include<bits/stdc++.h>
using namespace std;

void printing_linearly(int n,int count=1){
  if (count==n){
    return;
  }
  cout<<count<<" ";
  printing_linearly(n,count+1);
}

int main(){
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  printing_linearly(n);
  cout<<n<<endl;
  return 0;
}