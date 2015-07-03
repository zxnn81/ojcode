#include "main.h"

/*int calculate(string s) 
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

	int idx=0;
	while(idx<equ.size())
	{
		if(equ.at(idx)=="*")
		{
			sprintf(buf,"%d",atoi(equ.at(idx-1).c_str())*atoi(equ.at(idx+1).c_str()));
			equ.at(idx)=string(buf);	
			equ.erase(equ.begin()+idx+1);
			equ.erase(equ.begin()+idx-1);
			continue;
		}
		idx++;
	}
	idx=0;
	while(idx<equ.size())
	{
		if(equ.at(idx)=="/")
		{
			sprintf(buf,"%d",atoi(equ.at(idx-1).c_str())/atoi(equ.at(idx+1).c_str()));
			equ.at(idx)=string(buf);	
			equ.erase(equ.begin()+idx+1);
			equ.erase(equ.begin()+idx-1);
			continue;
		}
		idx++;
	}
	idx=0;
	while(idx<equ.size())
	{
		if(equ.at(idx)=="+")
		{
			sprintf(buf,"%d",atoi(equ.at(idx-1).c_str())+atoi(equ.at(idx+1).c_str()));
			equ.at(idx)=string(buf);	
			equ.erase(equ.begin()+idx+1);
			equ.erase(equ.begin()+idx-1);
			continue;
		}
		idx++;
	}
	idx=0;
	while(idx<equ.size())
	{
		if(equ.at(idx)=="-")
		{
			sprintf(buf,"%d",atoi(equ.at(idx-1).c_str())-atoi(equ.at(idx+1).c_str()));
			equ.at(idx)=string(buf);	
			equ.erase(equ.begin()+idx+1);
			equ.erase(equ.begin()+idx-1);
			continue;
		}
		idx++;
	}

	return atoi(equ[0].c_str());
}*/


int calculate(string s)
{
	stack<int> equ1;
	stack<int> equ2;
	int numtmp=0;
	for(int i=0;i<s.size();i++)
	{
		if(s.at(i)==' ')continue;
		if(s.at(i)=='+'||s.at(i)=='-'||s.at(i)=='*'||s.at(i)=='/')
		{
			equ2.push(numtmp);
			equ2.push(-(int)(s.at((i))));
			numtmp=0;
			continue;
		}
		numtmp=numtmp*10+(int)(s.at(i)-'0');
	}
	equ2.push(numtmp);
	if(equ2.size()<3)
		return equ2.top();
	while(!equ2.empty())
	{
		equ1.push(equ2.top());
		equ2.pop();
	}

	while(equ1.size()>2)
	{
		int a,b,c,d;
		a=equ1.top();
		equ1.pop();
		b=equ1.top();
		equ1.pop();
		c=equ1.top();
		equ1.pop();
		if(b==-(int)'*'||b==-(int)'/')
		{
			d=b==-(int)'*'?a*c:a/c;	
			equ1.push(d);
		}else
		{
			equ1.push(c);
			equ2.push(a);
			equ2.push(b);
		}
	}
	if (equ1.size()>1)
	{
		equ2.push(equ1.top());
		equ1.pop();
	}
	equ2.push(equ1.top());



	while(!equ2.empty())
	{
		equ1.push(equ2.top());
		equ2.pop();
	}

	while(equ1.size()>2)
	{
		int a,b,c,d;
		a=equ1.top();
		equ1.pop();
		b=equ1.top();
		equ1.pop();
		c=equ1.top();
		equ1.pop();
	
		d=b==-(int)'+'?a+c:a-c;	
		equ1.push(d);
	}




	return equ1.top();
}

