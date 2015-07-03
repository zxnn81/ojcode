#include "main.h"

int calculate(string s) 
{

	char buf[1024];
	vector<string> equ;
	string tmp;
	for (int i=0;i<s.size();i++)
	{
		if(s.at(i)==' ')continue;
		string charbuf;
		charbuf.push_back(s.at(i));
		if(s.at(i)=='+'||s.at(i)=='-'||s.at(i)=='*'||s.at(i)=='/')
		{
			equ.push_back(tmp);
			equ.push_back(charbuf);
			tmp.clear();
		}else
		{
			tmp.push_back(s.at(i));
		}
	}
	equ.push_back(tmp);

	vector<string>::iterator idx=equ.begin();
	while(idx!=equ.end())
	{
		if(equ.at(idx)=="*")
		{
			itoa(atoi(equ.at(idx-1).c_str())*atoi(equ.at(idx+1).c_str()),buf,10);
			equ.at(idx)=string(buf);
			continue;
		}
		idx++;
	}
	idx=equ.begin();
	while(idx!=equ.end())
	{
		if(equ.at(idx)=="/")
		{
			itoa(atoi(equ.at(idx-1).c_str())/atoi(equ.at(idx+1).c_str()),buf,10);
			equ.at(idx)=string(buf);
			continue;
		}
		idx++;
	}
	idx=equ.begin();
	while(idx!=equ.end())
	{
		if(equ.at(idx)=="+")
		{
			itoa(atoi(equ.at(idx-1).c_str())+atoi(equ.at(idx+1).c_str()),buf,10);
			equ.at(idx)=string(buf);
			continue;
		}
		idx++;
	}
	idx=equ.begin();
	while(idx!=equ.end())
	{
		if(equ.at(idx)=="-")
		{
			itoa(atoi(equ.at(idx-1).c_str())-atoi(equ.at(idx+1).c_str()),buf,10);
			equ.at(idx)=string(buf);
			continue;
		}
		idx++;
	}

	return 0;
}