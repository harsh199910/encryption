#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
	char a[20],b[20];
	int len,count=-1,co=0;
	getline(cin,text);
	len = text.length();

	for(int x=0;x<=len;x++)
	{
	    
	    text[x]++;
	    if(islower(text[x])==0)
	     {count++;}
	     else
	     {co++;}
	    
	}
	cout<<text<<"\n"<<count<<"\n"<<co;
	return 0;
}
