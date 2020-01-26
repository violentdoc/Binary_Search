#include<bits/stdc++.h>

using namespace std;

int BS(int *arr,int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x) return mid;
        else if(x<arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    sort(arr,arr+n);
    int a; scanf("%d", &a);
    int s=BS(arr,n,a);
    if(s==-1) printf("%d not found\n", a);
    else printf("%d found at %d\n", a,s);
    return 0;
}
