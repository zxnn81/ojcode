#include "main.h"

vector<int> twoSum(vector<int>& nums, int target)
{
	int *tmp;
	int fi=-1,si=-1;
	set<int>::iterator pos;
	tmp=new int[nums.size()];
	for(int i=0;i<nums.size();i++)
	{
		tmp[i]=target-nums[i];
	}
	set<int> tmph;
	tmph.insert(tmp,tmp+nums.size());
	for(int i=0;i<nums.size();i++)
	{
		si=-1;
		fi=-1;
		pos=tmph.find(nums[i]);
		if (pos!=tmph.end())
		{
			fi=i;
			for(int i=0;i<nums.size();i++)
			{
				if(nums[fi]==tmp[i]&&fi!=i)
				{
					si=i;
					break;
				}
			}
			if(si==-1)
				continue;
			else
				break;
		}	
	}

	vector<int> res;
	if(fi<si)
	{
		res.push_back(fi+1);
		res.push_back(si+1);
	}else
	{
		res.push_back(si+1);
		res.push_back(fi+1);
	}
	return res;
}

//vector<int> twoSum(vector<int>& nums, int target)
//{

//}