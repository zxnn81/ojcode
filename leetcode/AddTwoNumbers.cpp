#include "main.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* head=NULL,*end=NULL;
	int jw=0;
	while(l1!=NULL||l2!=NULL)
	{
		ListNode* tmp=end;
		int val1=0,val2=0;
		if(l1!=NULL)val1=l1->val;
		if(l2!=NULL)val2=l2->val;
		if(val1+val2+jw>=10)
		{
			end=new ListNode(val1+val2-10+jw);
			jw=1;
		}else
		{
			end=new ListNode(val1+val2+jw);
			jw=0;
		}
		if(head==NULL)
		{
			head=end;
		}
		if(tmp!=NULL)
		{
			tmp->next=end;
		}
		if(l1!=NULL)
			l1=l1->next;
		if(l2!=NULL)
			l2=l2->next;
	}
	if(jw==1)
	{
		ListNode* tmp=end;
		end=new ListNode(1);
		tmp->next=end;
	}
	return head;
}