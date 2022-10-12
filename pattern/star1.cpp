#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start =n;
    for(int i=0;i<=n;i++){
        int j=1;
        while(j<=start){
            cout<<"*";
            j++;
        }
        start--;
        cout<<endl;
    }

}