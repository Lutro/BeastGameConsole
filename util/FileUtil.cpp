
#include "FileUtil.h"
/*
* Parses through csv file line by line and returns the data
* in vector of vector of strings.
*/
Table CSVReader::readData()
{
    ifstream file(fileName);
    std::vector<std::vector<std::string>> dataList;
    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
        std::vector<std::string> vec;
        std::string word = "";
        stringstream s(line);
        while (getline(s, word,','))
        {
            vec.push_back(word);
        }
        dataList.push_back(vec);
    }
    // Close the File
    file.close();
    
    Table table;
    table.header = dataList.front();
    table.headerSize = table.header.size();
    dataList.erase(dataList.begin());
    table.numOfItems = dataList.size();
    table.data = dataList;
    return table;
}

ostream &operator<<(ostream &out, const Table t)
{
    out << left;
    for (auto heading : t.header) 
    {
        (heading.size() > 7) ? 
                    out << setw(50) << heading : 
                    out << setw(10) << heading;
    }
    out << std::endl;
    
    for (auto row : t.data) 
    {
        for (auto word : row) 
        {
            (word.size() > 7) ? 
                    out << setw(50) << word : 
                    out << setw(10) << word;
        }
        out << std::endl;
    }
    out << std::endl;
}