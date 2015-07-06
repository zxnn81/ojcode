#include "main.h"



/*double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
double res=0;



if(nums1.size()==0&&nums2.size()%2==0)
{
return ((double)(nums2.at(nums2.size()/2-1))+(double)(nums2.at(nums2.size()/2)))/2;
}
if(nums1.size()==0&&nums2.size()%2==1)
{
return(nums2.at(nums2.size()/2));
}
if(nums2.size()==0&&nums1.size()%2==0)
{
return ((double)(nums1.at(nums1.size()/2-1))+(double)(nums1.at(nums1.size()/2)))/2;
}
if(nums2.size()==0&&nums1.size()%2==1)
{
return(nums1.at(nums1.size()/2));
}
if(nums1.at(nums1.size()-1)<nums2.at(0))
{
std::copy(nums2.begin(), nums2.end(), std::back_inserter(nums1));
if(nums1.size()%2==0)
{
return ((double)(nums1.at(nums1.size()/2-1))+(double)(nums1.at(nums1.size()/2)))/2;
}
else
{
return(nums1.at(nums1.size()/2));
}
}
if(nums2.at(nums2.size()-1)<nums1.at(0))
{
std::copy(nums1.begin(), nums1.end(), std::back_inserter(nums2));
if(nums2.size()%2==0)
{
return ((double)(nums2.at(nums2.size()/2-1))+(double)(nums2.at(nums2.size()/2)))/2;
}
else
{
return(nums2.at(nums2.size()/2));
}
}



queue<int> que1,que2;

int mod1=nums1.size()%2;
int mod2=nums2.size()%2;
int idx1=nums1.size()/2-1+mod1;
int idx2=nums2.size()/2-1+mod2;
bool goon1=true;
bool goon2=true;
if(nums1.size()<3)goon1=false;
if(nums2.size()<3)goon2=false;
if(mod1==1)
{
que1.push(nums1.at(idx1));
}
else
{
que1.push(nums1.at(idx1));
que1.push(nums1.at(idx1+1));
}

if(mod2==1)
{
que2.push(nums2.at(idx2));
}
else
{
que2.push(nums2.at(idx2));
que2.push(nums2.at(idx2+1));
}
if(que1.back()<que2.front())
{
while(1)
{
if((goon1==false||goon2==false)||!(que1.back()<que2.front()||que1.front()>que2.back()))
{
break;
}
if(idx1+que1.size()<nums1.size())
{
que1.push(nums1.at(idx1+que1.size()));
que1.pop();
idx1++;
}
else
{
idx1++;
goon1=false;
}
if(idx2-1>=0)
{
que2.push(nums2.at(idx2-1));
que2.pop();
idx2--;
}
else
{
idx2--;
goon2=false;
}
}
}else if(que2.back()<que1.front())
{
while(1)
{
if((goon1==false||goon2==false)||!(que1.back()<que2.front()||que1.front()>que2.back()))
{
break;
}
if(idx2+que2.size()<nums2.size())
{
que2.push(nums2.at(idx2+que2.size()));
que2.pop();
idx2++;
}
else
{
idx2++;
goon2=false;
}
if(idx1-1>=0)
{
que1.push(nums1.at(idx1-1));
que1.pop();
idx1--;
}
else
{
idx1--;
goon1=false;
}
}
}
if(que1.size()+que2.size()==2)return ((double)que1.front()+(double)que2.front())/2;
if(que1.size()+que2.size()==3)
{
int buf[3];
int idx=0;
while(que1.size()!=0)
{
buf[idx]=que1.front();
que1.pop();
idx++;
}
while(que2.size()!=0)
{
buf[idx]=que2.front();
que2.pop();
idx++;
}
for (int n=0;n<3;n++)
{
for(int m=n+1;m<3;m++)
{
int tmp=buf[n];
if(buf[n]>buf[m])
{
buf[n]=buf[m];
buf[m]=tmp;
}
}
}
return buf[1];
}
if(que1.size()+que2.size()==4)
{
int buf[4];
int idx=0;
while(que1.size()!=0)
{
buf[idx]=que1.front();
que1.pop();
idx++;
}
while(que2.size()!=0)
{
buf[idx]=que2.front();
que2.pop();
idx++;
}
for (int n=0;n<4;n++)
{
for(int m=n+1;m<4;m++)
{
int tmp=buf[n];
if(buf[n]>buf[m])
{
buf[n]=buf[m];
buf[m]=tmp;
}
}
}
return ((double)buf[1]+(double)buf[2])/2;
}
}*/

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	int idx=0;
	int idx1=0,idx2=0;
	int m1,m2;
	while(1)
	{
		if((idx1<nums1.size()?nums1.at(idx1):nums2.at(idx2)+1)<=(idx2<nums2.size()?nums2.at(idx2):nums1.at(idx1)+1))
		{
			if((nums1.size()+nums2.size())%2==0)
			{
				if(idx==(nums1.size()+nums2.size())/2-1)
					m1=idx1<nums1.size()?nums1.at(idx1):nums2.at(idx2);
			}
			if(idx==(nums1.size()+nums2.size())/2)
			{
				m2=idx1<nums1.size()?nums1.at(idx1):nums2.at(idx2);
				break;
			}
			idx1++;
			idx++;
		}else
		{
			if((nums1.size()+nums2.size())%2==0)
			{
				if(idx==(nums1.size()+nums2.size())/2-1)
					m1=idx2<nums2.size()?nums2.at(idx2):nums1.at(idx1);
			}
			if(idx==(nums1.size()+nums2.size())/2)
			{
				m2=idx2<nums2.size()?nums2.at(idx2):nums1.at(idx1);
				break;
			}
			idx2++;
			idx++;
		}
	}
	if((nums1.size()+nums2.size())%2==0)
	{
		return ((double)m1+(double)m2)/2;
	}
	else
	{
		return m2;
	}
}