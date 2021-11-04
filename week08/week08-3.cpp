///計算n是否為質數

#include <stdio.h>
int main()
{
    int n,bad=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){ ///只判斷能否整除2~n-1,因為質數能除自己和1
        if(n%i==0) bad++;
    }
    if (bad==0) printf("%d是質數",n);
    else printf("%d不是質數",n);
}
