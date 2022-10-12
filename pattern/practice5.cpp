#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int i=1;
     char ch='a';
     while(i<=n){
        int j=1;
       /* while(j<=i){ 
            cout<<ch;
        j++;
      }*/
      while(j<=i){
        char ch='a'+i-1;
        cout<<ch;
        j++;
      }
      cout<<"\n";
      i++;
      //ch++;
     }
}  