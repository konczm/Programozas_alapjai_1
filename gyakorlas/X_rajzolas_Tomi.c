#include <stdio.h>
#include <math.h>


/*Tomi megoldása*/
int main(void)
{
int a, i, kat, row, col;
printf("A négyzetnek az oldala: ");
scanf("%d", &a);
printf("Kategória (1,2,3): ");
scanf("%d", &kat);
printf("\n");

if (kat==1)                               //teli négyzet
{
 for (row=1; row<=a; row=row+1) {
        for(col=1; col<=a; col=col+1)
        {
        printf("X");
        }
        printf ("\n");
    }
}
else if (kat ==2)                          //négyzet
{
 for (row=1; row<=a; row=row+1) 
 {
     if(row==1 || row==a)
     {
        for(col=1; col<=a; col=col+1)
        {
            printf("X");
        }
        printf ("\n");
     }
    else 
    {
        for(col=1; col<=a; col=col+1)
        {
        if(col==1 || col==a)
        {
            printf("X");
        }
        else
        {
            printf(" ");
        }
        }
        printf ("\n");
    }
    }

 }
 else if (kat==3)                              //X
 {
    if(a%2==0)
    {
        a=a+1;
        for (row=1; row<=a/2; row=row+1) 
        {
            for(col=1; col<=a; col=col+1)
            {
            if(col==row || col== a-row)
                {
                printf("x");
                }
            else
            {
                printf(" ");
            }
            
            }
        printf ("\n");
        }

for (row=1; row<=a/2; row=row+1) 
        {
            for(col=1; col<=a; col=col+1)
            {
            if( col==row+(a/2) || col==a-row-(a/2) )
                {
                printf("x");
                }
            else
            {
                printf(" ");
            }
            
            }
        printf ("\n");
        }

      }
      else
      {
          /* páraltan */
          a=a+1;
          for (row=1; row<=a/2; row=row+1) 
        {
            for(col=1; col<=a; col=col+1)
            {
            if(col==row || col== a-row)
                {
                printf("x");
                }
            else
            {
                printf(" ");
            }
            
            }
        printf ("\n");
        }

for (row=1; row<a/2; row=row+1) 
        {
            for(col=1; col<=a; col=col+1)
            {
            if( col==row+(a/2) || col==a-row-(a/2) )
                {
                printf("x");
                }
            else
            {
                printf(" ");
            }
            
            }
        printf ("\n");
        }




      }
 }
 else
 {
     printf("Ilyen kategória nincsen!");
 }
 

return 0;
}