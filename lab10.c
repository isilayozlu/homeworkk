/*SORU1: 8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp 
ekrana yazdırın. */
/*
#include<stdio.h>
int main ()
{
	int x[8];
	int i;
	float top,ort;
	i=0;
	top=0;

	while (i!=8){
	printf("bir sayi giriniz:");
	scanf ("%d", &x[i]);
	top=(top+x[i]);
	i++;
	}
	ort= (top/8);
	printf ("%f", ort);
	return 0;
}
*/


/*SORU2: Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini 
ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)*/
/*
#include<stdio.h>
int main ()
{
    int x[10],karesi,i;
    i=0;
    while(i<10){
    printf("bir sayi giriniz:");
    scanf ("%d", & x[i]);
    
    if(x[i]==-1){
        break;
            }

    else
    {
    karesi= (x[i]*x[i]);
    printf ("%d", karesi);
    i++;
    }
    }
    return 0;
}
*/


/*SORU3: Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan 
programı yazınız. */
/*
#include<stdio.h>
int main()
{
    int x[5],i,y;
    i=0;

    printf ("bir sayi giriniz:");
    scanf ("%d", & y);

    if (y<100000 && y>9999){

          while (i<5){
          x[i]=(y%10);
          y=(y/10);
          i++;
          } 
          i--;

          while (i>=0){
            printf ("%d\n", x[i]);
            i--;
          }
    }

    else{
        printf (" 5 basamakli bir sayi giriniz!");
    }

    return 0;
}
*/


/*SORU4: 10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız. 
(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)*/
/*
#include<stdio.h>
int main()
{
    int x[10],i;
    i=0;

    while (i<10){
        printf ("bir sayi giriniz:");
        scanf ("%d", & x[i]);
        i++;
    }
   
    while (i>=0){
        i--;
        printf ("%d\n", x[i]);
       
    }
    
    return 0;
}
*/