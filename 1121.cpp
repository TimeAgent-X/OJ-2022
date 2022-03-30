#include <stdio.h>
#include <string.h>
int main()
{
	char a[201], b[201];
	while ( ~ scanf ("%s%s",&a,&b) )
	{
		int la, lb, i=0, temp=0, c[201]; 
		la = strlen(a);
		lb = strlen(b);
		
		for(i=0;i<la;i++)
		{
			if(i<lb)
				{
					if(  a[la-i-1] >=  b[lb-i-1])
						{
						temp = a[la-i-1] - b[lb-i-1] ;
						c[i] = temp;	
						}
					else
						{
						temp= a[la-i-1] - b[lb-i-1] + 10 ;
						a[la-i-1-1] = a[la-i-1-1]-1;
						c[i] = temp;
						}
				}	
			if(i>=lb)
				{
				temp= a[la-i-1] - '0';
				c[i] = temp;	
				}
		} 
		//Êä³ö 
		for ( i; c[i]==0&&i>0; i-- ); 
		//Ö»Ñ­»· £¬·âºÅ  
		
		for ( i; i>=0; i-- )
			printf ("%d", c[i] );
			printf ("\n");
	}
	return 0;
}
