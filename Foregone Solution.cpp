/*
problem link:https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705
status:accepted
problem name:Foregone Solution
author : moahnd sakr 
blog : mohandsakr.wordpress.com
linkedin:https://www.linkedin.com/in/mohand-sakr/


*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

 int t;
cin>>t;
int cases=0;
while (t--){
    
 string s,s1,s2;
 cin>>s;
 int len=s.length();
 for(int i=0;i<len;i++){
     if(s[i]=='4'){
         s1+='1';
         s2+='3';
     }
     else {
         s1+='0';
         s2+=s[i];
     }
 }
++cases;
cout<<"Case #"<<cases<<": "<<s1<<" "<<s2<<endl;

    
} 
}
