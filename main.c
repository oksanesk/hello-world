
#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Number of arguments is %u\n", argc);
    for (int i=0; i < argc; i++) {
        printf("Arg %d = %s\n", i, argv[i]);
    }
    printf("\n\n\nThe command was:\n");
    for (int i=0; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");
            
    return 0;
}
