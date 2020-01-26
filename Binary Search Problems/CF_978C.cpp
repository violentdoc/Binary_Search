#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,m; scanf("%lld%lld", &n,&m);
	vector <long long> v(n+1);
	v[0]=0;
	for(int i=1;i<=n;i++){
		scanf("%lld", &v[i]);
		v[i]+=v[i-1];
	}
	while(m--){
		long long b; scanf("%lld", &b);
		long long s=lower_bound(v.begin(),v.end(),b)-v.begin();
		printf("%lld %lld\n",s,b-v[s-1]);
	}
	return 0;
}
