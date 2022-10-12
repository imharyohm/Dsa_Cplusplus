#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    bool checkEqual(int a[26],int b[26]){
            for(int i=0;i<26;i++){
                if(a[i]!=b[i])
                return 0;
            }
            return 1;

    }
    bool checkInclusion(string s1, string s2){
        //count the size of s1
        int count[26]={0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count[index]=count[index]+1;
        }
        //taverse the window of size s1 lenght to s2 
         int i=0;
         int windowSize = s1.length();
         int count2[26] = {0};
         //running the window
         while(i<windowSize && i<s2.length()){
             int index = s2[i]-'a';
             count2[index]++;
             i++; 
         }
         if (checkEqual(count,count2))
         return 1; 
         //to run window
         cout<<i;
         while(i<s2.length()){
             char newchar= s2[i];
             int index = newchar -'a';
             cout<<newchar;
             count2[index]++;
             char oldchar = s2[i-windowSize];
             index=oldchar-'a';
             count2[index]--;
             i++;

             if (checkEqual(count,count2))
         return 1; 
         }

         return 0;
     }
    

    int main(){
        string first;
        cin>>first;
        string second;
        cin>>second;
        cout<<checkInclusion(first,second);


    }
