#include<bits/stdc++.h>
using namespace std;

void print_name(int n,string name,int count=0){
  if (count==n){
    return;//Base case
  }
  cout<<name<<endl;
  print_name(n,name,count+1);
}

int main(){
  int n;
  string name;
  cout<<"Enter the number of times you want to print the name: ";
  cin>>n;
  cout<<"Enter the name: ";
  cin>>name;
  print_name(n,name);
  return 0;
}