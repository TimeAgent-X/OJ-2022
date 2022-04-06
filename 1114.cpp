#include<stdio.h>
int main()
{
	int n, a[100][100], i, j, s, dir;
	const int next[4][2] = { {1,0},{0,-1},{-1,0},{0,1} },
		turn[4] = {1,2,3,0};
	while(~scanf("%d",&n))
	{
		for(i=0;i<n+2;i++)
			a[0][i] = a[n+1][i] = a[i][0] = a[i][n+1] = 1; //围墙
		for(i=1; i<=n; i++)
			for(j=1; j<=n; j++)
				a[i][j] = 0; //碰壁 
		//赋值  
		i=1; 
		j=n;
		dir=0;
		for(s=1; s<=n*n; s++)
		{
			a[i][j] = s;
			if ( a[ i+next[dir][0] ] [ j+next[dir][1] ] ) // 检测下一位  
				dir = turn[dir];
				
			i = i + next[dir][0]; // 转换赋值 
			j = j + next[dir][1];
		}
		
		//输出方阵 
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=n; j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
