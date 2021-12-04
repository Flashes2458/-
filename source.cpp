#include <iostream>
#include <string.h>
using namespace std;

bool Judge(char *str){
	int len=strlen(str);
	cout<<len<<endl;
	for(int i=0;i<len/2;++i)
	  if(*(str+i)!=*(str+len-i-1))
		return false;
	return true;
}
	
int main()
{
 
   char a[]="abbcbbaa";
   cout << Judge(a);
   return 0;
}
