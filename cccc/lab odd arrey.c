#include<stdio.h>

main(void)


{

    int mark[5];


  for( int i=1;i<=5;i++ )
  {
      scanf("%d",&mark[i]);
  }

    printf("even : ");


    for (int i = 1;i<=5;i++)
    {
        if(mark[i]%2==0)
            printf("%d\n",mark[i]);
    }

printf("\nOdd : ");

for(int i=1;i<=5;i++)
{
    if(mark[i]%2==1)

     printf("%d\n",mark[i]);

}





}
