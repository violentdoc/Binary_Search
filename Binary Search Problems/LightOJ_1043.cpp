#include<bits/stdc++.h>

using namespace std;

#define dif 10e-8
double ab,bc,ac,r;


double BS(double low,double high,double ar, double r){
	double mid=low+(high-low)/2;
	if(!(low>high)){
		double a=(mid*ac)/ab;
		double b=(mid*bc)/ab;
		double s=mid+a+b;
		s=sqrt(s*(s-a)*(s-b)*(s-mid));
		s=s/(ar-s);
		//cout << s << endl;
		//getchar();
		if(fabs(s-r)<=dif) return mid;
		else if(s<r) return BS(mid,high,ar,r);
		else return BS(low,mid,ar,r);
	}
	return -1;
}

int main(){
	int t; scanf("%d", &t);
	for(int i=1;i<=t;i++){
//		double ab,bc,ac,r;
		scanf("%lf%lf%lf%lf", &ab,&ac,&bc,&r);
		double ar=ab+bc+ac;
		ar=sqrt(ar*(ar-ab)*(ar-bc)*(ar-ac));
		double s=BS(0,ab,ar,r);
		printf("Case %d: %.8lf\n",i,s);
	}
	return 0;
}
