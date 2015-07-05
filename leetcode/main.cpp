#include "main.h"


int main()
{
///	int a=hammingWeight(001101111001);
//	printf("%d",a);

/*	int a[3]={3,2,4};
	int ll1[2]={9,9};
	int ll2[1]={1};
	ListNode*l1=NULL,*l2=NULL;
	ListNode* end;
	for(int i=0;i<2;i++)
	{
		if(l1==NULL)
		{
			l1=new ListNode(ll1[i]);
			end=l1;
		}else
		{
			ListNode* tmp=end;
			end=new ListNode(ll1[i]);
			tmp->next=end;
		}
	}
	for(int i=0;i<1;i++)
	{
		if(l2==NULL)
		{
			l2=new ListNode(ll2[i]);
			end=l2;
		}else
		{
			ListNode* tmp=end;
			end=new ListNode(ll2[i]);
			tmp->next=end;
		}
	}
	*/

	/*ListNode *res=addTwoNumbers(l1,  l2);
	while(res!=NULL)
	{
		cout<<res->val;
		res=res->next;
	}*/
	/*vector<int> test(a,a+3);
	ifstream file;
//	file.open("a.txt");
	string str="2-1-1";
//	string str;
//	file>>str;
	//int res=calculate(str);
	vector<int> res=twoSum(test,6);
	cout<<res[0]<<endl<<res[1];*/

//	for(int i=0;i<res.size();i++)
//	{
//		printf("%s    ",res[i].c_str());
//}

	
	int a=lengthOfLongestSubstring("hh;'gh/ofa'o;egg/.a*gehhybah");
	cout<<a;
	printf("\n按任意键结束");
	getchar();
	return 0;
}