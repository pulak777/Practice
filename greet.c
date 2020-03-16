#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        printf("Hello world\n");
    }
    else
    {
        printf("Hello %s\n", argv[argc-1]);
    }
}