#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    printf("Enter number: ");
    scanf("%d",&i);
    i*=2;
    while (i>=1)
    {
        printf("\n%d",i-1);
        i-=2;
    }
    getch();
    
}