#include<stdio.h>
#include<conio.h>
int main(){
    int n,i=1,range;
    printf("Enter a number of table:- ");
    scanf("%d",&n);
    printf("Enter number of range:- ");
    scanf("%d",&range);
    while (i<=range)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
    }
    getch();
}