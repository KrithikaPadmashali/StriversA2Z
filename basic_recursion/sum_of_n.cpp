#include<bits/stdc++.h>
using namespace std;

//method 1:Using parameter
/*
Why parameterised ?
because you are passing an extra variable in each of your function call
In simple words it would be passing a book along the row of students with each student writing their name in it
*/
void sum1(int i,int sum=0){
  if (i<1){
    cout<<(sum)<<endl;
    return;
  }
  sum1(i-1,sum+i);
}
//method 2:Using functions
int sum2(int i){
  if (i==0){
    return 0;
  }
  return i+sum2(i-1);
}


int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  sum1(n);
  int result=sum2(n);
  cout<<result<<endl;
}