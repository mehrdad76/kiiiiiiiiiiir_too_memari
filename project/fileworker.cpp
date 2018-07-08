#include "fileworker.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

FileWorker::FileWorker()
{

}


string FileWorker::readFromFile(const string &fileName)
{
    string text;
    string line;
    ifstream myfile (fileName);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) != nullptr)
        {
            text += line + "\n";
        }

        myfile.close();
        return text;
    }
    else {
        return "Unable to open file";
    }
}


bool FileWorker::writeInFile(const string &fileName, const string &text)
{
    ofstream myfile (fileName);
    if (myfile.is_open())
    {
        myfile << text;
        myfile.close();
        return true;
    }
    return false;
}
