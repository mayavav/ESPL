#include <stdio.h>
#include <string.h>

//input : 2 files
//output : the position and value of the firste difrent byte
int main(int argc, char **argv) 
{
	FILE *file1 = fopen("a.txt", "r+");
	char word1[1];
	
	FILE *file2 = fopen("b.txt", "r+");
	char word2[1];
	
	long i = 0;
	

	while((!feof(file1))&&(!feof(file2)))
	{
		fread(word1, 1, 1, file1);
		fread(word2, 1, 1,file2);
		if(word1[0]!=word2[0])
		{
//print to a text file
		  printf("byte %lu -%u +%u\n",i, word1[0], word2[0]);
		}
		i++;
	}
	
//	bcmp o.txt b.txt > ab.diff
	
	fclose(file1);
	fclose(file2);
	
	return 0;

}


//print to a text file with the real value

 //printf("byte %lu -%u(%c) +%u(%c)\n",i, word1[0], word1[0], word2[0], word2[0]);
