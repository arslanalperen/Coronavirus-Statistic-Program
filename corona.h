#ifndef CORONA_H_
#define CORONA_H_
#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<ctime>
#include<conio.h>
#include<iomanip>
#include<locale.h>
#include"windows.h"
#include<string>
#include<ctype.h>
using namespace std;
string renk;

class Corona{
	private:
		char choice;
		int amount;
		int classOption;
		
		int totalTestNumberData;
		int totalCaseNumberData;
		int totalDeathNumberData;
		int totalCriticalCareNumberData;
		int totalIntubateNumberData;
		int totalRecoveryNumberData;
		int totalQuarantineNumberData;
	public:
		Corona(); // default constructor
		void addingTest(); // adding test number, member function
		void adding(); // adding numbers for variables and printing on cmd
		void extraction(); // substraction for variables and printing on cmd
		void viewing(); // if user see all values this member function calls
		void mainmenu(); //calls for returning the main menu
		void save(); // saves the data
		void read(); // read the data
		void printingOut(); //Printing data out 
		void settings();
};

void gotoxy(short x,short y); // for using the consol about coordinat plane
void maintheme(); // mainmenu's theme function
void addingTheme(); //patient adding function's theme
void extractionTheme(); //patient extraction function's theme
void viewingTheme(); //Viewing statistics function's theme
void printingOutTheme(); //Theme for data writing
void savingTheme(); //Theme for data saving
void addingTestTheme(); // Theme for test adding

#endif //CORONA_H_
