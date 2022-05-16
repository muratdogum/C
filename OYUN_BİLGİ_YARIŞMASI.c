
#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include<stdbool.h>

void a();
void b();
int dizin = 11;
int ust = 0;
int on = -1;
int sayac = 0;
int dizi1[11];
int peek()
{
    return dizi1[ust];
}
bool isEmpty()
{
    return sayac == 0;
}
bool isFull()
{
    return sayac == dizin;
}
int size()
{
    return sayac;
}
void enqueue(int data)
{
        if(on == dizin-1)
        {
            on = -1;
        }
        dizi1[++on] = data;
        sayac++;   
}
int dequeue()
{
    if(!isEmpty())
    {
        int data = dizi1[ust++];
        if(ust == dizin)
        {
            ust = 0;
        }
        sayac--;
        return data;
    }}

int deger=0;
int para[11];
int ast = -1;
int kontrol()
{
    if(ast==-1)
        return 1;
    else
        return 0;
}
void ekle(int veri)
{
           ast++;
        para[ast] = veri;
}
int akis()
{
    int veri;
veri = para[ast];
        ast--;
        return veri;
    }

int f(int n){
if(n>1)
f(n-1);
printf("%c",177);
printf("%c",177);
printf("%c",177);	
Sleep(100);
}
void a()
{char cvp,cvp2,cvp3,cvp4,cvps,cvp6,cvp7,cvp8,cvp9,cvp10;
	int m=10,s=0;
	HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\n\nSorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
  			printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
	printf("            1) -Sinekli Bakkal- Romaninin Yazari Asagidakilerden Hangisidir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("             A) Resat Nuri Guntekin B) Halide Edip Adivar C) Ziya Gokalp D) Omer Seyfettin\n\n");
 
printf("Cevap : "); scanf("%s",&cvp);
 
  		if(cvp=='b'||cvp=='B')
 	{
  deger=deger+100000;
  ekle(deger);
  enqueue(cvp);
  		}
 	else
  	{ 
  s++;
 enqueue(cvp);
 ekle(deger);
  	}
   printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
         getchar();
          hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
         
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("             2) Asagida verilen ilk cag uygarliklarindan hangisi yaziyi icat etmistir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("             A) Hititler B) Elamlar C) Sumerler D) Urartular \n\n");
 
printf("Cevap : "); scanf("%s",&cvp2);
 
  		if(cvp2=='c'||cvp2=='C')
 	{
 deger=deger+100000;
  ekle(deger);
 enqueue(cvp2);
 }
 	else
 	{ 
 s++;
 enqueue(cvp2);
 ekle(deger);
  	}
  			printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("          3)Tsunami Felaketinde En Fazla Zarar Goren Guney Asya Ulkesi Asagidakilerden Hangisidir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("            A) Endonezya B) Srilanka C) Tayland D) Hindistan \n\n");
 
printf("Cevap : "); scanf("%s",&cvp3);
 
  		if(cvp3=='a'||cvp3=='A')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp3);	
  		}
   		else
  	{ 
  	s++;
 	 enqueue(cvp3);
 	 ekle(deger);
 
  	}
  		printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("            4) 2003 Yilinda Euro Vizyon sarki Yarismasinda Ulkemizi Temsil Eden\n");
printf("            Ve Yarismada Birinci Gelen Sanatcimiz Kimdir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("       A) Grup Athena B) Sertap Erener C) Sebnem Paker D)Ajda Pekkan\n\n");
 
printf("Cevap : "); scanf("%s",&cvp4);
 
  		if(cvp4=='b'||cvp4=='B')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp4);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp4);
 	 ekle(deger);
  	}
	  	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("           5) Mustafa Kemal Ataturk un Nufusa Kayitli Oldugu Il Hangisidir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("      A) Bursa B) Ankara C) Istanbul D) Gaziantep\n");
 printf("Cevap : "); scanf("%s",&cvps);
 
  		if(cvps=='d'||cvps=='D')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvps);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvps);
 	 ekle(deger);
  	}

	  	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
					printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("          6)Asagidakilerden Hangisi Dunya Saglik Orgutunun Kisaltilmis Ismidir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("    A) Uhw B) Unicef C) Who D) Nato\n\n");
 
printf("Cevap : "); scanf("%s",&cvp6);
 
  		if(cvp6=='c'||cvp6=='C')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp6);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp6);
 	 ekle(deger);
  	}
	   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
					printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("         7)Romen Rakaminda Hangi Sayi Yoktur?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("    A) 0 B) 50 C) 100 D) 1000 \n\n");
 
printf("Cevap : "); scanf("%s",&cvp7);
 
  		if(cvp7=='a'||cvp7=='A')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp7);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp7);
 	 ekle(deger);
  	}
  		   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("        8)Bir Sebepten Dolayi Tek Kulagina Kupe Takan Osmanli Padisahi Kimdir? \n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("    A)Kanuni Sultan Suleyman B)Yavuz Sultan Selim C)Orhan Bey D)Fatih Sultan Mehmet  \n\n");
 
