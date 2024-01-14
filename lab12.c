/*Klavyeden girilen bir string içerisindeki kelimelerde kaçar tane “a” karakteri geçtiğini bularak ekrana yazdıran 
programın C kodunu yazınız (Not: Girilen string ifadenin tüm karakterlerinin küçük harf olduğunu varsayın. 
Programın örnek çalışma ekranı aşağıda verildiği gibi olmalıdır).*/

/*
#include<stdio.h>
int main ()
{
    char A[30];
    printf("bir seyler giriniz:");
    gets(A);
    int k=0;
    int kelime=0;

    for(int i=0; A[i]!='\0' ; i++)
    {
        if((int)A[i]==97)
        {
        k++;
        }

        else if (A[i]==' '){
            kelime++;
            printf ("%d. kelimede %d adet a harfi vardir\n", kelime, k);
            k=0;
        }
    }
    kelime++;
    printf ("%d. kelimede %d adet a harfi vardir\n", kelime, k);
    return 0;
}
*/

// iki string birleştir
/*
int main(){
    char Array1[30];
    char Array2[30];
    char Array3[30];

    printf("İki tane isim giriniz: ");
    gets(Array1);
    gets(Array2);

    int a=0;
    for( a; a<30; a++){
        if(Array1[a]=='\0'){
            break;
        }
        Array3[a]=Array1[a];
    }
    Array3[a]=' ';
    a++;
    for(int i=0; i<30; i++){
        Array3[a]=Array2[i];
        a++;
    }

    puts(Array3);



    return 0;
    }





#include <stdio.h>

int main(){
    char Array[50];
    printf("Lütfen birişiler yazınız: ");
    gets(Array);
    for(int i=0; i<50; i++){
        if((int)Array[i]>=97 && (int)Array[i]<=122){
            printf("%c",Array[i]);
        }
    }
    return 0;
}



#include <stdio.h>

int main(){
    char Array[50];
    printf("Lütfen birişiler yazınız: ");
    gets(Array);
    int Vowels=0,Con=0,Digit=0,Space=0;

    for(int i=0; i<50; i++){
        if((int)Array[i]>=97 && (int)Array[i]<=122){
            Con++;
        }
        else if((int)Array[i]==65 || (int)Array[i]==69 || (int)Array[i]==73 || (int)Array[i]==79 || (int)Array[i]==85){
            Vowels++;
        }
        else if((int)Array[i]>=48 && (int)Array[i]<=57){
            Digit++;
        }
        else if(Array[i]==' '){
            Space++;
        }
    }

    printf("Vowels: %d \nCon: %d\nDigit: %d\nSpace: %d ",Vowels,Con,Digit,Space);
    return 0;




*/