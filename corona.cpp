#include"corona.h"

// Temel veri islemlerinin yapildigi class yapisi

Corona::Corona(){
	amount = 0;
			
	totalTestNumberData=0;
	totalCaseNumberData=0;
	totalDeathNumberData=0;
	totalCriticalCareNumberData=0;
	totalIntubateNumberData=0;
	totalRecoveryNumberData=0;
	totalQuarantineNumberData=0;
}

// Adding test number member function

void Corona::addingTest(){
	addingTestTheme();
	gotoxy(24,6);
	cout<<"GIRECEGINIZ SAYI BUGUN YAPILAN";
	gotoxy(28,8);
	cout<<"TEST SAYISI OLMALIDIR";
	gotoxy(23,10);
	cout<<"TOPLAM TEST SAYISINA EKLENECEKTIR";
	gotoxy(15,22);
	cout<<"Miktari Giriniz:[]";
	gotoxy(34,22);
	cin>>totalTestNumberData;
	addingTestTheme();
	gotoxy(20,6);
	cout<<"ISLEM GERCEKLESTI";Sleep(250);
	mainmenu();
}

//Kullanicini verileri kaydetmesini saglayan member function

void Corona::adding(){
	addingTheme();
	gotoxy(17,5);
	string MenuItem[6];
	MenuItem[0]="[1] YENI HASTA EKLEME";
	MenuItem[1]="[2] MEVCUT HASTA EKLEME";
	MenuItem[2]="[3] ISLEMI IPTAL ET";
	
	for(int menu=0;menu<=2;menu++){
		gotoxy(20,6+(menu*2));
		cout<<MenuItem[menu];
	}
	gotoxy(15,22);
	cout<<"Yapmak istenilen islemi giriniz:[]";
	gotoxy(50,22);
	choice = getch();
	
	if(choice == '1'){
		addingTheme();
		MenuItem[0]="[1] YOGUN BAKIM HASTA EKLEME";
		MenuItem[1]="[2] KARANTINA HASTA EKLEME";
		MenuItem[2]="[3] ENTUBE HASTA EKLEME";
		MenuItem[3]="[4] VEFAT EKLEME";
		MenuItem[4]="[X] ISLEMI IPTAL ET";
		
		for(int menu=0;menu<=4;menu++){
			gotoxy(20,6+(menu*2));
			cout<<MenuItem[menu];
		}
		gotoxy(15,22);
		cout<<"Yapmak istenilen islemi giriniz:[]";
		gotoxy(50,22);
		choice = getch();

		switch(choice){
			case '1':
				addingTheme();
				gotoxy(20,6);
				cout<<"YOGUN BAKIMA YENI HASTA EKLENECEKTIR...";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					addingTheme();
					gotoxy(20,6);
					cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					totalCriticalCareNumberData += amount;
					totalCaseNumberData += amount;
					gotoxy(20,8);
					cout<<"ISLEM GERCEKLESTI";Sleep(500);
					mainmenu();
				}
				
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"'-' DEGER GIRILEMEZ...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
				
			case '2':
				addingTheme();
				gotoxy(20,6);
				cout<<"KARANTINAYA YENI HASTA EKLENECEKTIR...";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					addingTheme();
					gotoxy(20,6);
					cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					totalQuarantineNumberData += amount;
					totalCaseNumberData += amount;
					gotoxy(20,8);
					cout<<"ISLEM GERCEKLESTI";Sleep(500);
					mainmenu();
				}
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"'-' DEGER GIRILEMEZ...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
			case '3':
				addingTheme();
				gotoxy(20,6);
				cout<<"ENTUBEYE YENI HASTA EKLENECEKTIR...";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					addingTheme();
					gotoxy(20,6);
					cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					totalIntubateNumberData += amount;
					totalCaseNumberData += amount;
					gotoxy(20,8);
					cout<<"ISLEM GERCEKLESTI";Sleep(500);
					mainmenu();
				}
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"'-' DEGER GIRILEMEZ...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
			case '4':
				addingTheme();
				gotoxy(20,6);
				cout<<"VEFATA YENI HASTA EKLENECEKTIR...";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					addingTheme();
					gotoxy(20,6);
					cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					totalDeathNumberData += amount;
					totalCaseNumberData += amount;
					gotoxy(20,8);
					cout<<"ISLEM GERCEKLESTI";Sleep(500);
					mainmenu();
				}
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"'-' DEGER GIRILEMEZ...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
			case 'X':
				addingTheme();
				gotoxy(20,6);
				cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
				mainmenu();
				break;
			case 'x':
				addingTheme();
				gotoxy(20,6);
				cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
				mainmenu();
				break;
			default:
				addingTheme();
				gotoxy(20,6);
				cout<<"YANLIS BIR DEGER GIRILDI...";
				gotoxy(20,8);
				cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
				mainmenu();		
		}	
	}
	
	else if(choice == '2'){
		addingTheme();
		MenuItem[0]="[1] YOGUN BAKIM HASTA EKLEME";
		MenuItem[1]="[2] KARANTINA HASTA EKLEME";
		MenuItem[2]="[3] ENTUBE HASTA EKLEME";
		MenuItem[3]="[4] VEFAT EKLEME";
		MenuItem[4]="[X] ISLEMI IPTAL ET";
		
		for(int menu=0;menu<=4;menu++){
			gotoxy(20,6+(menu*2));
			cout<<MenuItem[menu];
		}
		gotoxy(15,22);
		cout<<"Yapmak istenilen islemi giriniz:[]";
		gotoxy(50,22);
		choice = getch();
		
		switch(choice){
			case '1':
				addingTheme();
				gotoxy(20,6);
				cout<<"YOGUN BAKIMA SADECE KARANTINADAN HASTA";
				gotoxy(34,8);
				cout<<"EKLENEBILIR";
				gotoxy(20,10);
				cout<<"GIRILEN MIKTAR KADAR HASTA KARANTINA HASTA";
				gotoxy(27,12);
				cout<<"SAYISINDAN CIKARILACAKTIR";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					if(totalQuarantineNumberData > 0 && totalQuarantineNumberData >= totalCriticalCareNumberData){
						addingTheme();
						gotoxy(20,6);
						cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						totalCriticalCareNumberData += amount;
						totalQuarantineNumberData -= amount;
						gotoxy(20,8);
						cout<<"ISLEM GERCEKLESTI";Sleep(500);
						mainmenu();
					}
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<"GIRILEN MIKTARDA KARANTINA HASTASI";
						gotoxy(30,8);
						cout<<"BULUNMAMAKTADIR";
						gotoxy(20,10);
						cout<<"ISLEM IPTAL EDILDI...";
						gotoxy(20,12);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();		
					}
				}
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"'-' DEGER GIRILEMEZ...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
			case '2':
				addingTheme();
				gotoxy(20,6);
				cout<<"ENTUBEYE SADECE YOGUN BAKIMDAN EKLEME";
				gotoxy(34,8);
				cout<<"YAPILABILIR";
				gotoxy(20,10);
				cout<<"GIRILEN MIKTAR KADAR HASTA YOGUN BAKIMDAKI";
				gotoxy(24,12);
				cout<<"HASTA SAYISINDAN CIKARILACAKTIR";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					if(totalCriticalCareNumberData > 0 && totalCriticalCareNumberData >= totalIntubateNumberData){
						addingTheme();
						gotoxy(20,6);
						cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						totalIntubateNumberData += amount;
						totalCriticalCareNumberData -= amount;
						gotoxy(20,8);
						cout<<"ISLEM GERCEKLESTI";Sleep(500);
						mainmenu();
					}
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<"GIRILEN MIKTARDA YOGUN BAKIM HASTASI";
						gotoxy(30,8);
						cout<<"BULUNMAMAKTADIR";
						gotoxy(20,10);
						cout<<"ISLEM IPTAL EDILDI...";
						gotoxy(20,12);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();				
					}
				}
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"'-' DEGER GIRILEMEZ...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
				
			case '3':
				addingTheme();
				gotoxy(20,6);
				cout<<"VEFATA SADECE YOGUN BAKIMDAN VEYA ENTUBEDEN";
				gotoxy(32,8);
				cout<<"EKLEME YAPILABILIR";
				
				MenuItem[0]="[1] YOGUN BAKIM HASTA EKLEME";
				MenuItem[1]="[2] ENTUBE HASTA EKLEME";
				
				for(int menu=0;menu<=1;menu++){
					gotoxy(20,10+(menu*2));
					cout<<MenuItem[menu];
				}
				gotoxy(15,22);
				cout<<"Yapmak istenilen islemi giriniz:[]";
				gotoxy(50,22);
				choice = getch();
				
				if(choice=='1'){
					addingTheme();
					gotoxy(20,6);
					cout<<"VEFATA YAPILACAK OLAN EKLEME YOGUN BAKIM";
					gotoxy(24,8);
					cout<<"HASTA SAYISINDAN CIKARILACAKTIR";
					gotoxy(15,22);
					cout<<"Miktari Giriniz:[]";
					gotoxy(34,22);
					cin>>amount;
					
					if(amount>=0){
						
						if(totalCriticalCareNumberData > 0 && totalCriticalCareNumberData >= totalDeathNumberData){
							addingTheme();
							gotoxy(20,6);
							cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							totalDeathNumberData += amount;
							totalCriticalCareNumberData -= amount;
							gotoxy(20,8);
							cout<<"ISLEM GERCEKLESTI";Sleep(500);
							mainmenu();
						}
						
						else{
							addingTheme();
							gotoxy(20,6);
							cout<<"GIRILEN MIKTARDA YOGUN BAKIM HASTASI";
							gotoxy(30,8);
							cout<<"BULUNMAMAKTADIR";
							gotoxy(20,10);
							cout<<"ISLEM IPTAL EDILDI...";
							gotoxy(20,12);
							cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							mainmenu();	
						}
						}		
						
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<endl<<"'-' DEGER GIRILEMEZ...";
						gotoxy(20,8);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();
					}
				}
				
				else if(choice=='2'){
					addingTheme();
					gotoxy(22,6);
					cout<<"VEFATA YAPILACAK OLAN EKLEME ENTUBE";
					gotoxy(24,8);
					cout<<"HASTA SAYISINDAN CIKARILACAKTIR";
					gotoxy(15,22);
					cout<<"Miktari Giriniz:[]";
					gotoxy(34,22);
					cin>>amount;
					
					if(amount>=0){
						
						if(totalIntubateNumberData > 0 && totalIntubateNumberData >= totalDeathNumberData){
							addingTheme();
							gotoxy(20,6);
							cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							totalDeathNumberData += amount;
							totalIntubateNumberData -= amount;
							gotoxy(20,8);
							cout<<"ISLEM GERCEKLESTI";Sleep(500);
							mainmenu();							
						}
						
						else{
							addingTheme();
							gotoxy(24,6);
							cout<<"GIRILEN MIKTARDA ENTUBE HASTASI";
							gotoxy(32,8);
							cout<<"BULUNMAMAKTADIR";
							gotoxy(20,10);
							cout<<"ISLEM IPTAL EDILDI...";
							gotoxy(20,12);
							cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							mainmenu();
						}
					}
					
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<"'-' DEGER GIRILEMEZ...";
						gotoxy(20,8);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();
					}
				}
				
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"YANLIS BIR DEGER GIRILDI...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				break;
			
			case '4':
				addingTheme();
				gotoxy(20,6);
				cout<<"HANGI BOLUMDEN IYILESEN HASTAYA EKLEME";
				gotoxy(34,8);
				cout<<"YAPILACAK?";
				
				MenuItem[0]="[1] KARANTINA HASTA EKLEME";
				MenuItem[1]="[2] YOGUN BAKIM HASTA EKLEME";
				MenuItem[2]="[3] ENTUBE HASTA EKLEME";
				
				for(int menu=0;menu<=2;menu++){
					gotoxy(20,10+(menu*2));
					cout<<MenuItem[menu];
				}
				gotoxy(15,22);
				cout<<"Yapmak istenilen islemi giriniz:[]";
				gotoxy(50,22);
				choice = getch();
				
				if(choice=='1'){
					addingTheme();
					gotoxy(23,6);
					cout<<"KARANTINADAN IYILESEN HASTAYA EKLEME";
					gotoxy(33,8);
					cout<<"YAPILACAKTIR";
					gotoxy(15,22);
					cout<<"Miktari Giriniz:[]";
					gotoxy(34,22);
					cin>>amount;
					
					if(amount>=0){
						
						if(totalQuarantineNumberData > 0 && totalQuarantineNumberData >= totalRecoveryNumberData){
							addingTheme();
							gotoxy(20,6);
							cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							totalRecoveryNumberData += amount;
							totalQuarantineNumberData -= amount;
							gotoxy(20,8);
							cout<<"ISLEM GERCEKLESTI...";Sleep(500);
							mainmenu();
						}
						
						else{
							addingTheme();
							gotoxy(24,6);
							cout<<"GIRILEN MIKTARDA KARANTINA HASTASI";
							gotoxy(30,8);
							cout<<"BULUNMAMAKTADIR";
							gotoxy(20,10);
							cout<<"ISLEM IPTAL EDILDI...";
							gotoxy(20,12);
							cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							mainmenu();
						}
					}
					
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<"'-' DEGER GIRILEMEZ...";
						gotoxy(20,8);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();
					}
				}
				
				else if(choice=='2'){
					addingTheme();
					gotoxy(23,6);
					cout<<"YOGUN BAKIMDAN IYILESEN HASTAYA EKLEME";
					gotoxy(33,8);
					cout<<"YAPILACAKTIR";
					gotoxy(15,22);
					cout<<"Miktari Giriniz:[]";
					gotoxy(34,22);
					cin>>amount;
					
					if(amount>=0){
						
						if(totalCriticalCareNumberData > 0 && totalCriticalCareNumberData >= totalRecoveryNumberData){
							addingTheme();
							gotoxy(20,6);
							cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							totalRecoveryNumberData += amount;
							totalCriticalCareNumberData -= amount;
							gotoxy(20,8);
							cout<<"ISLEM GERCEKLESTI...";Sleep(500);
							mainmenu();
						}
						
						else{
							addingTheme();
							gotoxy(24,6);
							cout<<"GIRILEN MIKTARDA YOGUN BAKIM HASTASI";
							gotoxy(30,8);
							cout<<"BULUNMAMAKTADIR";
							gotoxy(20,8),
							cout<<"ISLEM IPTAL EDILDI...";
							gotoxy(20,10);
							cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							mainmenu();
						}
					}
					
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<"'-' DEGER GIRILEMEZ...";
						gotoxy(20,8);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();
					}
				}
				
				else if(choice=='3'){
					addingTheme();
					gotoxy(23,6);
					cout<<"ENTUBEDEN IYILESEN HASTAYA EKLEME";
					gotoxy(33,8);
					cout<<"YAPILACAKTIR";
					gotoxy(15,22);
					cout<<"Miktari Giriniz:[]";
					gotoxy(34,22);
					cin>>amount;
					
					if(amount>=0){
						
						if(totalIntubateNumberData > 0 && totalIntubateNumberData >= totalRecoveryNumberData){
							addingTheme();
							gotoxy(20,6);
							cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							totalRecoveryNumberData += amount;
							totalIntubateNumberData -= amount;
							gotoxy(20,8);
							cout<<"ISLEM GERCEKLESTI...";Sleep(500);
							mainmenu();
						}
						
						else{
							addingTheme();
							gotoxy(24,6);
							cout<<"GIRILEN MIKTARDA ENTUBE HASTASI";
							gotoxy(30,8);
							cout<<"BULUNMAMAKTADIR";
							gotoxy(20,10);
							cout<<"ISLEM IPTAL EDILDI...";
							gotoxy(20,12);
							cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
							mainmenu();
						}
					}
					
					else{
						addingTheme();
						gotoxy(20,6);
						cout<<"'-' DEGER GIRILEMEZ...";
						gotoxy(20,8);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();
					}
									
				}
				else{
					addingTheme();
					gotoxy(20,6);
					cout<<"YANLIS BIR DEGER GIRILDI...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
				
			case '5':
				mainmenu();
				break;
		}
	}
	
	else if(choice == '3'){
		mainmenu();
	}
}

