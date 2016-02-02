#include<stdio.h>
int main()
{
    float n,m,a;
    printf("enter x \n");
    scanf("%f",&n);
    m=n;
    do
    {
        a=m;
        m=((m+(n/m))/2);
    }
    while((a-m)>(0.00001));
    printf("square root is %f \n",m);
    return 0;
} 
