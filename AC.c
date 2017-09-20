//Thanks @Siger Young

#include <stdio.h>

int main()
{

    	long long N = 0;
	long long M = 0;
	scanf("%lld %lld", &N, &M);
	long long int sum = 0, ysc = 1;
	for(long long i = 1; i <= N; i++){
		ysc= ((ysc % M) * (i % M)) % M;
		if(ysc == 0)
		{
			break;
		}
		sum = sum + ysc;
	}
	printf("%d",sum % M);
}
