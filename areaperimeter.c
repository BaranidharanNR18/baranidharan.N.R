#include<stdio.h>
int main()
{
    int a,p,l,w;
    printf("Length:");
    scanf("%d",&l);
    printf("Width:");
    scanf("%d",&w);
    a=l*w;
    p=2*(l+w);
    printf("Area:%d",a);
    printf("\nPerimeter:%d",p);
    return 0;
}
