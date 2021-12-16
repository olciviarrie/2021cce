///¯x°}Âà¸m
#include <stdio.h>
int a[100][100],b[100][100];
int main()
{
	int n;
	printf("\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
}
