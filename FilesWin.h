#ifndef FILESWIN_H_
#define FILESWIN_H_
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
std::string getUsername();
bool fileExists(const char *fileName);
std::string getStartupPath(std::string filename);
void beginStartup(std::string filename);
#endif /* FILESWIN_H_ */
