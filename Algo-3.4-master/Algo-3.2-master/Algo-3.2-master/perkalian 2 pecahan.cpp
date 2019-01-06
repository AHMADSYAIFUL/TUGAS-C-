#include <stdio.h>
#include <conio.h>

int main()
{
    float p1,p2,hasil;
    printf("perkalian 2 pecahan\ ");
    p1=2.0/3.0;
    p2=3.0/4.0;
    hasil=p1*p2;
    printf("%.2f%*%.2f=%.2f",p1,p2,hasil);
    getch();
}
