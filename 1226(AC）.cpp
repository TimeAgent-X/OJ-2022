#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[110][1100];
int min(int a,int b)
{
    if(a>b)    
       return b;
       return a ;
}
int cmp(int x,int y)
{
    char b[1000],c[1000];
    strcpy(b,a[x]);
    strcpy(c,a[y]);
    int i,n1,n2;
     char str[1000];
     n1=strlen(a[x]);
     n2=strlen(a[y]);
     //×Ö·û´®Æ´½Ó
     for(i=n1;i<=n1+n2;i++) 
         b[i]=c[i-n1];
    for(i=n2;i<n1+n2;i++)
        c[i]=b[i-n2];
        c[i]='\0';
    return strcmp(b,c);
 } 
 int main(void)
 {
     int n,i,j;
     char jiaohuan[1000];
     while(~scanf("%d",&n))
     {
         for(i=0;i<n;i++)
             scanf("%s",a[i]);
         for(i=0;i<n-1;i++)
         {
             for(j=i+1;j<n;j++)
             if(cmp(i,j)<0)
             {
                 strcpy(jiaohuan,a[i]);
                 strcpy(a[i],a[j]);
                 strcpy(a[j],jiaohuan);
             }
         }
         for(i=0;i<n;i++)
             printf("%s",a[i]);
         printf("\n");
     }
     return 0;
 }
