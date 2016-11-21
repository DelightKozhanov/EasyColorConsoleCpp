#include <iostream>
#include <string>
using namespace std;

//Bold
string blackBoldOut = "\033[1;30m";
string redBoldOut = "\033[1;31m";
string greenBoldOut = "\033[1;32m";
string yellowBoldOut = "\033[1;33m";
string blueBoldOut = "\033[1;34m";
string magentaBoldOut = "\033[1;35m";
string cyanBoldOut = "\033[1;36m";
string lightGrayBoldOut = "\033[1;37m";
string darkGrayBoldOut = "\033[1;90m";
string lightRedBoldOut = "\033[1;91m";
string lightGreenBoldOut = "\033[1;92m";
string lightYellowBoldOut = "\033[1;93m";
string lightBlueBoldOut = "\033[1;94m";
string lightMagentaBoldOut = "\033[1;95m";
string lightCyanBoldOut = "\033[1;96m";
string whiteBoldOut = "\033[1;97m";
//Normal
string blackOut = "\033[30m";
string redOut = "\033[31m";
string greenOut = "\033[32m";
string yellowOut = "\033[33m";
string blueOut = "\033[34m";
string magentaOut = "\033[35m";
string cyanOut = "\033[36m";
string lightGrayOut = "\033[37m";
string darkGrayOut = "\033[90m";
string lightRedOut = "\033[91m";
string lightGreenOut = "\033[92m";
string lightYellowOut = "\033[93m";
string lightBlueOut = "\033[94m";
string lightMagentaOut = "\033[95m";
string lightCyanOut = "\033[96m";
string whiteOut = "\033[97m";
// Def 
string defOut = "\033[0m";


//background
string redBG = "\033[41m";
string yellowBG = "\033[43m";
string blueBG = "\033[44m";
string greenBG = "\033[42m";
string cyanBG = "\033[46m";
string magentaBG = "\033[45m";
string blackBG = "\033[40m";
string whiteBG = "\033[41m";

string endBG = "\033[49m";




