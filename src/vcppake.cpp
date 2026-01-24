#include "../inc/vcppake.h"

#include <fmt/core.h>

#include <iostream>
#include <string>

void Vcppake::run() const
{
   std::string vcppake = "vcppake";
   std::cout << fmt::format("Hello {}", vcppake) << std::endl;
}
