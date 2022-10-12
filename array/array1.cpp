#include<iostream>
using namespace std;
int main(){
    int a[1000];// = {0};
    int n=1;
    for(int i=0;i<=1000;i++){
        a[i]=n;
    }
    for(int i=0;i<=1000;i++){
        cout<<a[i];
    }
}