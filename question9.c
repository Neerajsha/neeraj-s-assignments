#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,lines;
    printf("Enter number of cubes:- ");
    scanf("%d",&lines);
    while (i<=lines)
    {
        printf("\n%d",i*i*i);
        i++;
    }
    getch();
}