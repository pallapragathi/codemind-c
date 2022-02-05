#include<stdio.h>
int main()
{
    int N,x[20],odd=0,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&x[i]);
    for(i=0;i<N;i++)
    {
        if(x[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    printf("YES");
    else
    printf("NO");
    return 0;
}