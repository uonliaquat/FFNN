#ifndef _CSV_HPP_
#define _CSV_HPP_

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <sstream>

using namespace std;

class CSV{
    private:
	string data_fileName, labels_fileName;
	string delimeter;
        
        vector<double> toDouble(vector<string>&);

    public:
        CSV(string, string, string delim = ",");
        vector<vector<double>> readData();
        vector<vector<double>> readLabels();

};

#endif
