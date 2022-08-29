#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int a=2;
cin>>n;
while(a<n){
    int ctn=0;
    int i=2;
    while(i<=a/2){
        if(a%i==0){
            ctn++;
        }
        if(ctn>0){
            break;
        }
        i++;
    }
    if(ctn==0){
        cout<<a<<" ";
    }
    a++;
}

}
