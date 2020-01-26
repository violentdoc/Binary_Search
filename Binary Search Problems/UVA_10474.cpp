#include<bits/stdc++.h>

using namespace std;

int res;

int bs(int *arr,int l,int h,int x){
	if(l<=h){
		int m=l+(h-l)/2;
		if(arr[m]==x) {
			res=m;
			return bs(arr,l,m-1,x);
		}
		else if(x<arr[m]) return bs(arr,l,m-1,x);
		else return bs(arr,m+1,h,x);
	}
	return res;
}

int main(){
	int i=1;
	while(1){
		int n,q; scanf("%d%d", &n,&q);
		if(n==0 && q==0) return 0;
		int arr[n];
		for(int i=0;i<n;i++) scanf("%d", &arr[i]);
		sort(arr,arr+n);
		printf("CASE# %d:\n", i);
		while(q--){
			res=-1;
			int a; scanf("%d", &a);
			int s=bs(arr,0,n-1,a);
			if(s==-1) printf("%d not found\n", a);
			else printf("%d found at %d\n", a, s+1);
		}
		i++;
	}
}
