#include<iostream>
#include<string.h>  
using namespace std;

char toLowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0'&&ch<='9'))
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
         else{
        st++;
        e--;
      }   
    }
    return 1;
}
