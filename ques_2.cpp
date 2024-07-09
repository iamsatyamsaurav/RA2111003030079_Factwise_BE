#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findAns(vector<int>&arr,int k){
    int n=arr.size();
    if(k>n){
        return -1;
    }
    int max_sum=0;
    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }
    int current_sum=max_sum;
    for(int i=0;i<k;i++){
        current_sum=current_sum-arr[k-1-i]+arr[n-1-i];
        max_sum=max(max_sum,current_sum);
    }
    return max_sum;
}
int main(){
    int n,k;
    cout<<"Enter the size of the array(no. of cards):"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the no of points associated with each card:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k:"<<endl;
    cin>>k;

    int result=findAns(arr,k);
    if(result==-1){
        cout<<"k is greater than n"<<endl;
    }
    else{
        cout<<"The maximum score is:"<<result<<endl;
    }
    return 0;
}