//Kullanicinin guncel veriler uzerinde cikarma yapabilmesini saglayan member function

void Corona::extraction(){
	extractionTheme();
	gotoxy(17,5);
	string MenuItem[6];
	MenuItem[0]="[1] YOGUN BAKIM HASTA CIKARMA";
	MenuItem[1]="[2] ENTUBE HASTA CIKARMA";
	MenuItem[2]="[3] KARANTINA HASTA CIKARMA";
	MenuItem[3]="[4] ISLEMI IPTAL ET";
	
	for(int menu=0;menu<=3;menu++){
		gotoxy(20,6+(menu*2));
		cout<<MenuItem[menu];
	}
	gotoxy(15,22);
	cout<<"Yapmak istenilen islemi giriniz:[]";
	gotoxy(50,22);
	choice = getch();

	switch(choice){
		
		case '1':
			extractionTheme();
			gotoxy(20,6);
			cout<<"YOGUN BAKIMDAN CIKARILAN HASTALAR IYILESEN";
			gotoxy(30,8);
			cout<<"SAYISINA EKLENECEKTIR";
			gotoxy(15,22);
			cout<<"Miktari Giriniz:[]";
			gotoxy(34,22);
			cin>>amount;
			
			if(amount>=0){
				
				if(totalCriticalCareNumberData - amount >= 0){
					extractionTheme();
					gotoxy(20,6);
					cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					totalCriticalCareNumberData -= amount;
					totalRecoveryNumberData += amount;
					gotoxy(20,8);
					cout<<"ISLEM GERCEKLESTI...";Sleep(500);
					mainmenu();
				}
				
				else{
					extractionTheme();
					gotoxy(20,6);
					cout<<"TOPLAM YOGUN BAKIM HASTA SAYISI 0 dan KUCUK";
					gotoxy(37,8);
					cout<<"OLAMAZ";
					gotoxy(20,10);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
			}
			
			else{
				extractionTheme();
				gotoxy(20,6);
				cout<<"YANLIS BIR DEGER GIRILDI...";
				gotoxy(20,8);
				cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
				mainmenu();
			}
			break;
			
		case '2':
			extractionTheme();
			gotoxy(20,6);
			cout<<"ENTUBEDEN CIKARILACAK OLAN HASTA SAYISININ";
			gotoxy(28,8);
			cout<<"EKLENECEGI BOLUMU SECINIZ";
			MenuItem[0]="[1] YOGUN BAKIMA EKLE";
			MenuItem[1]="[2] IYILESEN HASTAYA EKLE";
	
			for(int menu=0;menu<=1;menu++){
				gotoxy(20,10+(menu*2));
				cout<<MenuItem[menu];
			}
			gotoxy(15,22);
			cout<<"Yapmak istenilen islemi giriniz:[]";
			gotoxy(50,22);
			choice = getch();	
			
			if(choice == '1'){
				extractionTheme();
				gotoxy(21,6);
				cout<<"ENTUBEDEN CIKARILACAK OLAN HASTA SAYISI";
				gotoxy(27,8);
				cout<<"YOGUN BAKIMA EKLENECEKTIR";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;
				
				if(amount>=0){
					if(totalIntubateNumberData - amount >= 0){
						extractionTheme();
						gotoxy(20,6);
						cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						totalIntubateNumberData -= amount;
						totalCriticalCareNumberData += amount;
						gotoxy(20,8);
						cout<<"ISLEM GERCEKLESTI...";Sleep(500);
						mainmenu();
					}
					
					else{
						extractionTheme();
						gotoxy(20,6);
						cout<<"TOPLAM ENTUBE HASTA SAYISI 0 dan KUCUK";
						gotoxy(34,8);
						cout<<"OLAMAZ";
						gotoxy(20,10);
						cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						mainmenu();
					}
				}
				
				else{
					extractionTheme();
					gotoxy(20,6);
					cout<<"YANLIS BIR DEGER GIRILDI...";
					gotoxy(20,8);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();	
				}
			}
			
			else if(choice == '2'){
				extractionTheme();
				gotoxy(21,6);
				cout<<"ENTUBEDEN CIKARILACAK OLAN HASTA SAYISI";
				gotoxy(25,8);
				cout<<"IYILESEN SAYISINA EKLENECEKTIR";
				gotoxy(15,22);
				cout<<"Miktari Giriniz:[]";
				gotoxy(34,22);
				cin>>amount;

				if(amount>=0){
					
					if(totalIntubateNumberData - amount >= 0){
						extractionTheme();
						gotoxy(20,6);
						cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
						totalIntubateNumberData -= amount;
						totalRecoveryNumberData += amount;
						cout<<"ISLEM GERCEKLESTI...";Sleep(500);
						mainmenu();
					}
					
					else{
						extractionTheme();
						gotoxy(20,6);
						cout<<"TOPLAM ENTUBE HASTA SAYISI 0 dan KUCUK";
						gotoxy(37,8);
						cout<<"OLAMAZ";
						mainmenu();
					}
				}
				
				else{
					extractionTheme();
					gotoxy(20,6);
					cout<<"YANLIS BIR DEGER GIRILDI...";
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();	
				}
			}
			
			else{
				extractionTheme();
				gotoxy(20,6);
				cout<<"YANLIS BIR DEGER GIRILDI...";
				gotoxy(20,8);
				cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
				mainmenu();
			}
			break;
			
		case '3':
			extractionTheme();
			gotoxy(20,6);
			cout<<"KARANTINADAN CIKARILAN HASTALAR IYILESEN";
			gotoxy(29,8);
			cout<<"SAYISINA EKLENECEKTIR";
			gotoxy(15,22);
			cout<<"Miktari Giriniz:[]";
			gotoxy(34,22);
			cin>>amount;
			
			if(amount>=0){
				
				if(totalQuarantineNumberData - amount >= 0){
					extractionTheme();
					gotoxy(20,6);
					cout<<"ISLEM GERCEKLESIYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					totalQuarantineNumberData -= amount;
					totalRecoveryNumberData += amount;
					gotoxy(20,8);
					cout<<"ISLEM GERCEKLESTI...";Sleep(500);
					mainmenu();
				}
				
				else{
					extractionTheme();
					gotoxy(20,6);
					cout<<"TOPLAM KARANTINA HASTA SAYISI 0 dan KUCUK";
					gotoxy(37,8);
					cout<<"OLAMAZ";
					gotoxy(20,10);
					cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
					mainmenu();
				}
			}
			
			else{
				extractionTheme();
				gotoxy(20,6);
				cout<<"YANLIS BIR DEGER GIRILDI...";
				cout<<"ANA MENU'YE DONULUYOR";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";
				mainmenu();
			}
			break;
			
		case '4':
			mainmenu();
			break;
			
	}
}

//Guncel verilerin goruntulenmesini saglayan member function

void Corona::viewing(){
	viewingTheme();
	gotoxy(20,6);
	cout<<"Toplam Test Sayisi       :"<<totalTestNumberData;
	gotoxy(20,8);
	cout<<"Toplam Vaka Sayisi       :"<<totalCaseNumberData;
	gotoxy(20,10);
	cout<<"Toplam Vefat Sayisi      :"<<totalDeathNumberData;
	gotoxy(20,12);
	cout<<"Toplam Yogun Bakim Sayisi:"<<totalCriticalCareNumberData;
	gotoxy(20,14);
	cout<<"Toplam Entube Sayisi     :"<<totalIntubateNumberData;
	gotoxy(20,16);
	cout<<"Toplam Iyilesen Sayisi   :"<<totalRecoveryNumberData;
	gotoxy(20,18);
	cout<<"Toplam Karantina Sayisi  :"<<totalQuarantineNumberData;
	gotoxy(26,21);
	cout<<"MEVCUT RAKAMLAR GORUNTULENDI";
	gotoxy(28,22);
	cout<<"SAGLIGIN ICIN #EVDEKAL";
	gotoxy(10,25);
	cout<<"Ana Menu'ye donmek icin herhangi bir tusa basiniz:[]";
	gotoxy(63,25);
	getch();
	mainmenu();
}

//Verilerin program tekrar acilacagi zaman kullanilabilmesi icin .txt dosyasina kayit yapan member function

void Corona::save(){
	ofstream writeData("datas.txt", ios::out);
	savingTheme();
	
	if(writeData.is_open()){
		gotoxy(20,6);
		cout<<"VERILER KAYDEDILIYOR";Sleep(250);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(250);
		writeData<<totalTestNumberData<<endl;
		writeData<<totalCaseNumberData<<endl;
		writeData<<totalDeathNumberData<<endl;
		writeData<<totalCriticalCareNumberData<<endl;
		writeData<<totalIntubateNumberData<<endl;
		writeData<<totalRecoveryNumberData<<endl;
		writeData<<totalQuarantineNumberData<<endl;
		writeData<<renk<<endl;
		gotoxy(20,8);
		cout<<"VERILER KAYDEDILDI";Sleep(250);
	}
	
	else{
		gotoxy(20,6);
		cout<<"VERILER KAYIT EDILEMEDI";
		gotoxy(20,8);
		cout<<"LUTFEN TEKRAR DENEYINIZ";
		Sleep(250);	
	}
	
	mainmenu();
	writeData.close();
}

//Onceden kaydedilen verilerin okunmasini saglayan member function

void Corona::read(){
	ifstream readData("datas.txt", ios::in);
	int controller[7];
	int i=0;
	
	if(readData.is_open()){
		while(i<7){
			readData>>controller[i];
			i++;			
		}
		readData.seekg(8,ios::beg); // For the latest colour, setting the cursor eight line from begining
		getline(readData,renk);
		
		totalTestNumberData = controller[0];
		totalCaseNumberData = controller[1];
		totalDeathNumberData = controller[2];
		totalCriticalCareNumberData = controller[3];
		totalIntubateNumberData = controller[4];
		totalRecoveryNumberData = controller[5];
		totalQuarantineNumberData = controller[6];
		
		gotoxy(25,27);
		cout<<"VERI OKUMA BASARILI";	
	}
	
	else{
		gotoxy(25,27);
		cout<<"VERI OKUMA BASARISIZ";
		}
		
	readData.close();
	
//	if(Renk == "Kirmizi")
//		system("color 4");
//		
//	else if(Renk == "Mavi")
//		system("color 3");
//	
//	else if(Renk == "Yesil")
//		system("color 2");
//	
//	else if(Renk == "Beyaz")
//		system("color 7");
}

//Konsol ekranini aktif olarak kullanabilmek icin koordinat fonksiyonu

void gotoxy(short x,short y){
	
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

}

//Ana menu fonksiyonu

void Corona::mainmenu(){
	maintheme();
    string MenuItem[8];
	MenuItem[0]="[1] TEST EKLEME";
	MenuItem[1]="[2] HASTA EKLEME";
	MenuItem[2]="[3] HASTA CIKARMA";
	MenuItem[3]="[4] ISTATISTIKLERI GORUNTULEME";
	MenuItem[4]="[5] VERILERI KAYDETME";
	MenuItem[5]="[6] CIKTI ALMA";
	MenuItem[6]="[7] AYARLAR";
	MenuItem[7]="[X] PROGRAMDAN CIKIS";
	
	for(int menu=0;menu<=7;menu++){
		gotoxy(20,6+(menu*2));
		cout<<MenuItem[menu];
	}
	gotoxy(15,26);
	cout<<"Yapmak istenilen islemi giriniz:[]";
	gotoxy(50,26);
	
}

//Printing data out

void Corona::printingOut(){
	printingOutTheme();
	ofstream writeData("output.txt", ios::out);
	
	if(writeData.is_open()){
		gotoxy(20,6);
		cout<<"VERILER CIKARTILIYOR";Sleep(250);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(250);
		writeData<<"COVID-19 TURKIYE ISTATISTIKLERI"<<endl;
		writeData<<"MEVCUT RAKAMLAR YAZILIYOR..."<<endl<<endl;
		writeData<<"Toplam Test Sayisi       :"<<totalTestNumberData<<endl;
		writeData<<"Toplam Vaka Sayisi       :"<<totalCaseNumberData<<endl;
		writeData<<"Toplam Vefat Sayisi      :"<<totalDeathNumberData<<endl;
		writeData<<"Toplam Yogun Bakim Sayisi:"<<totalCriticalCareNumberData<<endl;
		writeData<<"Toplam Entube Sayisi     :"<<totalIntubateNumberData<<endl;
		writeData<<"Toplam Iyilesen Sayisi   :"<<totalRecoveryNumberData<<endl;
		writeData<<"Toplam Karantina Sayisi  :"<<totalQuarantineNumberData<<endl<<endl;
		writeData<<"MEVCUT RAKAMLAR YAZILDI..."<<endl<<"SAGLIGIN ICIN #EVDEKAL...";
		gotoxy(20,8);
		cout<<"VERILER CIKARTILDI";Sleep(250);
	}
	
	else{
		cout<<"VERILER KAYIT EDILEMEDI...LUTFEN TEKRAR DENEYINIZ..."<<endl<<endl;
	}
	
	gotoxy(10,25);
	cout<<"Ana Menu'ye donmek icin herhangi bir tusa basiniz:[]";
	gotoxy(63,25);
	getch();
	writeData.close();
	mainmenu();
}

//Ana menu icin tasarim fonksiyonu

void maintheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(24,3);
	cout<<"KORONAVIRUS ISTATISTIK UYGULAMASI"<<endl;
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<24;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,24);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,22);
		cout<<"=";
	}
}

