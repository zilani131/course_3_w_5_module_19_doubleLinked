#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n){
for(int i=0;i<n-1;i++){
       int flag=0;
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
           flag=1;
        }


    }
      if(flag==0){
            break;}
}

}
int main(){

int a,k;
cin>>a>>k;
int num[a];
for(int i=0;i<a;i++){
    cin>>num[i];
}
bubbleSort(num,a);
int mi=num[k-1];
int mx=num[a-k];
cout<<mi<<" "<<mx<<endl;
/*for(int i=0;i<a;i++){
    cout<<num[i]<<" ";
}*/
}
