// gem-stones hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int no_gem_stones(char *arr)
{
	int hash=0;
    while(*arr!=0)
    {
        if((hash>>(*arr-'a'+1)&1)==0)
        {
            hash=1<<(*arr-'a'+1)|hash;
        }
        arr=arr+1;
    }
    return hash;
}


int _tmain(int argc, _TCHAR* argv[])
{
	 int t;
    char arr[100];
    int hash=(1<<31)-1;
    int answer=0;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%s",&arr);
        hash&=no_gem_stones(arr); 
    }
    if(hash==0)    
    {
        printf("%d",answer);
    }
    else
    {
        for(int i=0;i<32;i++)
        {
            if(hash>>i&1==1)
                answer++;
        }
        printf("%d",answer);
    }
   
	return 0;
}

