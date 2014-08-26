// is Fibinocci Hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int isFibo(unsigned long long int  num)
    {
    	if(num==0 || num==1)
    		return 1==1; 
   		unsigned long long a=0,b=1,c;
   		while(b<num)
   		{
   			c=a+b;
   			a=b;	
   			b=c;
   			if(c==num)
   				return 1==1;
   			printf("%u \n",c);
   		}
  		return 1==2;
       }

int _tmain(int argc, _TCHAR* argv[])
{
    int no_test_cases,iterator=0;
    unsigned long long num=7778742049;
    	//	printf("%d",isFibo(7778742049));
          printf("%llu",num);    return 0;


}
