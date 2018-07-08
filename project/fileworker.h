#ifndef FILEWORKER_H
#define FILEWORKER_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

class FileWorker
{
public:
    FileWorker();
    bool writeInFile(const string &fileName, const string &text);
    string readFromFile(const string &fileName);
};

#endif // FILEWORKER_H
