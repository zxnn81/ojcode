#include "main.h"


int main()
{
///	int a=hammingWeight(001101111001);
//	printf("%d",a);

	int a[3]={3,2,4};
	vector<int> test(a,a+3);
	ifstream file;
//	file.open("a.txt");
	string str="2-1-1";
//	string str;
//	file>>str;
	//int res=calculate(str);
	vector<int> res=twoSum(test,6);
	cout<<res[0]<<endl<<res[1];

//	for(int i=0;i<res.size();i++)
//	{
//		printf("%s    ",res[i].c_str());
//}
	printf("\n按任意键结束");
	getchar();
	return 0;
}