#include<stdio.h>
int main()
{
    int a;
    printf("Enter Any Number:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("omio\n");
        break;
    case 2:
        printf("ohona");
        break;
    case 3:
        printf("ruhi");
        break;
    case 4:
        printf("jawad");
        break;
    default:
        printf("unknown person");
    }
    return 0;
}

