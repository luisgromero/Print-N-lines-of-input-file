#include <iostream>
#include <fstream>
#include <string>
#include <stack>
/*
Program that reads last N lines from a text file.
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

	while (!in_stream.eof()){
		in_stream >> line;
		lines.push(line);
		//cout << line;
	}
	cout << "done adding to stack" << endl;
	cout << "Number of lines available to print: " << lines.size()<<endl;
	cout << "How many lines from end of begining you want to print to screen: ";
	cin >> n;

	cout <<endl<< "printing N: " << n << "lines from file";
	
	while (n>0 && !lines.empty())
	{
		line = lines.top();
		lines.pop();
		cout << line << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}