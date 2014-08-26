// cut the tree  hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
using namespace std;

struct node
{
	int no;
	bool is_visited;
	int sum_value;
};

int  dfs(node arr[],vector<int> q[],int root)
{
	if(arr[root].is_visited==true)
	{
		return 0;
	}
	if(q[root].size()==1)
	{
		arr[root].sum_value=arr[root].no;
		arr[root].is_visited=true;
		return arr[root].sum_value;
	}
	else
	{
		vector<int>::iterator i;
		arr[root].is_visited=true;
		int c=arr[root].no;
		for(i=q[root].begin();i!=q[root].end();i++)
		{
			int k=(*i);
			c+=dfs(arr,q,k);
		}
		arr[root].sum_value=c;
		return c;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n,iterator=0,e_1,e_2,sum=0,root=-1;
	node arr[10000];

	scanf("%d",&n);
//	arr=(node *)malloc(sizeof(node)*n);
	std::vector<int> q[10000];
	while(iterator<n)
	{
		scanf("%d",arr[iterator].no);
		sum+=arr[iterator].no;
		arr[iterator].is_visited=false;
		arr[iterator].sum_value=0;
		iterator++;
	}
	iterator=0;
	while(iterator<n-1)
	{
		scanf("%d%d",&e_1,&e_2);
		q[e_1].push_back(e_2);
		q[e_2].push_back(e_1);
		iterator++;
	}
	for(int i=0;i<n;i++)
	{
		if(q[i].size()>1)
		{
			root=i;
			break;
		}
	}


	int s=dfs(arr,q,n);
	int min=arr[0].sum_value;
	iterator=0;
	while(iterator<n)
	{
		arr[iterator].sum_value=sum-arr[iterator].sum_value>0 ? sum-arr[iterator].sum_value:arr[iterator].sum_value;
		if(min>arr[iterator].sum_value)
			min=arr[iterator].sum_value;
		iterator++;
	}
	printf("%d",arr[iterator].sum_value);
	return 0;
}

