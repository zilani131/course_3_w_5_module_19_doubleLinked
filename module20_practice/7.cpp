#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int mx=*max_element(a,a+n);
int f[mx+1];
memset(f,0,(mx+1)*sizeof(a[0]));
for(int i=0;i<n;i++){
    f[a[i]]++;
}
int ctn=0;
for(int val=0;val<=mx;val++){
    if(f[val]>0){
      ctn++;
    }
}
cout<<ctn;

}
