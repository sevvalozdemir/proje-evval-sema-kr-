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
	"Bu hayatta herhangi bir þey umrunda olmadýðý için psikolojik olarak gayet iyi durumdasýn. Her þeyi kafasýna takmayan, hayattan zevk almaya çalýþan bir insansýn. Mutluluðun öyle büyük þeylere baðlý deðil. Keyfine bakan, rahat bir insansýn. Etrafýndaki insanlarýn ne söylediði veya ne düþündüðü seni ilgilendirmiyor. Yakýnýndaki insanlar seni tanýmlayacak olursa güler yüzlü ve pozitif bir insan olduðunu söyler. Ýnsanlar seninle vakit geçirmekten keyif alýr. Psikolojik olarak saðlýklý olduðun açýkça söylenebilir\n",
	"Yaptýðýn seçimler, vakit geçirdiðin insanlar seni geçici bir mutsuzluða sürüklemiþ olsa gerek. Bu süreç senin direncine göre çok kýsa olabilir veya uzayabilir. Kendinle yüzleþmek ve insanlarla olan iliþkilerini ve yaptýðýn fedakârlýklarý gözden geçirip özgüvenini yükseltebilir ve bu süreci sorunsuz atlatabilirsin. Psikolojik olarak çok yýpranmýþ gözükmüyorsun dolayýsýyla toparlanman çok da zor olmayacaktýr. Güvendiðin ve sevgisinden emin olduðun insanlarla daha fazla vakit geçirmeyi ve kendini onlara açmayý deneyebilirsin.\n",
	"Anlaþýlan insanlarýn çarpýk iliþkilerinden, verilen hiçbir çabanýn karþýlýk görmemesinden, iç dünyanýn anlaþýlmamasýndan yorulmuþ gibisin. Beklentiler, gelecek kaygýlarý, insanlarýn anlayýþsýzlýðý ve dünyadaki adaletsiz düzen, ufacýk þeyleri kendine kaygý konusu edinen seni psikolojik anlamda seni çok yýpratmýþ. Biraz dinlenmeye ihtiyacýn var. Kendini kapatma ve kimseyle görüþmeme eðiliminde olabilirsin fakat özellikle bu dönemde birilerinden yardým almak senin için iyi olabilir. Profesyonel yardýma baþvurman bu dönemi çabucak atlamana fayda saðlayabilir. Bunun dýþýnda egzersiz yapmak be güvendiðin insanlarla vakit geçirmek de senin için iyi olacaktýr. Herkesin problemini ve tüm bu adaletsizlikleri sýrtlanmaya çalýþmayý býrakmalýsýn.\n",
	"Son zamanlarda psikolojik anlamda pek saðlýklý görünmüyorsun. Çoðunlukla kendini yorgun ve halsiz hissediyor olabilirsin. Hiçbir þeyden keyif almýyor gibisin. Kendini eve kapatmýþ ve kimseyle görüþmek istemiyor olabilirsin. Ýnsanlarýn senin içsel dünyaný anlamadýðý ortada. Ýnsanlara bir þey anlatýrken seni tam anlamýyla dinlediklerinden emin olamýyor olabilirsin. Olmadýðýn biri gibi davranmaktan yorulduðun için kendinle baþ baþa kalmayý tercih etmiþ gibisin.\n"
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
