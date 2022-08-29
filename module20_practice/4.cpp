#include<bits/stdc++.h>
using namespace std;

void sum(int a[],int s,int t){
 int sum=0;
 for(int i=s-1;i<t;i++){
    sum=sum+a[i];
 }
 cout<<sum<<" ";

}
int main(){

int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int t;
cin>>t;
while(t--){
    int s,x;
    cin>>s>>x;

    sum(a,s,x);
    cout<<endl;

}
}
