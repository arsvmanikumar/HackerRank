// Manasa and Stones hacker rank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<set>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        long long a,b,n,i;
        long long int c,d;
        set <int> x;
        cin>>n>>c>>d;
       
        a = min(c,d);
        b = max(c,d);
        n--;
        for(i=0 ; i<= n ; i++)
        {
            x.insert(i*b+(n-i)*a);
        }
        for(auto it = x.begin(); it != x.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}


