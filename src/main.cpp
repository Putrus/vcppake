#include "../module/inc/Prettier.h"

#include <iostream>

int main()
{
   Prettier prettier;
   std::cout << prettier.makePrettier("Hello world!") << std::endl;
   return 0;
}
