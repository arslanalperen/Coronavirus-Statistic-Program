#include"corona.h"

int main() {
	Corona program;
	program.read();
		
	char selection;
	
	program.mainmenu();	
	
	while(1){
		selection=getch();
		switch(selection){
			case '1':
				program.addingTest();
				break;
			case '2':
				program.adding();
				break;
			case '3':
				program.extraction();
				break;
			case '4':
				program.viewing();
				break;
			case '5':
				program.save();
				break;
			case '6':
				program.printingOut();
				break;
			case '7':
				program.settings();
				break;
			case 'X':
				exit(1);
				break;
			case 'x':
				exit(1);
				break;
		}
	}
	
	return 0;
}
