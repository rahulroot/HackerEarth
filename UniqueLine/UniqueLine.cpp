#include <iostream>
#include <string>
#include <fstream>
#include <bitset>

/* Program to remove the duplicate char from line, keeping no of space as it is */
/* Consider case insensitive matches */

using namespace std;

int main()
{
	ifstream infile;
	infile.open("./sample.txt");
	int test;

  infile >> test;
	infile.ignore();
	while(test--)
	{
		string line;
		string new_line;
		getline(infile, line);
    bitset<52> freq;
		
    int len = line.length();
		for(int i = 0; i < len; i++)
		{
      if (isalpha(line[i]))
			{
				if ( !freq[tolower(line[i])-'a'])
				{
					freq[tolower(line[i])-'a'] = 1;
					new_line += line[i];
				}
			}
			else 
			{
					new_line += line[i];
			}
		}

    cout << new_line << endl;

		line.clear();
		new_line.clear();
	}

	return 0;
		
}
	

