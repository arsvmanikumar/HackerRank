// Insertion Sort Advanced Analysis hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>

int merge(int arr[],int left_start,int right_start,int right_end)
{
    int *aux=(int *)malloc(sizeof(int)*(right_end-left_start+1));
    int left_end=right_start-1;
    int count=0;
    int no_of_inversions=0;
    int lhs=left_start;
    while(left_end >=left_start &&right_start<=right_end)
    {
        if(arr[left_start]<=arr[right_start])
        {
            aux[count++]=arr[left_start++];
             
        }
        else
        {
            aux[count++]=arr[right_start++];
            no_of_inversions+=left_end-left_start+1;
        }
    }
    
    while(left_end >=left_start)
    {
        aux[count++]=arr[left_start++];
    }
    while(right_start<=right_end)
    {
          aux[count++]=arr[right_start++];
    }
    
    for(int i=0;i<count;i++)
    {
        arr[lhs+i]=aux[i];    
    }
    free(aux);
    return no_of_inversions;
}


int merge_sort(int arr[],int left,int right)
{
	if(right-left <= 0)
		return 0;

    int mid=(left+right)/2;
    int l,r;
    l=merge_sort(arr,left,mid);
    r=merge_sort(arr,mid+1,right);
    return l+r+merge(arr,left,mid+1,right);
}

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int _tmain(int argc, _TCHAR* argv[])
{

int t, n, c, m;
    int answer;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d",&n);
        int *arr=(int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        answer = merge_sort(arr,0,n-1); 
       // print_array(arr,n);
        printf("%d\n",answer);
    }
    return 0;
}

