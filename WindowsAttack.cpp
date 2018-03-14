#include "WindowsAttack.h"
#include "FilesWin.h"
#include <iostream>
int payloadDropWin(){
	try{
		std::ofstream filedrop;
		std::cout << "Opening file" << std::endl;
		filedrop.open("MemDeath.txt"/*, std::ios::binary*/);
		filedrop << dropPayload();
		filedrop.close();
	}catch(std::exception e){
		return 1;
	}
	return 0;
}
void WindowsMain(){
	payloadDropWin();
}
