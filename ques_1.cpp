#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countLetters(string s){
    int count=0;
    for(char c:s){
        if(isalpha(c)){
            count++;
        }
    }
    return count;
}
string numberToWords(int num){
    vector<string> below_20={"","one","two","three","four","five","six","seven","eight"
    ,"nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
    "seventeen","eighteen","nineteen"};
    vector<string>tens={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(num==1000){
        return "one thousand";
    }
    string result="";
    if(num>=100){
        result=result+below_20[num/100]+" hundred";
        num%=100;
        if(num>0){
            result+=" and ";
        }
    }
    if(num>=20){
        result+=tens[num/10];
        num%=10;
        if(num>0){
            result+=" "+below_20[num];
        }
    }
    else if(num>0){
        result+=below_20[num];
    }
    return result;
}
int main(){

    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    string words=numberToWords(n);
    int letterCount=countLetters(words);
    cout<<"The number of letters used is :"<<letterCount<<endl;
    return 0;
}