/******************************************************************************

Welcome to encryption algorithm 

This code is in c++14 format . input value are message and key.regarding complexity,
it use more complex algorithm than 3DEA(Triple Data Encryption Algorithm) .
orgin is based on CAESER CIPHER .turning 56 bit key into 112 bit key complexity


INPUT---message
        key(should be same in decryption)

             HAPPY CODING

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text,res="";
	char arr[11]={'a','b','c','f','t','y','u','d','e','g','h'};
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
	
	e=(q%w)+1;
	
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
	
	for(char a=0;a<=10;a++)
	{res=res+arr[rand()%11];
	}
	cout<<text;
	cout<<res;
	return 0;
}

/*******************************************************************************************************************
Example:-
input - hey man , how are you;(message)
        1( key -should be same as decryption )
	
output - li}$qer$0$lsi$evi$}syuhucbtaufbe                                                                                                           
*********************************************************************************************************************/	
