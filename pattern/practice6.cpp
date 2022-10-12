#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int i=1;
     char start='a';
     while(i<=n){
        int j=1;
        while(j<=i){ 
            char ch = start+j-1;//'a'+i+j-2;
            cout<<ch;
        j++;
      }
      cout<<"\n";
      i++;
      start++;
     }
}  