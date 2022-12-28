#include <stdio.h>
#include <locale.h>
int puanhesaplayici(struct soruCevapPuan sorular[],int cevaplar[])
{
    int temppuan = 0;
    int i;
        for (i = 0; i<10;i++)
    {
        if (sorular[i].cevap==cevaplar[i])
        {
            temppuan += sorular[i].sorupuani;
        }
    }
    return temppuan;
}
void cikti(int puan)
{
    if(puan <= 15)
    {
        printf(sonuclar[0]);
    }
    else if(puan <= 35)
    {
        printf(sonuclar[1]);
    }
    else if(puan <= 64)
    {
        printf(sonuclar[2]);
    }
    else
    {
        printf(sonuclar[3]);
    }
}