printf("Cevap : "); scanf("%s",&cvp8);
 
  		if(cvp8=='b'||cvp8=='B')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp8);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp8);
 	 ekle(deger);
  	}
	  
	  	   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("        9)Asagidaki Ulkelerden Hangisinin Nufusu Daha Fazladir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("     A)Ispanya B)Fransa C)Ingiltere D)Almanya \n\n");


printf("Cevap : "); scanf("%s",&cvp9);
 
  		if(cvp9=='d'||cvp9=='D')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp9);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp9);
 	 ekle(deger);
  	}
	  	  
	  	   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("                 10) Aspirinin Hammaddesi Nedir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("   A)Sogurt B)Koknar C)Kavak D)Mese \n\n");


printf("Cevap : "); scanf("%s",&cvp10);
 
  		if(cvp10=='a'||cvp10=='A')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp10);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp10);
 	 ekle(deger);
 	
  	}

	  system("CLS");
	  		
  		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
  		printf("\n\n");
  	 
	 	  			printf("Kazanilan toplam==");	printf("%dTL\n",deger);
	 	  		
		 printf("Cevaplar\n");
   		printf("kullanici cevaplari\n");
   		int i=1;
   while(!isEmpty())
    { 
        int data = dequeue();
        printf("|%d:%c|",i,data);
        
        i++;
    }
    printf("\nDogru cevaplar\n");
       printf("| 1:B | 2:C | 3:A | 4:B | 5:D | 6:C | 7:A| 8:B | 9:D | 10:A | \n");
       m=m-s;
         printf("|%d tane dogru:%d tane yalnis|",m,s);
    	printf("\n\n");
   char isim[15];
			printf("\n\noyuncu  adiniz\n\n");
     scanf("%s",&isim);
if(deger<300000){
  	 		printf("TEKRAR DENE BENCE %s\n",&isim);
	   }
	   else if(deger>=300000 && deger<500000)
	   {
	   		printf("IYISIN BU ISTE %s\n",&isim);
	   }
	   else if(deger>=500000 && deger<800000)
	   {
	   		printf("BU BAYA YUKSEK %s \n",&isim);
	   }
	   else if(deger>=800000)
	   {
	   	printf("SEN  EINSTEININ KAYIP COCUGU FALAN MISIN :) %s\n",&isim);
	   }
	     deger=0,m=0,s=0;
	getch();
}
void b()
{char cvp,cvp2,cvp3,cvp4,cvps,cvp6,cvp7,cvp8,cvp9,cvp10;

	int m=10,s=0;
	HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	

	printf("\n\n Sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
    getchar();
    	
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
	printf("            1) Hangisi para uzerine resmi basilan bilinen ilk gercek kisidir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("             A) Kralice I. Elizabeth B) Jules Cesar C) Napoleon Bonaparte D) Buyuk Iskender\n\n");
 
printf("Cevap : "); scanf("%s",&cvp);
 
  		if(cvp=='d'||cvp=='D')
 
  		{
  deger=deger+100000;
  ekle(deger);
  enqueue(cvp);
  		}
 	else
  	{ 
  s++;
 enqueue(cvp);
 ekle(deger);
  	}
   printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
         getchar();
          hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
         
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("             2)Guinness Dunya Rekorlarina gore, tarihtebir kadinin dogurdugu en  \n");
	printf("        yuksek cocuk sayisi kactir?\n                                      ");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("            A) 39 B) 49 C) 59 D) 69 \n\n");
 
printf("Cevap : "); scanf("%s",&cvp2);
 
  		if(cvp2=='d'||cvp2=='D')
 	{
 deger=deger+100000;
  ekle(deger);
 enqueue(cvp2);
 }
 	else
 	{ 
 s++;
 enqueue(cvp2);
 ekle(deger);
  	}
  			printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("          3)2010 da yapilan Dunya Munazara Yarismasi na ev sahipligi yapan  ulke asagidakilerden hangisidir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("          A)Almanya B)Ingiltere C)Turkiye D)Yunanistan\n\n");
 
printf("Cevap : "); scanf("%s",&cvp3);
 
  		if(cvp3=='c'||cvp3=='C')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp3);	
  		}
   		else
  	{ 
  	s++;
 	 enqueue(cvp3);
 	 ekle(deger);
 
  	}
  		printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("           4) Avrupa Birliginin en fazla onemsedigi, her alanda gelecegin teknolojisi \n");
printf("           olarak adlandirilan bilim dalinin adi nedir?\n\n");
	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("      A)Nukleer enerji B)Nanoteknoloji C)Gunes enerjisi D)Astronomi\n\n");
 
