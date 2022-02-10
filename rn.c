#include<stdio.h>

int main (int argc, char* argv[]) {

    int result = rename(argv[1], argv[2]);
    if (result != 0) { 
	printf("Error\n");
    }
    return 0;
}
