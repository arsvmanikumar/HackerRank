// Filling Jars Hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
    int m;
    unsigned long long n,a,b,k;
    unsigned long long answer=0,ans_interval=0;
  
    scanf("%llu %d", &n,&m);
    while ( m-- )
    {
        scanf("%llu%llu%llu",&a,&b,&k);
        ans_interval+= (b-a)>0 ? (b-a+1)*k :((a-b)+1)*k;
        answer+=(ans_interval/n);
        ans_interval=ans_interval%n;  
    }
    printf("%llud\n",answer);
    return 0;
}