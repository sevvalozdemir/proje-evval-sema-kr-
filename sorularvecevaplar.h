struct soruCevapPuan
{
    char soru[200];
    int cevap;
    int sorupuani;
};

struct soruCevapPuan soruvecevaplar[10] = 
{
    { "1. Soru: �lk olarak g�n i�erisinde yapt���n rutin i�lerini yaparken endi�e duyuyor musun? :", 1 ,3},
    { "2. Soru: Peki kalabal�k bir ortama girerken b�t�n g�zler sanki senin �st�ndeymi� gibi hissediyor musun? :", 1 ,5},
    { "3. Soru: Kendini son zamanlarda ne yaparsan yap mutsuz hissediyor musun? :", 1 ,8},
    { "4. Soru: D��ar� ��kt���nda insanlarla muhabbet ederken anda kalmak yerine kafanda ba�ka �eyler d���n�yor musun? :", 1 ,5},
    { "5. Soru: Herhangi bir �ey d���n�rken durduk yere kalp �arp�nt�s� ya�ad���n oluyor mu? :", 1 ,10},
    { "6. Soru: Geceleri s�rekli bir �eyler d���n�p uyuyamad���n oluyor mu? :", 1 ,5},
    { "7. Soru: Her ne olursa olsun her zaman en k�t� senaryoyu mu d���n�rs�n? :", 1 ,12},
    { "8. Soru: Son zamanlarda yapman gereken bir i�e koyulmak i�in kendinde enerji bulamad���n oluyor mu? :", 1 ,5},
    { "9. Soru: Hayat�nda veya hayat�nda olmayan insanlar� hep bir tehlike olarak g�rd���n oluyor mu? :", 1 ,7},
    { "10. Soru: Son olarak, insanlara alay konusu olaca��m ya da rezil olaca��m diye i�inden geleni yapmad���n �eyler oluyor mu? :", 1 ,5},
};

char sonuclar[4][750] =
{
	"Bu hayatta herhangi bir �ey umrunda olmad��� i�in psikolojik olarak gayet iyi durumdas�n. Her �eyi kafas�na takmayan, hayattan zevk almaya �al��an bir insans�n. Mutlulu�un �yle b�y�k �eylere ba�l� de�il. Keyfine bakan, rahat bir insans�n. Etraf�ndaki insanlar�n ne s�yledi�i veya ne d���nd��� seni ilgilendirmiyor. Yak�n�ndaki insanlar seni tan�mlayacak olursa g�ler y�zl� ve pozitif bir insan oldu�unu s�yler. �nsanlar seninle vakit ge�irmekten keyif al�r. Psikolojik olarak sa�l�kl� oldu�un a��k�a s�ylenebilir\n",
	"Yapt���n se�imler, vakit ge�irdi�in insanlar seni ge�ici bir mutsuzlu�a s�r�klemi� olsa gerek. Bu s�re� senin direncine g�re �ok k�sa olabilir veya uzayabilir. Kendinle y�zle�mek ve insanlarla olan ili�kilerini ve yapt���n fedak�rl�klar� g�zden ge�irip �zg�venini y�kseltebilir ve bu s�reci sorunsuz atlatabilirsin. Psikolojik olarak �ok y�pranm�� g�z�km�yorsun dolay�s�yla toparlanman �ok da zor olmayacakt�r. G�vendi�in ve sevgisinden emin oldu�un insanlarla daha fazla vakit ge�irmeyi ve kendini onlara a�may� deneyebilirsin.\n",
	"Anla��lan insanlar�n �arp�k ili�kilerinden, verilen hi�bir �aban�n kar��l�k g�rmemesinden, i� d�nyan�n anla��lmamas�ndan yorulmu� gibisin. Beklentiler, gelecek kayg�lar�, insanlar�n anlay��s�zl��� ve d�nyadaki adaletsiz d�zen, ufac�k �eyleri kendine kayg� konusu edinen seni psikolojik anlamda seni �ok y�pratm��. Biraz dinlenmeye ihtiyac�n var. Kendini kapatma ve kimseyle g�r��meme e�iliminde olabilirsin fakat �zellikle bu d�nemde birilerinden yard�m almak senin i�in iyi olabilir. Profesyonel yard�ma ba�vurman bu d�nemi �abucak atlamana fayda sa�layabilir. Bunun d���nda egzersiz yapmak be g�vendi�in insanlarla vakit ge�irmek de senin i�in iyi olacakt�r. Herkesin problemini ve t�m bu adaletsizlikleri s�rtlanmaya �al��may� b�rakmal�s�n.\n",
	"Son zamanlarda psikolojik anlamda pek sa�l�kl� g�r�nm�yorsun. �o�unlukla kendini yorgun ve halsiz hissediyor olabilirsin. Hi�bir �eyden keyif alm�yor gibisin. Kendini eve kapatm�� ve kimseyle g�r��mek istemiyor olabilirsin. �nsanlar�n senin i�sel d�nyan� anlamad��� ortada. �nsanlara bir �ey anlat�rken seni tam anlam�yla dinlediklerinden emin olam�yor olabilirsin. Olmad���n biri gibi davranmaktan yoruldu�un i�in kendinle ba� ba�a kalmay� tercih etmi� gibisin.\n"
};

