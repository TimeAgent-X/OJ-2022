#include<stdio.h>
int fun(int m, int n)
	{
		if(m==0 || m==1 || n==1)
			return 1;
		if(m<n)
			return fun(m,m); 
		return fun(m,n-1) /*������һ������*/ + fun(m-n,n); //û�п��� 
	}
	
int main()
	{
		int m,n;
		while(~scanf("%d%d",&m,&n))
			printf("%d\n",fun(m,n));
		return 0;
	}
