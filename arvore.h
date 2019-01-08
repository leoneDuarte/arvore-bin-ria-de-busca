#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct item{
	int valor;
	struct item *menor;
	struct item *maior;
	
};

typedef struct item Titem;
  
