#include <stdio.h>

int main()
{
    long long N = 0, M = 0;
	scanf("%ld,%ld", &N, &M);
	printf("%ld,%ld\n", N, M);
	long long int sum = 0,ysc;
	ysc=1;
	for(long long i=1; i <=N;i++){
		ysc= ((ysc % M) * (i % M)) % M;
		//printf("%ld\n", ysc);
		sum = sum + ysc;
	}
	printf("%d",sum % M);
}
