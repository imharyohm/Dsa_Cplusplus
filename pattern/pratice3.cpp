#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int i=1;
     char start='A';
     while(i<=n){
        int j=1;
        while(j<=n){ 
            char ch = start+j-1;
            cout<<ch;
        j++;
      }
      cout<<"\n";
      i++;
      start++;
     }
}  