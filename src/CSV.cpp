#include "../include/CSV.hpp"


CSV::CSV(string data_fileName, string labels_fileName, string delm){
    this->data_fileName = data_fileName;
    this->labels_fileName = labels_fileName; 
    this->delimeter = delm;
}

vector<vector<double> > CSV::readData()
{
	ifstream file(data_fileName);

	vector<vector<double>> dataList;

	string line = "";

	while (getline(file, line))
	{
		vector<string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
                vector<double> vec_double = toDouble(vec);
		dataList.push_back(vec_double);
	}
	file.close();

	return dataList;
}

vector<vector<double>> CSV::readLabels()
{
	ifstream file(labels_fileName);

	vector<vector<double>> labelsList;


	string line = "";

	while (getline(file, line))
	{
		vector<string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
                vector<double> vec_double = toDouble(vec);
		labelsList.push_back(vec_double);
	}
	file.close();


	return labelsList;
}

vector<double> CSV::toDouble(vector<string> & vec){
    vector<double> result;
    for(string s : vec){
        result.push_back(stod(s.c_str()));
    }
    return result;
}
