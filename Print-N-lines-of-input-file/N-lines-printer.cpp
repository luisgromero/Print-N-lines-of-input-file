#include <iostream>
#include <fstream>
#include <string>
#include <stack>
/*
Author: Luis Romero
Name: N-lines-printer-bottom-to-top

Description:
Program that reads last N lines from a text file.
Takes the name of the file as console argument argv[1]
Then parses/reads the file and stores line by line into a stack string structure
that allows to read bottom to top of document.

*/

using namespace std;

int main(int argc, char *argv[]){
	ifstream in_stream;
	string line;
	stack<string>lines;
	int n;

	cout << argv[1] << endl << endl;
	in_stream.open(argv[1]);
	

	if (!in_stream.is_open()){	
		cerr << "Cannot open the file." << endl;
	}

	while (in_stream.good()){ //same as (!in_stream.eof())
		//in_stream >> line;
		getline(in_stream, line); //gets the whole line of text instead of -- ' in_stream >> line ' that copies string by string 
		lines.push(line);
		
	}
	
	cout << "Number of lines available to print: " << lines.size()<<endl;
	cout << "How many lines from bottom to top you want to print to screen? : ";
	cin >> n;

	cout <<endl<< "Printing N: " << n << "lines from file"<<endl;
	
	while (n>0 && !lines.empty())
	{
		line = lines.top();
		lines.pop();
		cout << line << endl;
		n--;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}