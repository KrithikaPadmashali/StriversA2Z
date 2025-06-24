//hashing for characters

#include<bits/stdc++.h>
using namespace std;

//incase you have lower case characters then you are supposed to do  the charcter -'a' hehe when you do that 'a' - 'a' gives 0 so index of a is 0


int main(){
  string s;
  cin>>s;


  int hash[26]={0};
  for(int i=0;i<s.size();i++){
    hash[s[i]-'a']+=1;
  }
  int q;
  cin>>q;
  while(q--){
      char c;
      cin>>c;
      
      //fetch
      cout<<hash[c-'a']<<endl;

  }
  return 0;
}
//if its not only given in lower case then yyou need to take the whole 256 characters and it still works the same 
// int main(){
//   string s;
//   cin>>s;


//   int hash[256]={0};
//   for(int i=0;i<s.size();i++){
//     hash[s[i]]+=1;
//   }
//   int q;
//   cin>>q;
//   while(q--){
//       char c;
//       cin>>c;
      
//       //fetch
//       cout<<hash[c]<<endl;

//   }
//   return 0;
// }