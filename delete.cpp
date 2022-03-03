#include <stdio.h>
#include <malloc.h>
int main ()
{
	int file_size = 0;
	FILE *p_file = fopen("tipssoft.dat.cpp", "a+t");
	/*if(p_file !=NULL) {
		fseek(p_file, 0, SEEK_END);
		file_size= ftell(p_file);
		printf("파일 크기: %d\n", file_size);
		fclose(p_file);
	}*/
	
	fprintf(p_file, "Hellow my name is ken");
	fclose(p_file);
}

