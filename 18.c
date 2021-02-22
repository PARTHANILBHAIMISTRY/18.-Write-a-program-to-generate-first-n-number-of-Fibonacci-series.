//write a C program to generate first n number of fibonacci series.
#include <stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nextTerm;
	printf("Enter the number of term:");
	scanf("%d",&n);
	printf("Fibonacci Series:");
	for (i=1;i<=n;i++)
	{
		printf("%d",t1);
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
    return 0;
}
