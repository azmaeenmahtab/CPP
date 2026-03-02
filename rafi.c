#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    int n,a[100],sum=0;
     scanf("&d",&n);
     for(int i=0;i<n;i++){
         scanf("&d",&a[i]);
     }
     for(int j=0;j<n;j++){
         if(a[j]==0){
             sum++;
         }
     }
    }
    return 0;
}