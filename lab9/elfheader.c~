#include <elf.h>
#include <stdio.h>


int main(int argc, char *argv[]){

Elf32_Ehdr header;
FILE* fin = fopen(argv[1], "r");
fread(&header, sizeof(header) , 1 , fin);

printf("Magic:\t\t\t\t");
int i;
for(i=0;i<16;i++){
  printf("%d ," , header.e_ident[i]);  
}
printf("\n");
printf("Class:\t\t\t\tt\n");
printf("Data:\t\t\t\tt\n");
printf("Version:\t\t\tt\n");
printf("OS/ABI:\t\t\t\tt\n");
printf("ABI Version:\t\t\tt\n");
printf("Type:\t\t\t\t%d \n" ,header.e_type);
printf("Machine:\t\t\tt\n");
printf("Version:\t\t\tt\n");
printf("Entry point address:\t\tt\n");
printf("Start of program headers: \tt\n");
printf("Start of section headers:\tt\n");
printf("Flags:\t\t\t\tt\n");
printf("Size of this header:\t\t%d \n" , header.e_shnum);
printf("\n");

}