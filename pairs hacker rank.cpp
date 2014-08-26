// pairs hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>

int pairs(int a_size, unsigned long long *arr, int k) {
    
   unsigned long long ans=0;
    
   for(int i=0,j=1;j<a_size;)
   {
       if(*(arr+j)-*(arr+i)==k)
       {
            ans++;
            i++;
       }
       else if(*(arr+j)-*(arr+i)<k)
       {
            j++;    
       }
       else
           i++;
       
   }
    
   return ans;
}

void inserion_sort(unsigned long long arr[],int size)
{
    unsigned long long temp;
     int i=1,j;
    while(i<size)
    {
        temp=arr[i]; 
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j--];
        }
        arr[j+1]=temp;
        i++;
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
	  unsigned long long res;
   
    int _a_size,_a_i,_k;
    scanf("%d %d", &_a_size,&_k);
    unsigned long long *_a=(unsigned long long *)malloc(sizeof(unsigned long long)*_a_size);
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        unsigned long long _a_item;
        scanf("%llu", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    inserion_sort(_a,_a_size);
    res=pairs(_a_size,_a,_k);

   printf("%llu\n",res);    
    return 0;
}

