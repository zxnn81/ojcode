#include "main.h"


int lengthOfLongestSubstring(string s)
{
	char chbuf[128]={0};
	int index=1;
	int inmax=1;
	if(s.size()==0)return 0;
	for(int i=0;i<s.size();i++)
	{
	/*	if(s.at(i)<'a'||s.at(i)>'z')
		{
			for(int j=0;j<26;j++)
			{
				chbuf[j]=0;	
			}
			index=1;
			continue;
		}*/
		if(chbuf[s.at(i)]==0)
		{
			chbuf[s.at(i)]=index;
			if (inmax<index)
				inmax=index;
		}
		else
		{
			int tmp=chbuf[s.at(i)];
			for(int j=0;j<128;j++)
			{
				chbuf[j]=chbuf[j]-tmp>0?chbuf[j]-tmp:0;
			}
			index=index-tmp;
			chbuf[s.at(i)]=index;
			if (inmax<index)
				inmax=index;
		}
		index++;
	}
	return inmax;
}