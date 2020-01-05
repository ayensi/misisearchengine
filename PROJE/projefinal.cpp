#include<iostream>
#include<string.h>
#include <fstream>
#include <math.h>
#include <sstream>
#include <time.h>
#include<locale.h>
#include <stdlib.h>
#define MIN(x,y) ((x) < (y) ? (x) : (y))
using namespace std;

struct st {  
	int boyut;  
	int top;  
	string *d; 
}; 
 
st *tanimla(){  
	st *s = new st;  
	s->boyut = 2;  
	s->top = -1;  
	s->d = NULL;  
	return s; 
}

class turkce{
	public :
	 int sayac1,sayac2,sayac3,sayac4;
	 

	



public :void kelimeyiBulitalyanca(string s3){
	int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("italiano.txt");
   //take the strings as input
   string s4;
   
while(getline(dosyam,s4)){
basla:
if(s3==s4){
	sayac1++;
	cout<<"                                                 ";
	cout<<"Kelime Ýtalyanca dosyasýnda bulundu."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla;
	}
	else{
		cout<<"                                                 ";
		cout<<"Ýtalyanca dosyasýnda kelime bulunamadý.."<<endl<<endl;
		
	}
	break;
}
}


   
for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
cout<<"                                                 ";
cout<<"Ýtalyanca dosyasýndaki benzer kelimeler: "<<endl;
    while ( getline(dosyam, s4) )
	{
		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}
   //stores the lenght of strings s1 and s2
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   
   if(dist[l2][l1]<3)
   {
   	sayac1++;
   	cout<<"                                                 ";
	   cout<<s4<<endl;
   }
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    dosyam.close();
  }
  cout<<"                                                 -----------------------"<<endl<<endl;
}


public :void kelimeyiBulingilizcebir(string s3){
	int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("english1.html",ios::binary|ios::in);
   //take the strings as input
   string s4;
   
while(getline(dosyam,s4)){
basla1:
if(s3==s4){
	sayac2++;
	cout<<"                                                 ";
	cout<<"Kelime Ýngilizce 1 dosyasýnda bulundu."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla1;
	}
	else{
		cout<<"                                                 ";
		cout<<"Ýngilizce dosyasýnda kelime bulunamadý.."<<endl<<endl;
		
	}
	break;
}
}

   
   for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
cout<<"                                                 ";
cout<<"Ýngilizce 1 dosyasýndaki benzer kelimeler: "<<endl;
    while ( getline(dosyam, s4) )
	{
		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}
   //stores the lenght of strings s1 and s2
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   
   if(dist[l2][l1]<3)
   {
   	sayac2++;
   	cout<<"                                                 ";
	   cout<<s4<<endl;
   }
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    dosyam.close();
  }
  cout<<"                                                 -----------------------"<<endl<<endl;
}


public :void kelimeyiBulingilizceiki(string s3){
	int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("english2.pdf",ios::binary|ios::in);
   //take the strings as input
   string s4;
   
 while(getline(dosyam,s4)){
basla2:
if(s3==s4){
	sayac3++;
	cout<<"                                                 ";
	cout<<"Kelime Ýngilizce 2 dosyasýnda bulundu."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla2;
	}
	else{
		cout<<"                                                 ";
		cout<<"Ýngilizce 2 dosyasýnda kelime bulunamadý.."<<endl<<endl;
		
	}
	break;
}
}

   for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
cout<<"                                                 ";
cout<<"Ýngilizce 2 dosyasýndaki benzer kelimeler: "<<endl;
    while ( getline(dosyam, s4) )
	{
		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}
   //stores the lenght of strings s1 and s2
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   
   if(dist[l2][l1]<3)
   {
   	sayac3++;
   	cout<<"                                                 ";
	   cout<<s4<<endl;
   }
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    dosyam.close();
  }
  cout<<"                                                 -----------------------"<<endl<<endl;
}


