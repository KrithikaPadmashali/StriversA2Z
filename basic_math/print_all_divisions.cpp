#include<bits/stdc++.h>
using namespace std;

void print_all_divisions(int n){
  for(int i=1;i<=n;i++){
    if (n%i==0){
      cout<<i<<" ";
    }
    else{
      continue;
    }
  }
}
//this function takes a time complexity of O(n)
void less_time_print_all_divisions(int n){
   vector <int> divisores;
  for(int i=1;i<=sqrt(n);i++){
    if (n%i==0){
      divisores.push_back(i);
      if (i!=n/i){
        divisores.push_back(n/i);
      }
    }
    
  }
  sort(divisores.begin(), divisores.end());
  for(auto it: divisores){
    cout<<it<<" ";
  }
}
//O(sqrt(n))
int main(){
  int n;
  cout<<"Enter a n3umber: "<<endl;
  cin>>n;
  print_all_divisions(n);
  cout<<endl;
  less_time_print_all_divisions(n);
}