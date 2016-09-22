#include "Permute.h"

Permute::Permute()
{
}

Permute::~Permute()
{
}

vector<string> Permute::fromString(string str)
{
	static vector<string> val;

	sort(begin(str), end(str));

    do {
		val.push_back(str);		
	} while (next_permutation( begin(str), end(str)));
	
	return val;
}

vector<string> Permute::fromVector(vector<string> vec)
{
	static vector<string> val;	

	sort(vec.begin(), vec.end());
	do {
		string s;		
		for (auto i = vec.begin(); i != vec.end(); i++)
		{
			s += *i;
		}
        val.push_back(s);
    } while (next_permutation(vec.begin(),vec.end()));

	return val;
}

template<class T> 
vector<string> Permute::from(T)
{
	// TODO
	return 0;
}
