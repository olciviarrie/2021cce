///�z�l�k
///�@�}�l�j�a���ƭȳ��O0,�O���ƪ��令1�M��R��
#include <stdio.h>
int a[10000000]={0,0,0,0};///�S���g��,���|��0
                    ///�~���ŧi���ܼ�,�i�H����h�O�ЪŶ�
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++){
        if(a[i]==0){
            ans++;///printf("%d ",i);

            ///�u�di�ѤU(i������)�����R��
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans:%d",ans);
}
