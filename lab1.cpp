#include <stdio.h>
float fact(int n){
	if (n==1) return 1;
	return n*fact(n-1);
}
float mypow(float x, int n){
	int i;
	float q;
	q=x;
	if(n==0) return 2;
	for (i=0;i<n-1;i++){
		x*=q;
	}
return x;
}
int main(){
	float t,e=0;
	float x[] = {1,2,3,4,5};
	float z[]= {2.716667};
	float y[0];
	int i, n,j=0;
	e=0.1;
	for (j=0; j<=4;j++){
		t=x[j];
		i=0;
		while (t>0){
		t = (mypow(-1,i)*mypow(x[j],i+1))/fact(i+1);
		y[j]=y[j]+t;
		i++;
	}
	}
	for(i=0; i<=4; i++){
		if (y[i] - z[i]>0.001) return 1;
	}
	return 0;
}
