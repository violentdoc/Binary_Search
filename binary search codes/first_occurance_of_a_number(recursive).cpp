#include<bits/stdc++.h>

using namespace std;

int result;

int BS(int *arr,int low,int high,int x){
    int mid=low+(high-low)/2;
    if(low<=high){
        if(arr[mid]==x) { result=mid; return BS(arr,low,mid-1,x); }
        else if(x<arr[mid]) return BS(arr,low,mid-1,x);
        else return BS(arr,mid+1,high,x);
    }
    return result;
    //or we could do if(low>high) return -1;
}

int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    int a; scanf("%d", &a);
    result=-1;
    int s=BS(arr,0,n-1,a);
    if(s==-1) printf("%d not found\n", a);
    else printf("%d found at %d\n", a,s);
    return 0;
}