// Red Bold
void pRedB(string a){
	cout << redBoldOut << a << defOut ;
}
void pRedB(int a){
	cout << redBoldOut << a << defOut ;
}
void pRedB(char a){
	cout << redBoldOut << a << defOut ;
}
void pRedB(long a){
	cout << redBoldOut << a << defOut ;
}
void pRedB(short a){
	cout << redBoldOut << a << defOut ;
}
// Blue Bold
void pBlueB(string a){
	cout << blueBoldOut << a << defOut ;
}
void pBlueB(int a){
	cout << blueBoldOut << a << defOut ;
}
void pBlueB(char a){
	cout << blueBoldOut << a << defOut ;
}
void pBlueB(short a){
	cout << blueBoldOut << a << defOut ;
}
void pBlueB(long a){
	cout << blueBoldOut << a << defOut ;
}
//Yellow Bold
void pYellowB(string a){
	cout << yellowBoldOut << a << defOut ;
}
void pYellowB(int a){
	cout << yellowBoldOut << a << defOut ;
}
void pYellowB(char a){
	cout << yellowBoldOut << a << defOut ;
}
void pYellowB(short a){
	cout << yellowBoldOut << a << defOut ;
}
void pYellowB(long a){
	cout << yellowBoldOut << a << defOut ;
}
// Green Bold
void pGreenB(string a){
	cout << greenBoldOut << a << defOut ;
}
void pGreenB(int a){
	cout << greenBoldOut << a << defOut ;
}
void pGreenB(char a){
	cout << greenBoldOut << a << defOut ;
}
void pGreenB(long a){
	cout << greenBoldOut << a << defOut ;
}
void pGreenB(short a){
	cout << greenBoldOut << a << defOut ;
}
//Magenta Bold
void pMagentaB(string a){
	cout << magentaBoldOut << a << defOut ;
}
void pMagentaB(int a){
	cout << magentaBoldOut << a << defOut ;
}
void pMagentaB(char a){
	cout << magentaBoldOut << a << defOut ;
}
void pMagentaB(long a){
	cout << magentaBoldOut << a << defOut ;
}
void pMagentaB(short a){
	cout << magentaBoldOut << a << defOut ;
}
//Black Bold
void pBlackB(string a){
	cout << blackBoldOut << a << defOut ;
}
void pBlackB(int a){
	cout << blackBoldOut << a << defOut ;
}
void pBlackB(char a){
	cout << blackBoldOut << a << defOut ;
}
void pBlackB(long a){
	cout << blackBoldOut << a << defOut ;
}
void pBlackB(short a){
	cout << blackBoldOut << a << defOut ;
}
//Cyan Bold
void pCyanB(string a){
	cout << cyanBoldOut << a << defOut ;
}
void pCyanB(int a){
	cout << cyanBoldOut << a << defOut ;
}
void pCyanB(char a){
	cout << cyanBoldOut << a << defOut ;
}
void pCyanB(long a){
	cout << cyanBoldOut << a << defOut ;
}
void pCyanB(short a){
	cout << cyanBoldOut << a << defOut ;
}
//Gray Bold
void pGrayB(string a){
	cout << lightGrayBoldOut << a << defOut ;
}
void pGrayB(int a){
	cout << lightGrayBoldOut << a << defOut ;
}
void pGrayB(char a){
	cout << lightGrayBoldOut << a << defOut ;
}
void pGrayB(long a){
	cout << lightGrayBoldOut << a << defOut ;
}
void pGrayB(short a){
	cout << lightGrayBoldOut << a << defOut ;
}
//DarkGray Bold
void pDarkGrayB(string a){
	cout << darkGrayBoldOut << a << defOut ;
}
void pDarkGrayB(int a){
	cout << darkGrayBoldOut << a << defOut ;
}
void pDarkGrayB(char a){
	cout << darkGrayBoldOut << a << defOut ;
}
void pDarkGrayB(long a){
	cout << darkGrayBoldOut << a << defOut ;
}
void pDarkGrayB(short a){
	cout << darkGrayBoldOut << a << defOut ;
}
//LightRed Bold
void pLightRedB(string a){
	cout << lightRedBoldOut << a << defOut ;
}
void pLightRedB(int a){
	cout << lightRedBoldOut << a << defOut ;
}
void pLightRedB(char a){
	cout << lightRedBoldOut << a << defOut ;
}
void pLightRedB(long a){
	cout << lightRedBoldOut << a << defOut ;
}
void pLightRedB(short a){
	cout << lightRedBoldOut << a << defOut ;
}
//LightYellow Bold
void pLightYellowB(string a){
	cout << lightYellowBoldOut << a << defOut ;
}
void pLightYellowB(int a){
	cout << lightYellowBoldOut << a << defOut ;
}
void pLightYellowB(char a){
	cout << lightYellowBoldOut << a << defOut ;
}
void pLightYellowB(long a){
	cout << lightYellowBoldOut << a << defOut ;
}
void pLightYellowB(short a){
	cout << lightYellowBoldOut << a << defOut ;
}
//LightGreen Bold
void pLightGreenB(string a){
	cout << lightGreenBoldOut << a << defOut ;
}
void pLightGreenB(int a){
	cout << lightGreenBoldOut << a << defOut ;
}
void pLightGreenB(char a){
	cout << lightGreenBoldOut << a << defOut ;
}
void pLightGreenB(long a){
	cout << lightGreenBoldOut << a << defOut ;
}
void pLightGreenB(short a){
	cout << lightGreenBoldOut << a << defOut ;
}
//LightBlue Bold
void pLightBlueB(string a){
	cout << lightBlueBoldOut << a << defOut ;
}
void pLightBlueB(char a){
	cout << lightBlueBoldOut << a << defOut ;
}
void pLightBlueB(int a){
	cout << lightBlueBoldOut << a << defOut ;
}
void pLightBlueB(long a){
	cout << lightBlueBoldOut << a << defOut ;
}
void pLightBlueB(short a){
	cout << lightBlueBoldOut << a << defOut ;
}
//LightMagenta Bold
void pLightMagentaB(string a){
	cout << lightMagentaBoldOut << a << defOut ;
}
void pLightMagentaB(int a){
	cout << lightMagentaBoldOut << a << defOut ;
}
void pLightMagentaB(char a){
	cout << lightMagentaBoldOut << a << defOut ;
}
void pLightMagentaB(long a){
	cout << lightMagentaBoldOut << a << defOut ;
}
void pLightMagentaB(short a){
	cout << lightMagentaBoldOut << a << defOut ;
}
//LightCyan Bold
void pLightCyanB(string a){
	cout << lightCyanBoldOut << a << defOut ;
}
void pLightCyanB(int a){
	cout << lightCyanBoldOut << a << defOut ;
}
void pLightCyanB(char a){
	cout << lightCyanBoldOut << a << defOut ;
}
void pLightCyanB(long a){
	cout << lightCyanBoldOut << a << defOut ;
}
void pLightCyanB(short a){
	cout << lightCyanBoldOut << a << defOut ;
}
//White Bold
void pWhiteB(string a){
	cout << whiteBoldOut << a << defOut ;
}
void pWhiteB(int a){
	cout << whiteBoldOut << a << defOut ;
}
void pWhiteB(char a){
	cout << whiteBoldOut << a << defOut ;
}
void pWhiteB(long a){
	cout << whiteBoldOut << a << defOut ;
}
void pWhiteB(short a){
	cout << whiteBoldOut << a << defOut ;
}


