#include<stdio.h>
int main()
{

    int a,b,sum,minus;

printf("Enter two numbers:");

    scanf("%d%d",&a,&b);

    switch(a,b,sum,minus)
    {
    case 1:

        sum=a+b;

        printf("sum=%d\n",a+b);

     break;
    case 2:
        minus=a-b;

        printf("minus=&d\n",a-b);
  break;
    default:
        printf("Nothing");

        return 0;
    }


















}
