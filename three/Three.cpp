#include <iostream>
#include <stdlib.h>

using namespace std;

void * operator new(size_t size, char c)
{
    void * ptr;
    ptr = malloc(size);
    if(ptr != NULL)
    {
        *(char *)ptr = c;
    }
    return ptr;
}

int main()
{
    char * ch = new('#') char;
    cout << *ch;
}