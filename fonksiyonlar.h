#include <stdio.h>
#include<locale.h>

struct soru 
{
    char soru[200];
    int cevap;
    int sorupuani;
};

int puanhesaplayici(struct soru sorular[],int cevaplar[])
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

char sonuclar[1000][1000] =
{
	"Bu hayatta herhangi bir �ey umrunda olmad��� i�in psikolojik olarak gayet iyi durumdas�n. Her �eyi kafas�na takmayan, hayattan zevk almaya �al��an bir insans�n. Mutlulu�un �yle b�y�k �eylere ba�l� de�il. Keyfine bakan, rahat bir insans�n. Etraf�ndaki insanlar�n ne s�yledi�i veya ne d���nd��� seni ilgilendirmiyor. Yak�n�ndaki insanlar seni tan�mlayacak olursa g�ler y�zl� ve pozitif bir insan oldu�unu s�yler. �nsanlar seninle vakit ge�irmekten keyif al�r. Psikolojik olarak sa�l�kl� oldu�un a��k�a s�ylenebilir\n",
	"Yapt���n se�imler, vakit ge�irdi�in insanlar seni ge�ici bir mutsuzlu�a s�r�klemi� olsa gerek. Bu s�re� senin direncine g�re �ok k�sa olabilir veya uzayabilir. Kendinle y�zle�mek ve insanlarla olan ili�kilerini ve yapt���n fedak�rl�klar� g�zden ge�irip �zg�venini y�kseltebilir ve bu s�reci sorunsuz atlatabilirsin. Psikolojik olarak �ok y�pranm�� g�z�km�yorsun dolay�s�yla toparlanman �ok da zor olmayacakt�r. G�vendi�in ve sevgisinden emin oldu�un insanlarla daha fazla vakit ge�irmeyi ve kendini onlara a�may� deneyebilirsin.\n",
	"Anla��lan insanlar�n �arp�k ili�kilerinden, verilen hi�bir �aban�n kar��l�k g�rmemesinden, i� d�nyan�n anla��lmamas�ndan yorulmu� gibisin. Beklentiler, gelecek kayg�lar�, insanlar�n anlay��s�zl��� ve d�nyadaki adaletsiz d�zen, ufac�k �eyleri kendine kayg� konusu edinen seni psikolojik anlamda seni �ok y�pratm��. Biraz dinlenmeye ihtiyac�n var. Kendini kapatma ve kimseyle g�r��meme e�iliminde olabilirsin fakat �zellikle bu d�nemde birilerinden yard�m almak senin i�in iyi olabilir. Profesyonel yard�ma ba�vurman bu d�nemi �abucak atlamana fayda sa�layabilir. Bunun d���nda egzersiz yapmak be g�vendi�in insanlarla vakit ge�irmek de senin i�in iyi olacakt�r. Herkesin problemini ve t�m bu adaletsizlikleri s�rtlanmaya �al��may� b�rakmal�s�n.\n",
	"Son zamanlarda psikolojik anlamda pek sa�l�kl� g�r�nm�yorsun. �o�unlukla kendini yorgun ve halsiz hissediyor olabilirsin. Hi�bir �eyden keyif alm�yor gibisin. Kendini eve kapatm�� ve kimseyle g�r��mek istemiyor olabilirsin. �nsanlar�n senin i�sel d�nyan� anlamad��� ortada. �nsanlara bir �ey anlat�rken seni tam anlam�yla dinlediklerinden emin olam�yor olabilirsin. Olmad���n biri gibi davranmaktan yoruldu�un i�in kendinle ba� ba�a kalmay� tercih etmi� gibisin.\n"
};

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
