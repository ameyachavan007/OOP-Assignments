//============================================================================
// Name        : files.cpp
// Author      : Ameya Chavan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 PROBLEM STATEMENT
 Write a C++ program that creates an output file, writes information to it,
closes the file and open it again as an input file and read the information
from the file.
*/

#include <iostream>
#include<fstream>

using namespace std;

int main(){
	fstream file;

	file.open("sample.txt",ios::out);

	if(!file){
		cout<<"Error in creating file!"<<endl;
		return 0;
	}

	cout<<"File created successfully!"<<endl;

	file<<"TEXT";
	file.close();

	file.open("sample.txt",ios::in);

	if(!file){
		cout<<"Error in file opening!"<<endl;
		return 0;
	}

	string ch;
	cout<<"File Content: ";

	while(!file.eof()){
		file>>ch;
		cout<<ch;
	}

	file.close();
	return 0;
}

