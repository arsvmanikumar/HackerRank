#include <stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}

int main() {
	int N;
    int sum_counter=0;
    int counter=1;
    int prev=0,no,i=0;
    int arr[100000];
    int fre[100000];
    scanf("%d",&N);
	while(i<N)
	{
		scanf("%d",&arr[i++]);
	}
	
	i=1;
	fre[0]=1;

    while(i<N)
    {
          
            if(arr[i]>arr[i-1])
            {
                    ++counter;
                    
            }
            else
            {    
               
                    counter=1;
            }
			
			fre[i]=counter;i++;
	
    }

	i=N-1;
	while(i>0)
	{
		if(arr[i-1] > arr[i])
		{
			fre[i-1]=max(fre[i]+1,fre[i-1]);
		}
		i--;
	}
	i=0;
	while(i<N)
	{
		sum_counter+=fre[i++];
	}
	printf("%d\n",sum_counter);


}
        