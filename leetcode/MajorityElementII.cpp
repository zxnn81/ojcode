#include "main.h"
////±‡≥Ã÷Æ√¿ p129


vector<int> majorityElementII(vector<int>& nums)
{
	vector<int> numsbak(nums);
	vector<int> res;
	int i1,i2,i3;
	for(i1=0;i1<(int)nums.size()-2;)
	{
		if(nums.size()<3)break;

		for(i2=i1+1;i2<(int)nums.size()-1;i2++)
		{
			if(nums[i1]!=nums[i2])
				break;
		}
		for(i3=i2+1;i3<(int)nums.size();i3++)
		{
			if(nums[i1]!=nums[i3]&&nums[i2]!=nums[i3])
				break;
		}
		if(i3==nums.size())break;

		nums.erase(nums.begin()+i3);
		nums.erase(nums.begin()+i2);
		nums.erase(nums.begin()+i1);
		i1=0;
	}
	res.empty();
	if (nums.size()==0)
	{
		return nums;
	}
	res.push_back(nums[0]);
	for(int i=0;i<(int)nums.size();i++)
	{
		if(res[0]!=nums[i])
		{
			res.push_back(nums[i]);
			break;
		}
	}

	for(int i=(int)res.size()-1;i>=0;i--)
	{
		int sums=0;
		for(int j=0;j<(int)numsbak.size();j++)
		{
			if(res[i]==numsbak[j])
				sums++;
		}
		if(sums<=(int)numsbak.size()/3)
			res.erase(res.begin()+i);
	}
	return res;

}