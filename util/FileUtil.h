

#ifndef CSVREADER_H 
#define CSVREADER_H 

#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include "../Card.h"

struct Table 
{
    vector<string> header;
    vector<vector<string>> data;
    int headerSize;
    int numOfItems;
};

class CSVReader
{
    string fileName;
    string delimeter;
    
    public:
    CSVReader(string filename, string delm = ",") : 
            fileName(filename), delimeter(delm)
    {
    }
    // CSVReader(string, string);
    Table readData();
    // Player *readData(int &rows, int cols, string header[]);
};

// class CSVWriter
// {
//     string fileName;
//     string delimeter;
    
//     public:
//     CSVWriter(string fileName);
    
//     void writeData(const int rows, int cols, const string header[], const Player data[]);
// };

#endif