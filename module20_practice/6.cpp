#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int k,int l,int val){
    int low=l,high=k-1;

while(low<=high){
    int mid=(low+high)/2;
    if(val==a[mid]){
        return mid;
    }
    else{
        if(val<a[mid]){
            high=mid-1;
            binarySearch(a,high,low,val);
        }
        else if(val>a[mid]){
            low=mid+1;
            binarySearch(a,high,low,val);
        }
    }

}
return -1;

}

int main(){

int n,val;
cin>>n>>val;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int pos=binarySearch(a,n,0,val);
if(pos==-1){
    cout<<"The val is not in the array"<<endl;
}
else {
    cout<<pos+1;
}
}
