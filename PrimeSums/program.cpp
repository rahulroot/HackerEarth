#include <iostream>
#include <fstream>
#include <bitset>
#include <math.h>
using namespace std;

typedef unsigned long long ULL;
#define SIZE 4000000L
bitset<SIZE+1> mark;

ULL prime_sum(int num)
{
  /* Initially all are not prime */ 
  ULL sum = 0;

  int sq = (int)sqrt(num);
  for(int i = 2; i <= sq; ++i)
  {
    if(!mark[i])
    {
      /* mark all non prime */ 
      for(int j = (i*i); j <= num; j += i)
        mark[j] = true;
    }
  }

  /* check for all left over number, which should be prime */
  for ( int i = 2; i < num; i++ )
     if (!mark[i])
    		sum += i;
  return sum;
}


int main()
{
	ifstream infile;
  infile.open("./sample.txt");
  int num;
	infile >> num;
  cout << prime_sum(num) << endl;
	return 0;
}
