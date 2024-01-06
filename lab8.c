/*SORU1:  Write C code to add two numbers entered by user.*/
/*
#include<stdio.h>
int main()
{
    int a,b,top;
    printf ("bir sayi giriniz:");
    scanf ("%d",&a);

    printf ("bir sayi giriniz:");
    scanf ("%d",&b);

    top=(a+b);
    printf ("%d", top);

    return 0;
}
*/


/*SORU2: Calculate the area of a circle with given radius.*/
/*
#include<stdio.h>
int main()
{
    float yaricap,alan;
    printf ("dairenin yaricap degerini giriniz:");
    scanf ("%f", &yaricap);

    alan=(3.14*yaricap*yaricap);
    printf("alan:%.2f", alan);

    return 0;
}
*/

/*SORU3:  Determine and Output Whether Number N is Even or Odd.*/
/*
#include<stdio.h>
int main()
{
    int n;
    printf ("bir sayi giriniz:");
    scanf ("%d", &n);
    
    if (n%2==0)
       printf("%d cift sayidir.", n);
     else
       printf("%d tek sayidir.",n);
    return 0;
}
*/

/*SORU4: Determine Whether a Temperature is Below or Above the Freezing Point.*/
/*
#include<stdio.h>
int main()
{
    int t;
    printf ("sicaklik degerini giriniz:");
    scanf ("%d", &t);

    if (t>0)
      printf ("sicaklik donma noktasinin uzerindedir");

     else
      printf ("sicaklik donma noktasinin altindadir");
}
*/


/*SORU5: Convert Temperature from Fahrenheit (℉) to Celsius (℃)*/
/*
#include<stdio.h>
int main()
{
    float f,c;
    printf ("fahrenheit degeri giriniz:");
    scanf ("%f" ,&f);

    c=((f-32)/1.8);
    printf ("celcius: %.3f",c);
}
*/

/*SORU6: Write C code to convert the length in feet to centimeter.*/
/*
#include<stdio.h>
int main()
{
    float ft,cm;
    printf ("fit cinsnden uzunluk degerini giriniz:");
    scanf ("%f", &ft);

    cm=(ft/0.032808);
    printf ("cm: %.2f",cm);
}
*/

/*SORU7: Write C code to find the largest of three numbers A, B, and C.*/
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