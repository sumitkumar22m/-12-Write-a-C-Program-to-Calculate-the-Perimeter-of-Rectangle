#include<stdio.h>
#include<conio.h>
void main()
{
    int length,breadth,perimeter;
    printf("\t\tFind the Perimeter of the Rectangle\n");
    scanf("%d%d",&length,&breadth);
    perimeter=2*(length+breadth);
    printf("Perimeter of Rectangle = %d",perimeter);
    getch();
}
