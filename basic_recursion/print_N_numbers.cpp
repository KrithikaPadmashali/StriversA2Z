#include<bits/stdc++.h>
using namespace std;

void counting_n_numbers(int n,int count=0){
  
  if(count==n){
     return;
  }
 cout<<count<<" ";

 counting_n_numbers(n,count+1);
}

int main(){
  int n;
  cout<<"Enter a number:";
  cin>>n;
  cout<<"Counting from 0 to "<<n<<": ";
  counting_n_numbers(n);
  cout<<n;
  return 0;
}