public :void kelimeyiBulalmanca(string s3){
 int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("deutsch.rtf",ios::binary|ios::in);
   //take the strings as input
   string s4;
   
while(getline(dosyam,s4)){
basla3:
if(s3==s4){
	sayac4++;
	cout<<"                                                 ";
	cout<<"Kelime Almanca dosyasýnda bulundu."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla3;
	}
	else{
		cout<<"                                                 ";
		cout<<"Almanca dosyasýnda kelime bulunamadý.."<<endl<<endl;
		
	}
	
}
break;
}

   for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
   	cout<<"                                                 ";
	   cout<<"Almanca dosyasýndaki benzer kelimeler: "<<endl;
    while ( getline(dosyam,s4) )
	{

		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}

   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   if(dist[l2][l1]<3)
   {
   	sayac4++;
	cout<<"                                                 ";
   	cout<<s4<<endl;
   }
   
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    
    
    dosyam.close();
  }
cout<<"                                                 -----------------------"<<endl<<endl;
}
};

class ingilizce{
	public :
	 int sayac5,sayac6,sayac7,sayac8;
	



public :void kelimeyiBulitalyanca1(string s3){
	int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("italiano.txt");
   //take the strings as input
   string s4;
   
while(getline(dosyam,s4)){
basla:
if(s3==s4){
	sayac5++;
	cout<<"                                                 ";
	cout<<"The word "<<s3<<" found in the Italiano file."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla;
	}
	else{
		cout<<"                                                 ";
		cout<<"No matches in the Italiano file.."<<endl<<endl;
		
	}
	break;
}
}


   
for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
cout<<"                                                 ";
cout<<"Similar words in the Italiano file: "<<endl;
    while ( getline(dosyam, s4) )
	{
		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}
   //stores the lenght of strings s1 and s2
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   
   if(dist[l2][l1]<3)
   {
   	sayac5++;
   	cout<<"                                                 ";
	   cout<<s4<<endl;
   }
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    dosyam.close();
  }
  cout<<"                                                 -----------------------"<<endl<<endl;
}


public :void kelimeyiBulingilizcebir1(string s3){
	int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("english1.html",ios::binary|ios::in);
   //take the strings as input
   string s4;
   
while(getline(dosyam,s4)){
basla1:
if(s3==s4){
	sayac6++;
	cout<<"                                                 ";
	cout<<"The word "<<s3<<" found in the English 1 file."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla1;
	}
	else{
		cout<<"                                                 ";
		cout<<"No matches in the English 1 file.."<<endl<<endl;
		
	}
	break;
}
}

   
   for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
cout<<"                                                 ";
cout<<"Similar words in the English 1 file: "<<endl;
    while ( getline(dosyam, s4) )
	{
		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}
   //stores the lenght of strings s1 and s2
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   
   if(dist[l2][l1]<3)
   {
   	sayac6++;
   	cout<<"                                                 ";
	   cout<<s4<<endl;
   }
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    dosyam.close();
  }
  cout<<"                                                 -----------------------"<<endl<<endl;
}


public :void kelimeyiBulingilizceiki1(string s3){
	int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("english2.pdf",ios::binary|ios::in);
   //take the strings as input
   string s4;
   
 while(getline(dosyam,s4)){
basla2:
if(s3==s4){
	sayac7++;
	cout<<"                                                 ";
	cout<<"The word "<<s3<<" found in the English 2 file."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla2;
	}
	else{
		cout<<"                                                 ";
		cout<<"No matches in the English 2 file.."<<endl<<endl;
		
	}
	break;
}
}

   for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
cout<<"                                                 ";
cout<<"Similar words in the English 2 file: "<<endl;
    while ( getline(dosyam, s4) )
	{
		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}
   //stores the lenght of strings s1 and s2
   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   
   if(dist[l2][l1]<3)
   {
   	sayac7++;
   	cout<<"                                                 ";
	   cout<<s4<<endl;
   }
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    dosyam.close();
  }
  cout<<"                                                 -----------------------"<<endl<<endl;
}


