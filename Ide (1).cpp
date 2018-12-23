#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
	char a[20],b[20];
	int len,count=-1,co=0,q,w,e;
	getline(cin,text);
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
	
	cout<<text<<"\n"<<len<<"\n"<<count<<"\n"<<co<<"\n"<<q<<"\n"<<w;
	return 0;
}
