#include <iostream>
#include <string>
#include <unistd.h>
//delay
#include "easyColorLibCPP.cpp"
using namespace std;


int main(int argc, const char *argv[])
{	
	int i = 1;
	char a = 'a';
	short s = 2;
	long l = 3;

	pRedB(i);
	cout <<"  ";
	pRedB(a);
	cout <<"  ";
	pRedB(s);
	cout <<"  ";
	pRedB(l);
	cout <<"  ";
	pRedB("Крассный жирный / Red Bold \n");
	// cout << "\033[1;31m" << "Красный Жирный " << "\033[0m" << "\n" ;

	pBlueB(i);
	cout <<"  ";
	pBlueB(a);
	cout <<"  ";
	pBlueB(s);
	cout <<"  ";
	pBlueB(l);
	cout <<"  ";
	pBlueB("Синий жирный / Blue Bold \n");

	pYellowB(i);
	cout <<"  ";
	pYellowB(a);
	cout <<"  ";
	pYellowB(s);
	cout <<"  ";
	pYellowB(l);
	cout <<"  ";
	pYellowB("Желтый жирный / Yellow Bold \n");

	pCyanB(i);
	cout <<"  ";
	pCyanB(a);
	cout <<"  ";
	pCyanB(s);
	cout <<"  ";
	pCyanB(l);
	cout <<"  ";
	pCyanB("Голубой жирный / Cyan Bold \n");

	pMagentaB(i);
	cout <<"  ";
	pMagentaB(a);
	cout <<"  ";
	pMagentaB(s);
	cout <<"  ";
	pMagentaB(l);
	cout <<"  ";
	pMagentaB("Фиолетовый жирный / Magenta Bold \n");

	//Черный и Белый

	pBlackB(i);
	cout <<"  ";
	pBlackB(a);
	cout <<"  ";
	pBlackB(s);
	cout <<"  ";
	pBlackB(l);
	cout <<"  ";
	pBlackB("Черный жирный / Black Bold \n");

	pWhiteB(i);
	cout <<"  ";
	pWhiteB(a);
	cout <<"  ";
	pWhiteB(s);
	cout <<"  ";
	pWhiteB(l);
	cout <<"  ";
	pWhiteB("Белый жирный / White Bold \n");

	cout << "\n\n";

	pRed(i);
	cout <<"  ";
	pRed(a);
	cout <<"  ";
	pRed(s);
	cout <<"  ";
	pRed(l);
	cout <<"  ";
	pRed("Крассный / Red \n");

	pBlue(i);
	cout <<"  ";
	pBlue(a);
	cout <<"  ";
	pBlue(s);
	cout <<"  ";
	pBlue(l);
	cout <<"  ";
	pBlue("Синий / Blue \n");

	pYellow(i);
	cout <<"  ";
	pYellow(a);
	cout <<"  ";
	pYellow(s);
	cout <<"  ";
	pYellow(l);
	cout <<"  ";
	pYellow("Желтый / Yellow \n");

	pCyan(i);
	cout <<"  ";
	pCyan(a);
	cout <<"  ";
	pCyan(s);
	cout <<"  ";
	pCyan(l);
	cout <<"  ";
	pCyan("Голубой / Cyan \n");

	pMagenta(i);
	cout <<"  ";
	pMagenta(a);
	cout <<"  ";
	pMagenta(s);
	cout <<"  ";
	pMagenta(l);
	cout <<"  ";
	pMagenta("Фиолетовый / Magenta \n");

	//Черный и Белый

	pBlack(i);
	cout <<"  ";
	pBlack(a);
	cout <<"  ";
	pBlack(s);
	cout <<"  ";
	pBlack(l);
	cout <<"  ";
	pBlack("Черный / Black \n");

	pWhite(i);
	cout <<"  ";
	pWhite(a);
	cout <<"  ";
	pWhite(s);
	cout <<"  ";
	pWhite(l);
	cout <<"  ";
	pWhite("Белый / White \n");

	cout << "\n\n";

	cout << redBG;
	pWhiteB("Привет Мир / Hello World");
	cout << "\n\n";
	cout << yellowBG;
	pWhiteB("Привет Мир / Hello World");
	cout << "\n\n";
	cout << blueBG;
	pWhiteB("Привет Мир / Hello World");
	cout << "\n\n";
	cout << greenBG;
	pWhiteB("Привет Мир / Hello World");
	cout << "\n\n";
	cout << cyanBG;
	pWhiteB("Привет Мир / Hello World");
	cout << "\n\n";
	cout << magentaBG;
	pWhiteB("Привет Мир / Hello World");
	cout << endBG;

	cout << "\n";

	return 0;
}