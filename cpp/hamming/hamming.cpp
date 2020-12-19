#include "hamming.h"
#include <string>
#include <iostream>
using namespace std;

namespace hamming {
	int compute(string str1,string str2)
	{
		if (str1.length() != str2.length())
		{
			return 0;
		}

		int result;

		for(long i = 0; i < str2.length(); i++)
		{
			if (str1[i] != str2[i])
			{
				result += 1;
			}
		}
		return result;
	}
}  // namespace hamming

