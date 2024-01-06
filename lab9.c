/*SORU1:  Write a C program to find the largest of three numbers A, B, and C given
from keyboard.*/

/*
#include<stdio.h>
int main()
{

    int a,b,c;
    printf ("bir sayi giriniz:");
    scanf ("%d" ,&a);

    printf ("bir sayi giriniz:");
    scanf ("%d" ,&b);
    
    printf ("bir sayi giriniz:");
    scanf ("%d",&c);

    if (a>b)
    {
      if (a>c)
        printf ("en buyuk sayi a: %d", a);

       else
        printf ("en buyuk sayi c: %d",c);
    }
     else
     {
      if (b>c)
        printf ("en buyuk sayi b: %d",b);

       else
        printf ("en buyuk sayi c: %d",c);
     }
}
*/
/*burda eşit olma durumunu ele almadin sor*/



/* SORU2: Write a C program for computing factorial N (N!). */
/*
#include<stdio.h>
int main ()
{
  int n,F,x;
  printf ("bi sayi giriniz:");
  scanf ("%d",&n);
  x=1;
  F=1;
  while (x<=n)
  {
    F=(x*F);
    x++;
  }
  printf ("%d", F);
}
*/

/* SORU3: Write a C program which generates even numbers between 1000 and 2000
and then prints them.*/

/*
#include<stdio.h>
int main()
{
  int x,top;
  x=1000;
  top=0;
  while (x<=2000)
{
  if (x%2==0)
  {
    printf("%d\n",x);
    top=(x+top);
    x++;
  }
  else
  x++;

  
}

printf("%d\n", top);
}
*/



/*SORU4: Write a C program to check whether a given number from keyboard is
Palindrome number or not.*/





/*SORU5: 5) Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
  float x,ts,sum,total,y,F;
  total=0;
  printf ("x değerini giriniz:");
  scanf ("%f", &x);

  printf ("terim sayisini giriniz:");
  scanf ("%f", &ts);
  ts--;

  while(ts!=0)
  {
    y=1;
    F=1;
    while(y<=ts)
    {
    F=(y*F);
    y++;
    }

    sum=(pow(x,ts)/F);
    total=(total+sum);
    ts--;
  }
  total=(1+total);
  printf ("total:%.2f", total);
}
*/