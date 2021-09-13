#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem, sayi1, sayi2;

    printf("*********MENU*********\n");
    printf("1. Carpma\n");
    printf("2. Bolme\n");
    printf("3. Cikarma\n");
    printf("4. Toplama\n");
    printf("5. Mod alma\n");
    printf("**********************\n");
    printf("Hangi islemi yapacaksiniz\n");
    scanf("%d", &islem);
    printf("Islem yapacaginiz sayiyi giriniz\n");
    scanf("%d %d", &sayi1, &sayi2);

    switch(islem){
        case 1:
            printf("%d*%d=%d sayilariniz carpimidir.\n", sayi1, sayi2, sayi1*sayi2);
            break;
        case 2:
            if(sayi1>=sayi2){
                printf("%d/%d=%.2f\n", sayi1, sayi2, (float)sayi1/sayi2);
            }
            else
                printf("%d/%d=%.2f\n", sayi2, sayi1, (float)sayi2/sayi1);
            break;
        case 3:
            if(sayi1>=sayi2){
                printf("%d-%d=%d.\n", sayi1, sayi2, sayi1-sayi2);
            }
            else
                printf("%d-%d=%d.\n", sayi2, sayi1, sayi2-sayi1);
            break;
        case 4:
            printf("%d+%d=%d.\n", sayi1, sayi2, sayi1+sayi2);
            break;
        case 5:
            if(sayi1>=sayi2){
                 printf("%d mod %d=%d.\n", sayi1, sayi2, sayi1%sayi2);
            }
            else
                printf("%d mod %d=%d.\n", sayi2, sayi1, sayi2%sayi1);
            break;
        default:
            printf("Menudeki seceneklerden seciniz \a\n");
    }
    return 0;
}