// Red 
void pRed(string a){
	cout << redOut << a << defOut ;
}
void pRed(int a){
	cout << redOut << a << defOut ;
}
void pRed(char a){
	cout << redOut << a << defOut ;
}
void pRed(long a){
	cout << redOut << a << defOut ;
}
void pRed(short a){
	cout << redOut << a << defOut ;
}
// Blue 
void pBlue(string a){
	cout << blueOut << a << defOut ;
}
void pBlue(int a){
	cout << blueOut << a << defOut ;
}
void pBlue(char a){
	cout << blueOut << a << defOut ;
}
void pBlue(short a){
	cout << blueOut << a << defOut ;
}
void pBlue(long a){
	cout << blueOut << a << defOut ;
}
//Yellow 
void pYellow(string a){
	cout << yellowOut << a << defOut ;
}
void pYellow(int a){
	cout << yellowOut << a << defOut ;
}
void pYellow(char a){
	cout << yellowOut << a << defOut ;
}
void pYellow(short a){
	cout << yellowOut << a << defOut ;
}
void pYellow(long a){
	cout << yellowOut << a << defOut ;
}
// Green 
void pGreen(string a){
	cout << greenOut << a << defOut ;
}
void pGreen(int a){
	cout << greenOut << a << defOut ;
}
void pGreen(char a){
	cout << greenOut << a << defOut ;
}
void pGreen(long a){
	cout << greenOut << a << defOut ;
}
void pGreen(short a){
	cout << greenOut << a << defOut ;
}
//Magenta 
void pMagenta(string a){
	cout << magentaOut << a << defOut ;
}
void pMagenta(int a){
	cout << magentaOut << a << defOut ;
}
void pMagenta(char a){
	cout << magentaOut << a << defOut ;
}
void pMagenta(long a){
	cout << magentaOut << a << defOut ;
}
void pMagenta(short a){
	cout << magentaOut << a << defOut ;
}
//Black 
void pBlack(string a){
	cout << blackOut << a << defOut ;
}
void pBlack(int a){
	cout << blackOut << a << defOut ;
}
void pBlack(char a){
	cout << blackOut << a << defOut ;
}
void pBlack(long a){
	cout << blackOut << a << defOut ;
}
void pBlack(short a){
	cout << blackOut << a << defOut ;
}
//Cyan 
void pCyan(string a){
	cout << cyanOut << a << defOut ;
}
void pCyan(int a){
	cout << cyanOut << a << defOut ;
}
void pCyan(char a){
	cout << cyanOut << a << defOut ;
}
void pCyan(long a){
	cout << cyanOut << a << defOut ;
}
void pCyan(short a){
	cout << cyanOut << a << defOut ;
}
//Gray 
void pGray(string a){
	cout << lightGrayOut << a << defOut ;
}
void pGray(int a){
	cout << lightGrayOut << a << defOut ;
}
void pGray(char a){
	cout << lightGrayOut << a << defOut ;
}
void pGray(long a){
	cout << lightGrayOut << a << defOut ;
}
void pGray(short a){
	cout << lightGrayOut << a << defOut ;
}
//DarkGray 
void pDarkGray(string a){
	cout << darkGrayOut << a << defOut ;
}
void pDarkGray(int a){
	cout << darkGrayOut << a << defOut ;
}
void pDarkGray(char a){
	cout << darkGrayOut << a << defOut ;
}
void pDarkGray(long a){
	cout << darkGrayOut << a << defOut ;
}
void pDarkGray(short a){
	cout << darkGrayOut << a << defOut ;
}
//LightRed 
void pLightRed(string a){
	cout << lightRedOut << a << defOut ;
}
void pLightRed(int a){
	cout << lightRedOut << a << defOut ;
}
void pLightRed(char a){
	cout << lightRedOut << a << defOut ;
}
void pLightRed(long a){
	cout << lightRedOut << a << defOut ;
}
void pLightRed(short a){
	cout << lightRedOut << a << defOut ;
}
//LightYellow 
void pLightYellow(string a){
	cout << lightYellowOut << a << defOut ;
}
void pLightYellow(int a){
	cout << lightYellowOut << a << defOut ;
}
void pLightYellow(char a){
	cout << lightYellowOut << a << defOut ;
}
void pLightYellow(long a){
	cout << lightYellowOut << a << defOut ;
}
void pLightYellow(short a){
	cout << lightYellowOut << a << defOut ;
}
//LightGreen 
void pLightGreen(string a){
	cout << lightGreenOut << a << defOut ;
}
void pLightGreen(int a){
	cout << lightGreenOut << a << defOut ;
}
void pLightGreen(char a){
	cout << lightGreenOut << a << defOut ;
}
void pLightGreen(long a){
	cout << lightGreenOut << a << defOut ;
}
void pLightGreen(short a){
	cout << lightGreenOut << a << defOut ;
}
//LightBlue 
void pLightBlue(string a){
	cout << lightBlueOut << a << defOut ;
}
void pLightBlue(char a){
	cout << lightBlueOut << a << defOut ;
}
void pLightBlue(int a){
	cout << lightBlueOut << a << defOut ;
}
void pLightBlue(long a){
	cout << lightBlueOut << a << defOut ;
}
void pLightBlue(short a){
	cout << lightBlueOut << a << defOut ;
}
//LightMagenta 
void pLightMagenta(string a){
	cout << lightMagentaOut << a << defOut ;
}
void pLightMagenta(int a){
	cout << lightMagentaOut << a << defOut ;
}
void pLightMagenta(char a){
	cout << lightMagentaOut << a << defOut ;
}
void pLightMagenta(long a){
	cout << lightMagentaOut << a << defOut ;
}
void pLightMagenta(short a){
	cout << lightMagentaOut << a << defOut ;
}
//LightCyan 
void pLightCyan(string a){
	cout << lightCyanOut << a << defOut ;
}
void pLightCyan(int a){
	cout << lightCyanOut << a << defOut ;
}
void pLightCyan(char a){
	cout << lightCyanOut << a << defOut ;
}
void pLightCyan(long a){
	cout << lightCyanOut << a << defOut ;
}
void pLightCyan(short a){
	cout << lightCyanOut << a << defOut ;
}
//White 
void pWhite(string a){
	cout << whiteOut << a << defOut ;
}
void pWhite(int a){
	cout << whiteOut << a << defOut ;
}
void pWhite(char a){
	cout << whiteOut << a << defOut ;
}
void pWhite(long a){
	cout << whiteOut << a << defOut ;
}
void pWhite(short a){
	cout << whiteOut << a << defOut ;
}