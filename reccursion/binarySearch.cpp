#include<iostream>
using namespace std;
void reverse(string &str,int i){
    int n=str.length();
    int j=n-i-1;
    if(i>j)
        return;
    else{
        swap(str[i],str[j]);
         reverse(str,++i);
    }
}


string reverseString(string str)
{
	reverse(str,0);
    return str;
}