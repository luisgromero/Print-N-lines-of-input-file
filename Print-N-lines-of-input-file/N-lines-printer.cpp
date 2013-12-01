#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
/*
Program that reads last N lines from a text file.
*/

using namespace std;

int main(int argc, char *argv[]){
	ifstream in_stream;
	cout << argv[1] << endl << endl;
	in_stream.open(argv[1]);
	string line;
	if (!in_stream.is_open())
	{
		cerr << "Cannot open the file." << endl;
	}
	while (!in_stream.eof())
	{
		in_stream >> line;
		cout << line;
	}
	cout << endl << endl;
	system("pause");
	return 0;
}