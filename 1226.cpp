#include<stdio.h>
#include<math.h>
int num(int a)
{
	int i=0;
	do
	{
		i++;
		a=a/10;
	}
	while(a);
	return i;
}

int fun(int a,int b)
{
	int i=num(a),j=num(b);
	if( a*pow(10,j)+b < b*pow(10,i)+a )
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d",&n);

	int a[n];
	int i,temp,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if( fun(a[i], a[i+1]) )
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	} 

	return 0;
}