printf("Cevap : "); scanf("%s",&cvp4);
 
  		if(cvp4=='b'||cvp4=='B')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp4);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp4);
 	 ekle(deger);
  	}
	  	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
			printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("           5)  UEFA Kupasini alan ilk Turk takimi hangisidir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("      A)Fenerbahce B)Trabzonspor C)Besiktas D)Galatasaray \n");
 printf("Cevap : "); scanf("%s",&cvps);
 
  		if(cvps=='d'||cvps=='D')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvps);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvps);
 	 ekle(deger);
  	}

	  	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
					printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("        6) Dunyanin ilk haritasini cizen unlu Turk denizcisi kimdir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("  A)Piri Reis B)Caka Beyi C)Pargali ibrahim Pasa D)Picasso \n\n");
 
printf("Cevap : "); scanf("%s",&cvp6);
 
  		if(cvp6=='a'||cvp6=='A')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp6);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp6);
 	 ekle(deger);
  	}
	   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("       7)Tarihte Turk adiyla kurulan ilk Turk devleti hangisidir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("   A)Hunlar B)Hazarlar C)Gokturkler D)Osmanli Devleti\n\n");
 
printf("Cevap : "); scanf("%s",&cvp7);
 
  		if(cvp7=='c'||cvp7=='C')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp7);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp7);
 	 ekle(deger);
  	}
  		   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			
				printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("        8)Telefonun mucidi kimdir?? \n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("    A)Graham Bell B)Erikson C)Eistein D)Freud\n\n");
 
printf("Cevap : "); scanf("%s",&cvp8);
 
  		if(cvp8=='a'||cvp8=='A')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp8);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp8);
 	 ekle(deger);
  	}
	  
	  	   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			
					printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("      9)  Amerika Kitasini ikiye ayiran onemli su gecitinin adi nedir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("   A)Cebelitarik B)Umit Burnu C)Suveys Kanali D)Panama\n\n");


printf("Cevap : "); scanf("%s",&cvp9);
 
  		if(cvp9=='d'||cvp9=='D')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp9);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp9);
 	 ekle(deger);
  	}
	  	  
	  	   	printf("\n\n Sonraki sorunuz hazirlaniyor\n\n");
	printf("_____________yukleniyor_____________\n");
	f(12);
	 	system("CLS");
 
		getchar();
		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		
					printf("                                              Kazanilan toplam==");	printf("%dTL\n",deger);
printf("          10)Kuzey Atlantik Paktinin kisa yazilisi nedir?\n\n");

	  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 
printf("   A)NATO B)WHO C)UNICEF D)UNESCO\n\n");


printf("Cevap : "); scanf("%s",&cvp10);
 
  		if(cvp10=='a'||cvp10=='A')
   		{
 deger=deger+100000;
  ekle(deger);
  enqueue(cvp10);	
  		}
   		else
  	{ 
  s++;
 	 enqueue(cvp10);
 	 ekle(deger);
 	
  	}
  system("CLS");
	  		
  		 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
  		printf("\n\n");
  	 
	 	  			printf("Kazanilan toplam==");	printf("%dTL\n",deger);
		 printf("Cevaplar\n");
   		printf("Kullanici cevaplari\n");
   		int i=1;
   while(!isEmpty())
    { 
        int data = dequeue();
        printf("|%d:%c|",i,data);
        
        i++;
    }
    printf("\nDogru cevaplar\n");
       printf("| 1:D | 2:D | 3:C | 4:B | 5:D | 6:A | 7:C | 8:A | 9:D | 10:A | \n");
       m=m-s;
         printf("|%d tane dogru:%d tane yalnis|",m,s);
    	printf("\n\n");
   
  char isim[15];
			printf("\n\noyuncu  adiniz\n\n");
     scanf("%s",&isim);
if(deger<300000){
  	 		printf("TEKRAR DENE BENCE %s\n",&isim);
	   }
	   else if(deger>=300000 && deger<500000)
	   {
	   		printf("IYISIN BU ISTE %s\n",&isim);
	   }
	   else if(deger>=500000 && deger<800000)
	   {
	   		printf("BU BAYA YUKSEK %s \n",&isim);
	   }
	   else if(deger>=800000)
	   {
	   	printf("SEN  EINSTEININ KAYIP COCUGU FALAN MISIN :) %s\n",&isim);
	   }

deger=0;
  m=0;
  s=0;
	getch();
}
void anka(){
 a();
  
printf("Tekrar oynamak istermisiniz?\n");
printf("1=Devam\n");
printf("2=Bitir\n");
int secim;
scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			 b();
printf("Tekrar oynamak istermisiniz?\n");
printf("1=Tekrar Oyna\n");
printf("2=Bitir\n");
int sec;
scanf("%d",&sec);
if(sec=1){
anka();
}
else{
 return 0;
}
	case 2:
return 0;
	}
}
int main(){
	printf("\n\n\n\t_______________________-OYUN BASLIYOR-___________________\n");
printf("\t");
f(19);

system("CLS");
   anka();
}
