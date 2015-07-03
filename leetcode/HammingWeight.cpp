#include "main.h"
////±à³ÌÖ®ÃÀ p119
int hammingWeight(uint32_t n) {

	uint32_t tmp;
	int count=0;
	while(n!=0)
	{
		tmp=n>>1;
		tmp=tmp<<1;
		if((tmp^n)==1)
		{
			count++;
		}
		n=tmp>>1;

	}

	return count;
}