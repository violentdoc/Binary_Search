#include<bits/stdc++.h>

using namespace std;

long long check5(long long x){
	long long c=0;
	for(int i=5;x/i!=0;i*=5)
		c+=x/i;
	return c;
}

long long BS(long long n){
	long long low=0,high=5*n,result=-1;
	while(low<=high){
		long long mid=low+(high-low)/2;
	//	cout << mid << endl;
		if(check5(mid)==n) { result=mid; high=mid-1; }
		else if(n<check5(mid)) high=mid-1;
		else low=mid+1;
	}
	return result;
}

int main(){
	int t; scanf("%d", &t);
	for(int i=1;i<=t;i++){
		long long a;
		scanf("%lld", &a);
		long long s=BS(a);
		printf("Case %d: ",i);
		if(s==-1) printf("impossible\n");
		else printf("%lld\n", s);
	}
	return 0;
}
