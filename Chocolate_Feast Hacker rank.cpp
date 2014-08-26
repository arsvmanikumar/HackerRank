// Chocolate_Feast Hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int Chocolate_Feast(int N,int C,int M)
{
	int no_of_choc=N/C;
	int new_choc;
	int total_choc=no_of_choc,un_wrap;
	while(total_choc >=M)
	{
		new_choc=total_choc/M;
		un_wrap=no_of_choc%M;
		no_of_choc+=new_choc;
		total_choc=new_choc+un_wrap;
		
	}
	return no_of_choc;
}
int _tmain(int argc, _TCHAR* argv[])
{
    int t, n, c, m;
    int answer;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        answer = Chocolate_Feast(n,c,m); 
        printf("%d\n",answer);
    }
    return 0;
}