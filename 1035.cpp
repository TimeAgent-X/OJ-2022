// P1021	��������
// WSXNH ���ύ����ֹ���� 
//������ 
#include<stdio.h>
int main()
{
	int m,n,a,b;
	while(~scanf("%d%d",&m,&n))
	{
	b=(n-2*m)/2;
	a=m-b;
	if(b<0||a<0)
	printf("-1 -1\n");
	else
	printf("%d %d\n",a,b);
	}
	return 0;
}
