/*SORU1: pentagon sayilari Pn=n*(3*n-1)/2 formulune göre üretilmektedir.
100 den küçük pentagon sayilarini ekrana yazdirin.*/
/*
#include<stdio.h>
int main()
{
    int x[8], i;
    i=0;
    x[i]=i*(3*i-1)/2;

    while (i<8){
        i++;
        x[i]=i*(3*i-1)/2;
        printf ("%d\n", x[i]);
    }
    return 0;
}
*/


/* SORU2: Aynı satır ve sütün sayısına sahip iki matriksi
toplayan c kodunu yazınız.
Matriks değerleri klavyeden girilecek*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int dizi1[3][2],dizi2[3][2],i,j,topmatrix[3][2];
    

    for(i=0; i<3; i++){  
        for(j=0; j<2;j++)
        {
        printf("1. dizi elemanini giriniz:");
        scanf("%d",&dizi1[i][j]);
        }
    }


    for(i=0; i<3; i++){
        for(j=0; j<2;j++)
        {
        printf("2. dizi elemanini giriniz:");
        scanf("%d",&dizi2[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<2;j++)
        {
        topmatrix[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<2;j++)
        {
         printf("%4d",topmatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/



/*SORU3:Bir sınıftaki 10 öğrencinin boy ve kilo deperlerini iki boyutlu diziye
klavyeden okuyarak aktaran ve ortalamaboy kilo değerlerini hesaplayarak ekrana yazdıran
programı c dili ile yazınız */

#include<stdio.h>
int main()
{
    int i,j,A[2][10],ortboy, ortkilo;
    int toplamboy=0;
    int toplamkilo=0;

    for(i=0; i<2; i++)
    { 
        if(i==0)
        {
            for(j=0;j<10;j++){
            printf(" öğrencinin boyunu giriniz:");
            scanf ("%d",& A[0][j]);
            toplamboy=(toplamboy+A[0][j]);
        }}
            
        else
        {
            for(j=0;j<10;j++){
            printf(" öğrencinin kilosunu giriniz:");
            scanf ("%d", &A[1][j]);
            toplamkilo=(toplamkilo+A[1][j]);
        }}
        }
        ortboy=(toplamboy/10);
        printf("ortalama boy: %d\n", ortboy);
        ortkilo=(toplamkilo/10);
        printf("ortalama kilo: %d\n", ortkilo);

        return 0;
    }
