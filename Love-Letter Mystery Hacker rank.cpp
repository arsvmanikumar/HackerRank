// Love-Letter Mystery Hacker rank.cpp : Defines the entry point for the console application.
//
/*
James got hold of a love letter that his friend Harry has written for his girlfriend. Being the prankster that James is, he decides to meddle with it. He changes all the words in the letter into palindromes.

While modifying the letters of the word, he follows 2 rules:

(a) He always reduces the value of a letter, e.g. he changes 'd' to 'c', but he does not change 'c' to 'd'. 
(b) If he has to repeatedly reduce the value of a letter, he can do it until the letter becomes 'a'. Once a letter has been changed to 'a', it can no longer be changed.

Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations he carries out to convert a given string into a palindrome. 


Input Format 
The first line contains an integer T, i.e., the number of test cases. 
The next T lines will contain a string each.

Output Format 
A single line containing the number of minimum operations corresponding to each test case.

Constraints 
1 ≤ T ≤ 10
1 ≤ length of string ≤ 104 
All characters are lower cased english letters.

Sample Input #00

3
abc
abcba
abcd
Sample Output #00

2
0
4
Explanation

For the first test case, ab*c* -> ab*b* -> ab*a*. 
For the second test case, abcba is a palindromic string. 
For the third test case, abc*d* -> abc*c* -> abc*b* -> abc*a* = ab*c*a -> ab*b*a.


*/
#include "stdafx.h"
	int length_of_string(char *arr)
	{
		int count=0;
		while(*arr!=0)
		{
			arr=arr+1;
			count++;
		}
		return count;
	}`


int ispalindromeCheck(char *arr,int length)
{
	int count=0,diff;
	int i=0,j=length-1;
	while(i<j)
	{
		diff=*(arr+j)-*(arr+i);
		if(diff< 0)
			diff=diff*-1;
		count+=diff;
		i++;
		j--;
	}
	return count;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char arr[1000];
	scanf("%s",arr);
	int length_arr=length_of_string(arr);
		printf("%d",ispalindromeCheck(arr,length_arr));
	return 0;
}

