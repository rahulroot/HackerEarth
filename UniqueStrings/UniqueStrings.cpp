#include <iostream>
#include <string>
#include <fstream>
#include <bitset>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("./sample.txt");
	int test;

  infile >> test;
	while(test--)
	{
		string word;
		string new_word;
		infile >> word;
    bitset<26> freq;
		
    int len = word.length();
		for(int i = 0; i < len; i++)
		{
			if ( !freq[word[i]-'a'])
			{
				freq[word[i]-'a'] = 1;
				new_word += word[i];
			}
		}

    cout << new_word << endl;

		word.clear();
		new_word.clear();
	}

	return 0;
		
}
	

