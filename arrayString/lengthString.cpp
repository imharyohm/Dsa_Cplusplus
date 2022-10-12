#include<iostream>
using namespace std;
void reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}
char toLowercase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
    char temp = ch-'A'+'a';
    return temp;
    }
    
}
int main(){
    char name[20];
    cin>>name;
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count; 
    cout<<"Reverse name is:";
    reverse(name,count);
    cout<<name<<endl;
    cout<<toLowercase('A');

}


#include <bits/stdc++.h> 
char toLowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>=0&&ch<=9))
    return ch;
    else{
    char temp = ch-'A'+'a';
    return temp;
    }
    
}

bool checkPalindrome(string s)
{
    string str;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            str.push_back(s[i]);
        }
    }
    
    int st=0;
    int e=str.length()-1;
    while(st<e){
        if(toLowercase(str[st])!= toLowercase(str[e]))
            return 0;
        else if(str[st]=='\0')
            return 0;
    else{
        st++;
        e--;
      }   
    }
    return 1;
}