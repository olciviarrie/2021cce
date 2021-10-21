
#include <stdio.h>
int main()
{
	int a,b,c;
	int temp;
	scanf("%d %d %d",&a,&b,&c);
	if (a<b){temp=a; a=b; b=temp;}
	if (a<c){temp=a; c=a; a=temp;}
	if (b<c){temp=b; b=c; c=temp;}

	if (b+c>a && (b*b+c*c)==a*a) printf("ª½¨¤");
	else if (b+c>a && (b*b+c*c)>a*a) printf("¾U¨¤");
	else if (b+c>a && (b*b+c*c)<a*a) printf("¶w¨¤");
	else printf("Error");
}
