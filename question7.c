#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    printf("Enter number of lines: ");
    scanf("%d",&i);
    i*=2;
    while (i>=1)
    {
        printf("\n%d",i);
        i-=2;
    }
    getch();
}