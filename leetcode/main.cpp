#include "main.h"


int main()
{
///	int a=hammingWeight(001101111001);
//	printf("%d",a);

	int a[3]={0,1,2};
	vector<int> test(a,a+3);

	vector<string> res=summaryRanges(test);

	for(int i=0;i<res.size();i++)
	{
		printf("%s    ",res[i].c_str());
	}
	printf("按任意键结束");
	getchar();
	return 0;
}