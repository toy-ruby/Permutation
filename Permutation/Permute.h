#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <typeinfo>
#include <string>

using namespace std;

class Permute
{
public:
	
	Permute();
	~Permute();
	static vector<string> fromString(string);
	static vector<string> fromVector(vector<string>);
	template <class T> 
	vector<string> from(T);
};

