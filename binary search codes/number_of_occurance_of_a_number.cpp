#include<bits/stdc++.h>

using namespace std;

int BS(int *arr,int n,int x, bool flg){
    int low=0,high=n-1,result=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            result=mid;
            if(flg) high=mid-1;
            else low=mid+1;
        }
        else if(x<arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return result;
}

int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    sort(arr,arr+n);
    int a; scanf("%d", &a);
    //first occurrence is s1 and the last occurrence is s2
    int s1=BS(arr,n,a,true);
    int s2=BS(arr,n,a,false);
    if(s1==-1) printf("%d not found\n", a);
    else printf("%d found %d times\n", a,s2-s1+1);
    return 0;
}
