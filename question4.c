#include<stdio.h>
#include<conio.h>

int main(){
    int i=1,lines;
    printf("Enter number of lines to print:- ");
    scanf("%d",&lines);
    while (i<=lines)
    {
        printf("\n%d",2*i-1);
        i++;
    }
    getch();   
}