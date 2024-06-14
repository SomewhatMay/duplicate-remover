#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {
	set<string> data;
	string line;

	ifstream dataFile("data.txt");

	while (getline(dataFile, line)) {
		data.insert(line);
	}

	dataFile.close();

	ofstream outputFile("output.txt");

	for (auto it = data.begin(); it != data.end(); it++) {
		outputFile << *it << endl;
	}

	outputFile.close();

	return 0;
}