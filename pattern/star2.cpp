#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=1;
    int i=0;
    while(i<n){
            int space=i;
           while(space){
               cout<<" ";
               space--;
           }
        for(j;j<=n;j++){
         cout<<i+1;
        }
        i++;
        j=i+1;
        cout<<endl;
    }
}