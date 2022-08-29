#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int ctn=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==k){
            ctn++;
        }
    }
}
cout<<ctn;
}
