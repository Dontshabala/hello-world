#include <cs50.h>
#include <stdio.h>

string name = get_string("whats your name?\n");

int main (void)
{
    printf("hello %s\n",name);

}