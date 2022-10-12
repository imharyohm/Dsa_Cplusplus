#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int value=n;
     int k=n;
    for(int i=1;i<=n;i++){
        //first part print karna hai!
        int j=1;
        while(j<=value){
            cout<<j;
            j++;
        }
        value--;
        //second part print karana hai
        int star=i-1;
        while(star){
            cout<<"**";
            star--;
        }
        //third part print karna hai!
       
        while(k>=1){
            cout<<k;
            k--;
        }
        k=n-i;
        cout<<endl;
    }
}