#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int i=1;
     int value =1;
     while(i<=n){
        int j=1;
        while(j<=n){ 
            char ch = 'A'+value-1;
            cout<<ch;
        j++;
        value++;
      }
      cout<<"\n";
      i++;
     }
}  