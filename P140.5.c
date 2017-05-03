#include<stdio.h>
int main() {
	int a, oa, n, i, Sn=0;
	printf( "input a and n: \n" );
	scanf("%d,%d",&a,&n);
	if(n>0) {
		oa = a;
	for( i=0; i<n; i++) {
		Sn = Sn + a;
		a = a * 10 + oa;
		}
	printf("Sn = %d\n",Sn);	
	}	
}
