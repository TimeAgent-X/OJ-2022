//P1034	�ַ�����ѭ����λ
// WSXNH ���ύ����ֹ���� 
#include<stdio.h>
#define N 100
int main()
{
	int k;
	scanf("%d",&k);
	char a[N];
	int i,temp;
	scanf("%s",&a);
	for(i=0;i<100;i++)
	if(a[i]=='\0')
		break;
	temp=i;
	for(i=k;i<temp;i++)
	printf("%c",a[i]);
	for(i=0;i<k;i++)
	printf("%c",a[i]);
	return 0;
}
// @ WSXNH 
