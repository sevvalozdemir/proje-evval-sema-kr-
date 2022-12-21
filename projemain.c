#include <stdio.h>
#include<locale.h>
#include "fonksiyonlar.h"
#include "sorularvecevaplar.h"
#include <unistd.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
    int inputanswers[10];
    int puan;
    printf("*********************Bu 10 Soruluk Evet/Hay�r Testine G�re Ne Kadar Anksiyetiksin?*********************\n\n\n");
    printf("Bu testimize g�re size ne kadar anksiyetik oldu�unuzu s�yl�yoruz?\nHaz�rsan�z;\nHaydi Teste!!\n");
    printf("NOT: Bu bir e�lence testidir.Konuyla ilgili i�in uzman�na dan��man�z� tavsiye ederiz:))\n\n\n");
    printf("A�a�idaki sorulari evet(1) veya hayir(0) olarak cevaplandiriniz.\n\n");
    int i;
    for ( i = 0; i < 10; i++) {
        printf("%s",soruvecevaplar[i].soru);
        scanf("%d",&inputanswers[i]);
    }
    puan = puanhesaplayici(soruvecevaplar,inputanswers);
    printf("\nGirdi�iniz de�erlere g�re sonu�lar�n�z de�erlendiriliyor...\n\n");
    sleep(3);
    cikti(puan);
    return 0;
}
