/* SORU1: Karenin alanını hesaplayan fonksiyonu
hazırlayıp mainde kullanan programı yazınız.*/

/*
#include<stdio.h>
int KareninAlani(int x);

void main (){
    int x;
    printf ("karenin kenar uzunluğunu giriniz:");
    scanf ("%d", & x);
    printf ("karenin alani: %d", KareninAlani(x));
}

KareninAlani(int x){
    int alan;
    alan=x*x;
    return alan;
}
*/


/*SORU2: Fonksiyona gönderilen beş sayının ortalamasını
hesaplayıp geri döndüren programı yazınız. */
/*
#include<stdio.h>
int ortalama(int x[]);

void main(){
    int x[5];
    for (int i=0; i<5; i++){
        printf ("bir değer giriniz:");
        scanf ("%d",& x[i]);
    }
    printf("%d", ortalama(x));
}

ortalama(int x[]){
    int top=0;
    int ort;
    for (int i=0; i<5; i++){
        top=top+x[i];
    }
    ort=(top/5);
    return ort;
}
*/



/* SORU3: Bir sayının çift mi tek mi olduğunu kontrol
eden fonksiyonu ve kullanımını gösteren programı yazınız. */
/*
#include<stdio.h>
void main(){
    int x;
    printf("bir sayi giriniz:");
    scanf ("%d",&x);
    tekcift(x);
}

void tekcift(int a){
    if(a%2==0){
        printf("cifttir");
    }
    else
    printf ("tektir");
}
*/




/* SORU4: İki ayrı fonksiyon oluşturarak bir tamsayının asal sayı mı
yoksa Armstrong mu yoksa her ikisi mi olduğunu kontrol etmeyi
sağlayan programı yazınız. */

/*
#include<stdio.h>
void main(){
    int a;
    printf ("bir sayi giriniz:");
    scanf ("%d",& a);
    asal(a);
    arm (a);
}

int asal(int x)
{
    int c=0;
    int i=x;
    i--;

for (i; i!=1; i--)
{
    if(x%i==0)
    {
        printf ("asal değildir\n");
        c=1;
        break;
    }
}
if(c==0){
    printf ("asal sayidir\n");
}
return 0;
}


int arm(int x){
    int top=0;
    int bas,sayi,y;
    y=x;
    while(x>9){
        bas=x%10;
        sayi=bas*bas*bas;
        top=top+sayi;
        x=x/10;
    }
    sayi=x*x*x;
    top=top+sayi;

    if(top==y){
        printf("armstrong sayidir\n");
    }
    else
    printf ("armstrong sayi degildir\n");
    return 0;
}
*/


/*SORU5: Girilen cümleyi parametre olarak alıp içerisindeki
kelime sayısını bulan fonksiyonu yazınız. */

/*
#include<stdio.h>
int kelimesayisi(char c[]){
    int k;
    k=0;
    int i=0;
    while (c[i]!='\0')
    {
        if ((int)c[i]==32)
        {
            k++;
        }
        i++;
    }
    k++;
    return k;
}

int main(){
    char s[40];
    printf ("bir cümle giriniz:");
    gets(s);
    printf("cümlede %d kelime vardir", kelimesayisi(s));
    return 0;
}
*/
