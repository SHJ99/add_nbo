#include <netinet/in.h>
#include <iostream>
#include <stdint.h>
using namespace std;

uint32_t read_file(char *filename){
	uint32_t value;

	FILE* file = fopen(filename, "rb");
	fread(&value, sizeof(uint32_t), 1, file);

	return value;
}


int main(int argc, char* argv[]){
	
	
	
	uint32_t num=read_file(argv[1]);
	uint32_t num2=read_file(argv[2]);

	num=ntohl(num);
	num2=ntohl(num2);

	//printf("%x\n", num+num2);
	printf("%d(%#x) + %d(%#x) = %d(%#x)",num,num,num2,num2,num+num2,num+num2);

	return 0;

}

