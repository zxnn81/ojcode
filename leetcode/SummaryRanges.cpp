#include "main.h"


vector<string> summaryRanges(vector<int>& nums)
{
	vector<string> res;
	res.empty();
	if(nums.size()==0)
	{
		return res;
	}
	if(nums.size()==1)
	{
		ostringstream ostr;
		ostr<<nums[0];
		string tmp=ostr.str();
		res.push_back(tmp);
		return res;
	}
	int rb,re;
	rb=nums[0];
	for(int i=0;i<nums.size()-1;i++)
	{
		if(nums[i+1]-nums[i]==1)
		{
			re=nums[i];
		}else
		{
			re=nums[i];
			ostringstream ostr;
			if(rb==re)
				ostr<<re;
			else
				ostr<<rb<<"->"<<re;
			string tmp=ostr.str();
			rb=nums[i+1];
			res.push_back(tmp);
		}
	}
	ostringstream ostr;
	if(nums[nums.size()-1]-re==1)
		ostr<<rb<<"->"<<nums[nums.size()-1];
	else
		ostr<<nums[nums.size()-1];
	string tmp=ostr.str();
	res.push_back(tmp);
	return res;
}