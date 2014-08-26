// sherlock_and_array hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>


int _tmain(int argc, _TCHAR* argv[])
{
int t, n;
    int *arr=0;
    int total=0,left;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%",&n);
        arr=(int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++)
        {
             scanf("%d",(arr+i));
            total+=*(arr+i);
        }
        left=*arr;
        int j;
        for(j=1;j<n-1;j++)
        {
            if(arr[j]==left && arr[j]==(total-arr[j]-left))
            {
                printf("YES\n");
                break;
            }
            left+=arr[j];
        }
		total=0;
		free(arr);
        if(j==n-1)
            printf("NO\n");
    }
    return 0;
}

