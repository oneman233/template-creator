#include <direct.h>
#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

string char2str(char *x) {
	int l = strlen(x);
	string ret = "";
	for(int i = 0; i < l; ++i) {
		ret += x[i];
	}
	return ret;
}

string int2str(int x) {
	string ret = "";
	while(x) {
		ret += (char)(x % 10 + '0');
		x /= 10; 
	}
	reverse(ret.begin(), ret.end());
	return ret;
}

int char2int(char *x) {
	int  l = strlen(x);
	int ret = 0;
	for(int i = 0; i < l; ++i) {
		ret *= 10;
		ret += x[i] - '0';
	}
	return ret;
}

void copyfile(string from, string to) {
	ifstream in;
	ofstream out;
	in.open(from);
	out.open(to);
	out << in.rdbuf();
	out.close();
	in.close();
}

int main(int argc, char *argv[]) {
	if(argc != 3) {
		cerr << "Usage: NewProject <folder name> <number | uppercase letter>";
		return 0;
	}
	mkdir(argv[1]);
	if(argv[2][0] >= 'A' && argv[2][0] <= 'Z') {
		for(char i = 'A'; i <= argv[2][0]; ++i) {
			copyfile("template.cpp", char2str(argv[1])+"\\"+i+".cpp");
		}
	}
	else {
		int tot = char2int(argv[2]);
		for(int i = 1; i <= tot; ++i) {
			copyfile("template.cpp", char2str(argv[1])+"\\"+int2str(i)+".cpp");
		}
	}
	return 0;
}
/*
NewProject test 5
NewProject test K
*/
