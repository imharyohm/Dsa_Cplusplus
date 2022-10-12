#include<iostream>
using namespace std;
char getmaxOccur(string s){

        int arr[26]={0};

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            int num=0;
            if(ch>='a' &&  ch<='z'){
                num= ch-'a';
            }
            else{
                num= ch-'A';
            }
            arr[num]++;

        }
        int max=-1;
        int ans =0;
        for(int i=0;i<26;i++){
            if(max<arr[i]){
                max=arr[i];
                ans=i;
            }
        }
    char finalans = 'a'+ans;
    return finalans;
}
int main(){
  string s;
  cin>>s;
  cout<<getmaxOccur(s);
}