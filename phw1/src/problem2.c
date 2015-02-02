#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <omp.h>

#define h  800 
#define w  800

#define input_file  "input.raw"
#define output_file "output.raw"

int main(int argc, char** argv){
    int i;
    FILE *fp;

  	unsigned char *a = (unsigned char*) malloc (sizeof(unsigned char)*h*w);
  	int b, m, n;
  	char *bstr = argv[1];
  	n = w;
  	int i, j, k;
  	// parse block size from command line; default is 8
  	if (bstr == NULL) {
  		printf("Usage: %s <block_size integer>.", argv[0]);
  		return 1;
  	}
  	b = *bstr - '0';
  	m = n / b;
  	
	// the matrix is stored in a linear array in row major fashion
	if (!(fp=fopen(input_file, "rb"))) {
		printf("can not opern file\n");
		return 1;
	}
	fread(a, sizeof(unsigned char), w*h, fp);
	fclose(fp);
    
	// measure the start time here
	//  Your code goes here
	printf"Code for block martrix mult goes here...");
	
		
	//
	
	// measure the end time here
	
	// print out the execution time here
	
	
	if (!(fp=fopen(output_file,"wb"))) {
		printf("can not opern file\n");
		return 1;
	}	
	fwrite(a, sizeof(unsigned char),w*h, fp);
    fclose(fp);
    
    return 0;
}