public :void kelimeyiBulalmanca1(string s3){
 int i,j,l1,l2,t,track;
   int dist[50][50];
   char s1[50],s2[50];
     ifstream dosyam("deutsch.rtf",ios::binary|ios::in);
   //take the strings as input
   string s4;
   
while(getline(dosyam,s4)){
basla3:
if(s3==s4){
	sayac8++;
	cout<<"                                                 ";
	cout<<"The word "<<s3<<" found in the Deutsch file."<<endl<<endl;
	break;
}
else{
	if(getline(dosyam,s4)){
		
	goto basla3;
	}
	else{
		cout<<"                                                 ";
		cout<<"No matches in the Deutsch file.."<<endl<<endl;
		
	}
	break;
}
}

   for(int i=0;i<s3.length();i++)
   {
   	s1[i]=s3[i];
   }
  if ( dosyam.is_open() ){
   	cout<<"                                                 ";
	   cout<<"Similar words in the Deutsch file: "<<endl;
    while ( getline(dosyam,s4) )
	{

		for(int l=0;l<s4.length();l++)
		{
			s2[l]=s4[l];
		}

   l1 = strlen(s1);
   l2= strlen(s2);
   for(i=0;i<=l1;i++) {
      dist[0][i] = i;
   }
   for(j=0;j<=l2;j++) {
      dist[j][0] = j;
   }
   for (j=1;j<=l1;j++) {
      for(i=1;i<=l2;i++) {
         if(s1[i-1] == s2[j-1]) {
            track= 0;
         } else {
            track = 1;
         }
         t = MIN((dist[i-1][j]+1),(dist[i][j-1]+1));
         dist[i][j] = MIN(t,(dist[i-1][j-1]+track));
      }
   }
   if(dist[l2][l1]<3)
   {
   	sayac8++;
	cout<<"                                                 ";
   	cout<<s4<<endl;
   }
   
   for(int l=0;l<50;l++)
		{
			s2[l]=0;
		}
    }
    
    
    dosyam.close();
  }
cout<<"                                                 -----------------------"<<endl<<endl;
}
};

void dosyayaYaz(string x) {  
	fstream dosyam;
	dosyam.open("AranmisKelimeler.txt",ios::out|ios::app);
	dosyam<<x<<endl;
	dosyam.close();	
	}
void push(string x,st *s){
	if(s->top==-1)   
	s->d = new string[s->boyut];  
	if (s->top >= s->boyut)  {   
	string *d2;   
	d2 = new string[s->boyut * 2];   
	for (int i = 0;i <= s->top;i++)    
	d2[i] = s->d[i];      
	s->d = d2;   
	s->boyut = s->boyut * 2;  
	}  
	s->d[++s->top] = x; 
}

void yazdir(st *s) { 
 	if(s->top==-1){
 		cout<<"                                                 Geçmiþ boþ.."<<endl<<endl;
	 }
 	for (int i = s->top;i > -1;i--)  {
	cout <<"                                                 "<<s->d[i]<<endl;;  
	 cout<<"                                                 ";
	 system("pause"); 	 
	 } 
	 }
	 

	