//Hasta ekleme member function'u icin tasarim fonksiyonu

void addingTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(34,3);
	cout<<"HASTA EKLEME";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<20;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,20);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,18);
		cout<<"=";
	}
}

//Hasta cikarma member function'u icin tasarim fonksiyonu

void extractionTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(34,3);
	cout<<"HASTA CIKARMA";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<20;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,20);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,18);
		cout<<"=";
	}
}

//Istatistikleri gorunteleme member fonksiyonu icin tasarim fonksiyonu

void viewingTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(24,3);
	cout<<"COVID-19 TURKIYE ISTATISTIKLERI";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<23;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,23);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,20);
		cout<<"=";
	}
}

void printingOutTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(34,3);
	cout<<"CIKTI ALMA";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<20;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,20);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,18);
		cout<<"=";
	}
}

void savingTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(30,3);
	cout<<"VERILERI KAYDETME";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<20;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,20);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,18);
		cout<<"=";
	}
}

void addingTestTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(35,3);
	cout<<"TEST EKLEME";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<20;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,20);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,18);
		cout<<"=";
	}
}

void settingsTheme(){
	system("CLS");
	time_t now = time(0);
	cout<<ctime(&now)<<endl;
	gotoxy(57,0);
	cout<<"Console Colour: "+renk;	
	gotoxy(36,3);
	cout<<"AYARLAR";
	gotoxy(15,4);
	cout.width(50);
	cout.fill('=');
	cout<<"";
	
	for(int y=3;y<20;y++){
		gotoxy(15,y);
		cout<<"|";
		gotoxy(64,y);
		cout<<"|";
	}
	for(int x=15;x<65;x++){
		gotoxy(x,20);
		cout<<"+";
	}
	for(int x=16;x<64;x++){
		gotoxy(x,18);
		cout<<"=";
	}
}

