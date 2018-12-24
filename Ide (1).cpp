#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
	char a[20],b[20];
	int len,count=-1,co=0,q,w,e,enlen=0,t;
	getline(cin,text);
	cin>>enlen;
	len = text.length();

	for(int x=0;x<=len;x++)
	{
	    
	    
	    if(islower(text[x])==0)
	     {count++;}
	     else
	     {co++;}
	    
	}
	if(count>0)
	{q=(len/count);}
	else
	{q=0;}
	
	if(co>0)
	{w=(len/co);}
	else
	{w=0;}
	
	e=q+w;
	
	for(int x=0;x<=len;x++)
	{
	    for(int m=1;m<=e;m++)
	    {text[x]++;
	    }
	    
	}
	for(int t=0;t<=len;t++)
	{
	    for(int n=1;n<=e;n++)
	    {text[t]++;
	    }
	    
	}
	t=e+enlen;
	for(int k=0;k<=len;k++)
	{
	    for(int p=1;p<=t;p++)
	    {text[k]++;
	    }
	    
	}
	
	cout<<text<<"\n"<<len<<"\n"<<count<<"\n"<<co<<"\n"<<q<<"\n"<<w;
	return 0;
}
