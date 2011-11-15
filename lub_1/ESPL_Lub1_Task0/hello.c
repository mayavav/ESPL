#include<stdio.h>

main()
{
    printf("Hello World\n");


}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;

    printf("%d\n",argc);
    for (x=0; x<argc; x++)
        printf("%s\n",argv[x]);
    return 0;
}