void Corona::settings(){
	settingsTheme();
	string MenuItem[3];
	MenuItem[0]="[1] VERILERI SIFIRLA";
	MenuItem[1]="[2] KONSOL RENGI DEGISTIR";
	MenuItem[2]="[X] IPTAL";
	
	for(int menu=0;menu<=2;menu++){
		gotoxy(20,6+(menu*2));
		cout<<MenuItem[menu];
	}
	
	gotoxy(15,22);
	cout<<"Yapmak istenilen islemi giriniz:[]";
	gotoxy(50,22);
	choice = getch();
	
	switch(choice){
		case '1':
			settingsTheme();
			gotoxy(20,6);
			cout<<"BUTUN VERILER SILINECEK";
			gotoxy(20,8);
			cout<<"EMIN MISINIZ?";
			
			gotoxy(15,24);
			cout<<"Yapmak istenilen islemi giriniz:[E/H]";
			gotoxy(53,24);
			choice = getch();
			
			if(choice == 'E' || choice == 'e'){
				amount = 0;
				totalTestNumberData=0;
				totalCaseNumberData=0;
				totalDeathNumberData=0;
				totalCriticalCareNumberData=0;
				totalIntubateNumberData=0;
				totalRecoveryNumberData=0;
				totalQuarantineNumberData=0;
				save();
				settingsTheme();
				gotoxy(20,6);
				cout<<"TUM VERILER SILINDI";
				gotoxy(10,25);
				cout<<"Ana Menu'ye donmek icin herhangi bir tusa basiniz:[]";
				gotoxy(63,25);
				getch();
				mainmenu();
			}
			
			if(choice == 'H' || choice == 'h'){
				settings();
			}

			break;
		
		case '2':
			char colorCode;
			settingsTheme();
			MenuItem[0]="[1] Kirmizi";
			MenuItem[1]="[2] Mavi";
			MenuItem[2]="[3] Yesil";
			MenuItem[3]="[4] Beyaz";
			
			for (int menu=0;menu<=3;menu++){
				gotoxy(20,6+(menu*2));
				cout<<MenuItem[menu];
			}
			
			gotoxy(15,22);
			cout<<"Yapmak istediginiz islemi seciniz:[ ]";
			gotoxy(53,22);
			colorCode = getch();
			
			switch(colorCode){
				
				case '1':
					system("color 4");
					renk = "Kirmizi";
					break;
				
				case '2': 
					system("color 3");
					renk = "Mavi";
					break;
				
				case '3':
					system("color 2");
					renk = "Yesil";
					break;  
				
				case '4':
					system("color 7");
					renk = "Beyaz";
					break;             
				}
				
				mainmenu();
				break;
		
		case 'X':
			mainmenu();
			break;
		
		case 'x':
			mainmenu();
			break;
	}
}
