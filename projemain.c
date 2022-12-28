#include <stdio.h>
#include<locale.h>
#include "sorularvecevaplar.h"
#include "fonksiyonlar.h"
#include <unistd.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
    int inputanswers[10];
    int puan;
    printf("***Bu 10 Soruluk Evet/Hayýr Testine Göre Ne Kadar Anksiyetiksin?***\n\n\nBu testimize göre size ne kadar anksiyetik olduðunuzu söylüyoruz?\nHazýrsanýz;\nHaydi Teste!!\nNOT: Bu bir eðlence testidir.Konuyla ilgili iþin uzmanýna danýþmanýzý tavsiye ederiz:))\n\n\nAþaðidaki sorulari evet(1) veya hayir(0) olarak cevaplandiriniz.\n\n");
    int i;
    for (i = 0; i < 10; i++) {
        printf("%s",soruvecevaplar[i].soru);
        scanf("%d",&inputanswers[i]);
    }
    puan = puanhesaplayici(soruvecevaplar,inputanswers);
    printf("\nGirdiðiniz deðerlere göre sonuçlarýnýz deðerlendiriliyor...\n\n");
    sleep(3);
    cikti(puan);
    return 0;
}
