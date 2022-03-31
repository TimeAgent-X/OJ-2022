#include<stdio.h>
#define N 100000
int main()
{
	int a[N],b[N],i;
	for(i=0;i<N;i++)
		a[i]=b[i]=i+1;
	int temp;
	while(~scanf("%d",&temp))
	{
		int j=0,k,n;
		for(i=1;;i++){
			j=j+i;
			if(j>=temp)
				break;
		}
		k=i;
		n=temp-(j-i);
		if(k%2==0){
			printf("%d/%d\n",a[n-1],b[k-n]);
		}
		else{
			printf("%d/%d\n",a[k-n],b[n-1]);
		}
	}
return 0;
}

