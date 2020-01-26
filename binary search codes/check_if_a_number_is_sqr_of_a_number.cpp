//check if a number is sqrt of a number or not
#include<bits/stdc++.h>

using namespace std;

int check(int n,int l,int h){
	int m=l+(h-l)/2;
	if(l<=h){
		if(m*m==n) return m;
		else if(m*m>n) return check(n,l,m-1);
		else return check(n,m+1,h);
	}
	return -1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a; scanf("%d", &a);
		a = check(a,0,a);
		if(a==-1) cout <<"no" << endl;
		else cout << "yes " << a << endl;
	}
	return 0;
}
