//program to find out square root of any number with decimal value
#include<iostream>
using namespace std;
long long int sqrt(int n)
    {
     int s =0;
     int e =n;
     long long int mid = s+(e-s)/2;
     
     long long int ans = -1;
     while(s<=e)
     {
        long long int sq = mid*mid;
        if(sq == n){
            return mid;
        }
        else if(sq<n){
            ans=mid;
            s=mid+1;
        }
        else 
            e=mid-1;
        mid = s+(e-s)/2;
      }
     return ans;
    }
double morePrecision(int n,int pre,int tempans){
    double factor =1;
    double ans = tempans;
    for(int i=0;i<pre;i++ ){
        factor=factor/10;
        

        for(double j=ans;j*j<n;j=j+factor){
                ans=j;
        }
    }
    return ans;
}
int main(){
    int n,pre;
    cout<<"Enter the number of which square root is to find out:"<<endl;
    cin>>n;
    cout<<"Enter precision:"<<endl;
    cin>>pre;

    int tempans = sqrt(n);
    cout<<"Answer is:"<<morePrecision(n,pre,tempans);
    return 0;
}