#include "main.h"

struct tspair 
{
	int val;
	int idx;
};
bool operator < (const tspair &a,const tspair &b)
{
	if(a.val<b.val)
		return true;
	else
		return false;
}
bool operator > (const tspair &a,const tspair &b)
{
	if(a.val>b.val)
		return true;
	else
		return false;
}
vector<int> twoSum(vector<int>& nums, int target)
{
	
	tspair *tmp;
	int fi,si;
	set<tspair>::iterator pos;
	tmp=new tspair[nums.size()];
	for(int i=0;i<nums.size();i++)
	{
		tmp[i].val=target-nums[i];
		tmp[i].idx=i;
	}
	set<tspair> tmph;
	tmph.insert(tmp,tmp+nums.size());
	for(int i=0;i<nums.size();i++)
	{
		fi=i;
		tspair buf;
		buf.val=nums[i];
		pos=tmph.find(buf);
		if (pos!=tmph.end())
		{
			si=(*pos).idx;
			break;
		}	
	}
	vector<int> res;
	if(fi<si)
	{
		res.push_back(fi);
		res.push_back(si);
	}else
	{
		res.push_back(si);
		res.push_back(fi);
	}
	return res;
}