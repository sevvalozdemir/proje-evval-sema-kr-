struct soruCevapPuan
{
    char soru[200];
    int cevap;
    int sorupuani;
};

struct soruCevapPuan soruvecevaplar[10] = 
{
    { "1. Soru: Ýlk olarak gün içerisinde yaptýðýn rutin iþlerini yaparken endiþe duyuyor musun? :", 1 ,3},
    { "2. Soru: Peki kalabalýk bir ortama girerken bütün gözler sanki senin üstündeymiþ gibi hissediyor musun? :", 1 ,5},
    { "3. Soru: Kendini son zamanlarda ne yaparsan yap mutsuz hissediyor musun? :", 1 ,8},
    { "4. Soru: Dýþarý çýktýðýnda insanlarla muhabbet ederken anda kalmak yerine kafanda baþka þeyler düþünüyor musun? :", 1 ,5},
    { "5. Soru: Herhangi bir þey düþünürken durduk yere kalp çarpýntýsý yaþadýðýn oluyor mu? :", 1 ,10},
    { "6. Soru: Geceleri sürekli bir þeyler düþünüp uyuyamadýðýn oluyor mu? :", 1 ,5},
    { "7. Soru: Her ne olursa olsun her zaman en kötü senaryoyu mu düþünürsün? :", 1 ,12},
    { "8. Soru: Son zamanlarda yapman gereken bir iþe koyulmak için kendinde enerji bulamadýðýn oluyor mu? :", 1 ,5},
    { "9. Soru: Hayatýnda veya hayatýnda olmayan insanlarý hep bir tehlike olarak gördüðün oluyor mu? :", 1 ,7},
    { "10. Soru: Son olarak, insanlara alay konusu olacaðým ya da rezil olacaðým diye içinden geleni yapmadýðýn þeyler oluyor mu? :", 1 ,5},
};

char sonuclar[4][750] =
{
	"Bu hayatta herhangi bir þey umrunda olmadýðý için psikolojik olarak gayet iyi durumdasýn. Her þeyi kafasýna takmayan, hayattan zevk almaya çalýþan bir insansýn. Mutluluðun öyle büyük þeylere baðlý deðil. Keyfine bakan, rahat bir insansýn. Etrafýndaki insanlarýn ne söylediði veya ne düþündüðü seni ilgilendirmiyor. Yakýnýndaki insanlar seni tanýmlayacak olursa güler yüzlü ve pozitif bir insan olduðunu söyler. Ýnsanlar seninle vakit geçirmekten keyif alýr. Psikolojik olarak saðlýklý olduðun açýkça söylenebilir\n",
	"Yaptýðýn seçimler, vakit geçirdiðin insanlar seni geçici bir mutsuzluða sürüklemiþ olsa gerek. Bu süreç senin direncine göre çok kýsa olabilir veya uzayabilir. Kendinle yüzleþmek ve insanlarla olan iliþkilerini ve yaptýðýn fedakârlýklarý gözden geçirip özgüvenini yükseltebilir ve bu süreci sorunsuz atlatabilirsin. Psikolojik olarak çok yýpranmýþ gözükmüyorsun dolayýsýyla toparlanman çok da zor olmayacaktýr. Güvendiðin ve sevgisinden emin olduðun insanlarla daha fazla vakit geçirmeyi ve kendini onlara açmayý deneyebilirsin.\n",
	"Anlaþýlan insanlarýn çarpýk iliþkilerinden, verilen hiçbir çabanýn karþýlýk görmemesinden, iç dünyanýn anlaþýlmamasýndan yorulmuþ gibisin. Beklentiler, gelecek kaygýlarý, insanlarýn anlayýþsýzlýðý ve dünyadaki adaletsiz düzen, ufacýk þeyleri kendine kaygý konusu edinen seni psikolojik anlamda seni çok yýpratmýþ. Biraz dinlenmeye ihtiyacýn var. Kendini kapatma ve kimseyle görüþmeme eðiliminde olabilirsin fakat özellikle bu dönemde birilerinden yardým almak senin için iyi olabilir. Profesyonel yardýma baþvurman bu dönemi çabucak atlamana fayda saðlayabilir. Bunun dýþýnda egzersiz yapmak be güvendiðin insanlarla vakit geçirmek de senin için iyi olacaktýr. Herkesin problemini ve tüm bu adaletsizlikleri sýrtlanmaya çalýþmayý býrakmalýsýn.\n",
	"Son zamanlarda psikolojik anlamda pek saðlýklý görünmüyorsun. Çoðunlukla kendini yorgun ve halsiz hissediyor olabilirsin. Hiçbir þeyden keyif almýyor gibisin. Kendini eve kapatmýþ ve kimseyle görüþmek istemiyor olabilirsin. Ýnsanlarýn senin içsel dünyaný anlamadýðý ortada. Ýnsanlara bir þey anlatýrken seni tam anlamýyla dinlediklerinden emin olamýyor olabilirsin. Olmadýðýn biri gibi davranmaktan yorulduðun için kendinle baþ baþa kalmayý tercih etmiþ gibisin.\n"
};

