#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n; scanf("%lld", &n);
	vector <long long> v(n);
	vector <long long>::iterator it;
	for(long long i=0;i<n;i++) scanf("%lld",&v[i]);
	long long q; scanf("%lld", &q);
	while(q--){
		long long a; scanf("%lld", &a);
		it=lower_bound(v.begin(),v.end(),a);
		it--;
		if(it<v.begin()) printf("X ");
		else printf("%lld ", *it);
		it=upper_bound(v.begin(),v.end(),a);
		if(it==v.end()) printf("X\n");
		else printf("%lld\n", *it);
	}
	return 0;
}
