#include<stdio.h>
int main(){
int num,i,j,result;
printf("enter any number:\n");
scanf("%d",&num);
for(i=1;i<=10;i++)
    {
    for(j=1;j<=10;j++){
        result=i*j;
 printf("%d*%d=%d\n",i,j,result);
        }
}
return 0;





}
