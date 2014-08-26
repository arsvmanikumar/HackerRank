// Sherlock and GCD hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int gcd_euclid(int m,int n)
{
 int tmp;
	
			while(n>0)
			{
			tmp=n;
            n = m % n;
            m = tmp;
			}
	return m;
}




int sherlock_gcd(int arr[],int len)
{
	int res=0;
	for(int i=0;i<len;i++)
		res=gcd_euclid(res,arr[i]);
	return res;

}
int _tmain(int argc, _TCHAR* argv[])
{
      int t, n;
    int answer;
	int arr[100]={0};
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		answer=sherlock_gcd(arr,n);
		
		if(answer==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
    }
    return 0;

}

