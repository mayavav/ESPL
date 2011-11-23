#include <string.h>
#include <stdio.h>

int hsvmhr( const char*, const char*);

int main(int argc, char *argv[])
{
  
	const char *S1 , *S2;
	S1 = argv[1];
	S2 = argv[2];
	if(0> hsvmhr(S1, S2))
	{
		printf(" %s is found to be less than %s\n",S1 , S2);
	}
	
	if(0< hsvmhr(S1, S2))
	{
		printf(" %s is found to be greater than %s",S1 , S2);
	}

	if(0 == hsvmhr(S1,S2))
	{
		printf(" %s is found to match to %s",S1 , S2);
	}

	return 0;
};