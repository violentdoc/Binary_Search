#include<bits/stdc++.h>

using namespace std;

#define dif 10e-7

double sqrt_bs(double low,double high,double n){
	double mid=low+(high-low)/2;
	if(!(low>high)){
	     /* to check if the doubles are equal what i have done
		is, checking their deiffereces. If the difference is
		close to zero they must be equal  */
		if(fabs(mid*mid-n)<=dif) return mid;
		else if(mid*mid>n) return sqrt_bs(low,mid,n);
		else return sqrt_bs(mid,high,n);
	}
	return -1;
}

int main(){
	double n; scanf("%lf", &n);
	double s=sqrt_bs(0,n,n);
	printf("%lf\n", s);
	return 0;
}
