#include <stdio.h>
void main()
{
    int a,b, i, t1, t2, rm,n=0,r=0;
    clrscr();

    printf("\n Enter two numbers(intervals): ");
    scanf("%d %d",&a,&b);
    printf("\n Armstrong numbers between %d an %d are: ", a, b);
    for(i=a+1;i<b;++i)
    {
        t2 = i;
        t1 = i;
        while (t1 != 0)
        {
            t1 /= 10;
            ++n;
        }
        while (t2 != 0)
        {
            rm = t2 % 10;
            r += pow(rm,n);
            t2 /= 10;
        }
        if (r == i) {
            printf(\n"%d", i);
        }
        n = 0;r=0;
        getch();
    }
