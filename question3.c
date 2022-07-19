#include<stdio.h>
#include<conio.h>

int main(){
    int lines;
    printf("Enter number of lines to print:- ");
    scanf("%d",&lines);
    while (lines>=1)
    {
        printf("\n%d",lines);
        lines--;
    }
    getch();
}