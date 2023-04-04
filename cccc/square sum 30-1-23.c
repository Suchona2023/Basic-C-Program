/*print the summation of square of all numbers 5 to 25.
25+36+49+.......+5495=? */

#include<stdio.h>
int main(){
int i,sum=0;
for(i=5;i<=25;i++){
sum=sum+(i*i);
}
printf("%d\n",sum);
return 0;
}