int main()
{
	setlocale(LC_ALL, "Turkish"); 
	turkce nesneR;
	int bulunankelimeR,bulunankelimeRa;
	ingilizce nesneRa;
	srand(time(0));
	int enfazla,enaz,rastgelesayi;
	enfazla=4;
	enaz=1;
	secimekrani1:
	rastgelesayi=rand() %4 + 1;
	
	ifstream dosyacagir("AranmisKelimeler.txt",ios::in);
	string gecmis;
	int bulunankelime=0;
	turkce nesne3;
	ingilizce nesne1;
	st *nesne;
	nesne = tanimla();
	string kelime;
	int secim;
	
	while(true){

	secimekrani:
cout<<"                                                 1-)Turkçe"<<endl<<endl;
cout<<"                                                 2-)English"<<endl<<endl;
cout<<"                                                 3-)Ya Hak"<<endl<<endl;
cout<<"                                                 4-)Hit Me"<<endl<<endl;
cout<<"                                                 5-)Hakkýnda"<<endl<<endl;
cout<<"                                                 6-)Geçmiþ"<<endl<<endl;
cout<<"                                                 0-)Cýkýþ"<<endl<<endl;
cout<<"                                                 ";
cin>>secim;
cout<<endl<<endl;
switch (secim){
	case 1:
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                     ..HOÞGELDÝNÝZ.."<<endl<<endl<<endl<<endl<<endl;

	cout<<"                                                 Ara: "<<endl;
	cout<<"                                                 ";
	cin>>kelime;
	cout<<endl;
	clock_t t;
		nesne3.sayac1=0;
	nesne3.sayac2=0;
	nesne3.sayac3=0;
	nesne3.sayac4=0;
	t = clock();
	
	nesne3.kelimeyiBulitalyanca(kelime);

	nesne3.kelimeyiBulalmanca(kelime);

	nesne3.kelimeyiBulingilizcebir(kelime);

	nesne3.kelimeyiBulingilizceiki(kelime);

	t = clock() - t;

	bulunankelime=nesne3.sayac1+nesne3.sayac2+nesne3.sayac3+nesne3.sayac4;
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                 ";
	cout<<"0."<<t<<" saniyede "<<bulunankelime<<" kelime bulundu."<<endl<<endl;
	system("pause");
	push(kelime,nesne);
	dosyayaYaz(kelime);break;
	
	
	case 2:
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                     ..WELCOME.."<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                 Search: "<<endl;
	cout<<"                                                 ";
	cin>>kelime;
	cout<<endl;
	nesne1.sayac5=0;
	nesne1.sayac6=0;
	nesne1.sayac7=0;
	nesne1.sayac8=0;
	t = clock();
	nesne1.kelimeyiBulitalyanca1(kelime);

	nesne1.kelimeyiBulalmanca1(kelime);

	nesne1.kelimeyiBulingilizcebir1(kelime);

	nesne1.kelimeyiBulingilizceiki1(kelime);

	t = clock() - t;
	bulunankelime=nesne1.sayac5+nesne1.sayac6+nesne1.sayac7+nesne1.sayac8;
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                 ";
	cout<<bulunankelime<<" words found in 0."<<t<<" seconds."<<endl<<endl;
	system("pause");
	push(kelime,nesne);
	dosyayaYaz(kelime);break;
	
	
	case 3:
	nesneR.sayac1=0;
	nesneR.sayac2=0;
	nesneR.sayac3=0;
	nesneR.sayac4=0;
	clock_t saat;
	cout<<"                                                 Ara: "<<endl;
	cout<<"                                                 ";
	cin>>kelime;
	cout<<endl;
	saat=clock();
	switch(rastgelesayi){
		case 1:
			nesneR.kelimeyiBulitalyanca(kelime);
			saat = clock() - saat;
			bulunankelimeR=nesneR.sayac1;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
			cout<<"0."<<saat<<" saniyede "<<bulunankelimeR<<" kelime bulundu."<<endl<<endl;
			cout<<"                                                 ";
			system("pause");
			push(kelime,nesne);
			dosyayaYaz(kelime);break;
			
			break;
		case 2:
			nesneR.kelimeyiBulingilizcebir(kelime);
			saat = clock() - saat;
			bulunankelimeR=nesneR.sayac2;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
			cout<<"0."<<saat<<" saniyede "<<bulunankelime<<" kelime bulundu."<<endl<<endl;
			system("pause");
			push(kelime,nesne);
			dosyayaYaz(kelime);break;
			
			break;
		case 3:
			nesneR.kelimeyiBulingilizceiki(kelime);
			saat = clock() - saat;
			bulunankelimeR=nesneR.sayac3;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
			cout<<"0."<<saat<<" saniyede "<<bulunankelime<<" kelime bulundu."<<endl<<endl;
			cout<<"                                                 ";
			system("pause");
			push(kelime,nesne);
			dosyayaYaz(kelime);break;
			
			break;
		case 4:
			nesneR.kelimeyiBulalmanca(kelime);
			saat = clock() - saat;
			bulunankelimeR=nesneR.sayac4;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
			cout<<"0."<<saat<<" saniyede "<<bulunankelime<<" kelime bulundu."<<endl<<endl;
			cout<<"                                                 ";
			system("pause");
			push(kelime,nesne);
			dosyayaYaz(kelime);break;
			
			break;
		default:
			break;
	}
	
		break;


case 4:
	nesneRa.sayac5=0;
	nesneRa.sayac6=0;
	nesneRa.sayac7=0;
	nesneRa.sayac8=0;
	clock_t saat1;
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                     ..WELCOME.."<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                 Search: "<<endl;
	cout<<"                                                 ";
	cin>>kelime;
	cout<<endl;
	saat1=clock();
	switch(rastgelesayi){
		case 1:
			nesneRa.kelimeyiBulitalyanca1(kelime);
			saat1 = clock() - saat1;
			bulunankelimeRa=nesneRa.sayac5;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
		cout<<bulunankelimeRa<<" words found in 0."<<saat1<<" seconds."<<endl<<endl;
		cout<<"                                                 ";
		system("pause");
		push(kelime,nesne);
		dosyayaYaz(kelime);break;
			
			break;
		case 2:
			nesneRa.kelimeyiBulingilizcebir1(kelime);
			saat1 = clock() - saat1;
			bulunankelimeRa=nesneRa.sayac6;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
		cout<<bulunankelimeRa<<" words found in 0."<<saat1<<" seconds."<<endl<<endl;
		cout<<"                                                 ";
		system("pause");
		push(kelime,nesne);
		dosyayaYaz(kelime);break;
			
			break;
		case 3:
			nesneRa.kelimeyiBulingilizceiki1(kelime);
			saat1 = clock() - saat1;
			bulunankelimeRa=nesneRa.sayac7;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
		cout<<bulunankelimeRa<<" words found in 0."<<saat1<<" seconds."<<endl<<endl;
		cout<<"                                                 ";
		system("pause");
		push(kelime,nesne);
		dosyayaYaz(kelime);break;
			
			break;
		case 4:
			nesneRa.kelimeyiBulalmanca1(kelime);
			saat1 = clock() - saat1;
			bulunankelimeRa=nesneRa.sayac8;
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"                                                 ";
		cout<<bulunankelimeRa<<" words found in 0."<<saat1<<" seconds."<<endl<<endl;
		cout<<"                                                 ";
		system("pause");
		push(kelime,nesne);
		dosyayaYaz(kelime);break;
			
			break;
		default:
			break;
	}
	
		break;








	case 5:cout<<"                                                 Levenshtein Mesafe Algoritmasi"<<endl<<endl;
	cout<<"                                                 Hem yer hem zaman karmasikligi icin O(NxM)"<<endl<<endl;
	cout<<"                                                 Ýki dizilim arasýndaki benzerliði derecelendirmek için kullanýlýr."<<endl<<endl;
	cout<<"                                                 Pratikte arama sonuçlarýnda kelimeler arasýndaki benzerliði"<<endl<<"                                                 "<<
															"derecelendirmek için kullanýlmaktadýr."<<endl<<endl;
	cout<<"                                                 Basitçe, iki dizi, iki kelime, iki cümle gibi varlýklar"<<endl<<"                                                 "<<
															"arasýndaki deðiþtirme ve ekleme iþlemlerini tutar."<<endl<<endl;
	cout<<"                                                 Algoritma deðiþim deðerini bulmak için iki boyutlu bir dizi (matris)"<<endl<<"                                                 "<<
															"üzerinde kelimelerin farklý olan harfleri için deðer arttýrýmýna gider."<<endl<<endl;
	
		break;
	
	
	case 6:{
	
	
	string aranan;
	int secim5;
	ifstream okuma;
	
	okuma.open("AranmisKelimeler.txt",ios::in);
	while(okuma>>aranan){
		gecmis:
		cout<<"                                                 "<<aranan<<endl<<endl;
		cout<<"                                                 "<<aranan<<" kelimesini tekrar aratmak ister misiniz?"<<endl;
		cout<<"                                                 1-)Evet"<<endl;
		cout<<"                                                 2-)Hayýr"<<endl<<endl;
		cout<<"                                                 ";
		cin>>secim5;
		if(secim5==1){
			clock_t t;
		nesne3.sayac1=0;
	nesne3.sayac2=0;
	nesne3.sayac3=0;
	nesne3.sayac4=0;
	t = clock();
	
	nesne3.kelimeyiBulitalyanca(aranan);

	nesne3.kelimeyiBulalmanca(aranan);

	nesne3.kelimeyiBulingilizcebir(aranan);

	nesne3.kelimeyiBulingilizceiki(aranan);

	t = clock() - t;

	bulunankelime=nesne3.sayac1+nesne3.sayac2+nesne3.sayac3+nesne3.sayac4;
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                 ";
	cout<<"0."<<t<<" saniyede "<<bulunankelime<<" kelime bulundu."<<endl<<endl;
	system("pause");
	break;
			
		}
		if(secim5==2){
			cout<<"                                                 Bir sonraki kelime: "<<endl;
		}
	
	
	
	}break;
	
		}
		
	
	case 0:
	system("AranmisKelimeler.txt");
	exit(0); break;
	
	default:
		cout<<"                                                 Yanlýþ bir seçim yaptýnýz."<<endl<<endl;
		goto secimekrani;
		break;
}
	cout<<"                                                 ";system("pause");
	system("cls");
	}
}
