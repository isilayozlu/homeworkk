/*SORU1: - Klavyeden girilen iki sayının toplamını hesaplayıp ekrana yazdıran programı C 
dili ile yazınız.*/
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

/*SORU2: Klavyeden A ve B tamsayı değişkenlerinde tutulan iki sayı giriliyor. A ve B 
değişkenlerinin değerlerini kendi arasında yer değiştirerek ekrana yazdıran 
programı C dili ile yazınız.*/

/*
#include<stdio.h>
int main()
{
    int A,B;
    printf ("bir sayi giriniz:");
    scanf ("%d", A);

    printf ("bir sayi giriniz:");
    scanf ("%d", B);

 YAPAMADIMMMMMMMMMMMMMMMMMMMMM

}
*/

/* SORU3: Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin 
vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve 
öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile 
yazınız.*/

/*
#include<stdio.h>
int main ()
{
    int  ögrencino, vize,final, gecmenotu;

    printf ("öğrenci no giriniz:");
    scanf ("%d", &ögrencino);

    printf ("vize notunu giriniz:");
    scanf ("%d", &vize);

    printf ("final notunu giriniz:");
    scanf ("%d", &final);

    gecmenotu=(vize*0.4+final*0.6);

    printf ("ögrencino:%d\n" "gecmemnotu:%d\n" ,ögrencino, gecmenotu);
    return 0;
}
*/

/*SORU4: Klavyeden bir dairenin yarıçap bilgisi ve işlem türü girildiğinde işlem türü 1 
ise dairenin çevresini hesaplanıp yazdıran 2 girilirse alanının hesaplayıp 
yazdıran, bunların dışındaki girişler için “Yanlış giriş” mesajı vererek sonlanan 
programı C dili ile yazınız.*/

/*
#include<stdio.h>
int main()
{
    int islemtipi,yaricap;
    float cevre,alan;

    printf ("dairenin yaricap bilgisini giriniz:");
    scanf ("%d", & yaricap);

    printf ("islem tipini giriniz:");
    scanf ("%d",& islemtipi);

    if (islemtipi==1){
        cevre=(2*3.14*yaricap);
        printf ("%.2f", cevre);
    }
    else if (islemtipi==2){
        alan= (3.14*yaricap*yaricap);
        printf ("%.2f", alan);
    }
    else{
        printf ("yanlis giriş!");
    }
    return 0 ;
}
*/

/*SORU5: 5- Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak 
istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C 
dili ile yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır.*/

/*
#include<stdio.h>
int main()
{
    int a,b,c,d,y;
    printf ("para miktarini giriniz:");
    scanf ("%d", &y);

    if (y%10==0){
            a=(y/100);
            y=(y%100);
            b=(y/50);
            y=(y%50);
            c=(y/20);
            y=(y%20);
            d=(y/10);
        printf ("100'lük banknot sayisi: %d\n"  "50'lik banknot sayisi: %d\n" "20'lük banknot sayisi: %d\n" "10'lük banknot sayisi: %d\n", a,b,c,d);
    }
   else(y%10!=0);
   {
     printf ("Klavyeden girilen para miktari 10'un katlari olmalidir.");
   }
   return 0;
}
*/