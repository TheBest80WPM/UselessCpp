#include <iostream>
#include <cmath>

auto main() -> int
{
    for (int i=0; i<INFINITY; i++)
    {
       // Allocating too much memory without freeing it
       int *ptr = (int *)malloc(sizeof(int));
    }
}