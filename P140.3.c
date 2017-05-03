
#include<stdio.h>
int main()
{
   int m, n, a, b;
   printf("input two positive integers:");
   scanf ("%d,%d",&m,&n);
   if(m>0&&n>0) {
   		a=m; b=n;
	   	while (m!=n) {
	   		if (m>n) {
	   			m=m-n;
			   } 
	        else {
	        	n=n-m;	
			}
	   }     
	   printf("Greatest common divisor is:%d\n",m);
	   printf("Least common multiple is:%d\n",a*b/m);
	}else {
		printf("input two positive integers,OK?");
	}
}
   
