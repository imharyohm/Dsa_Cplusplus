#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    //space print karana hai!
    int space=n-i;
    while(space){
        cout<<" ";
        space--;
    }
    //1st triangle print karna hai!
    int j=1;
    while(j<=i){
        cout<<j;
        j++;
    } 
    //2nd triangle print karna hai!
    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }
    i++;
    cout<<endl;
  }

}