#include<stdio.h>
#include<math.h>
int main()
{
	int n;
scanf("%d",&n);
	while(n--)
	{
		int a,b,c,d,e,i=0,temp=0,num;
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		for(i=a;i<d;i++)
		{
			switch(i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: 
					temp =temp + 31; break;
				case 2: 
					temp =temp + 28; break;
				case 4:
				case 6:
				case 9:
				case 11: 
				 	temp =temp + 30; break;
			}
		}
		temp=temp - b + e;

	num = c*pow(2,temp);
	printf("%d\n",num);
	}
	return 0;
}
