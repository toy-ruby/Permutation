// Permutation.cpp : Defines the entry point for the console application.
//

#include "Permute.h"

int main(int argc, char** argv)
{
	string s = argv[1];
	vector<string> v = Permute::fromString(s);
    vector<string>::iterator i = v.begin();

	return 0;
}
