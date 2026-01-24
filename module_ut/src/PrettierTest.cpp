#include "../../module/inc/Prettier.h"

#include <gtest/gtest.h>

TEST(PrettierTest, Cow)
{
   Prettier prettier;
   EXPECT_TRUE("--- cow ---" == prettier.makePrettier("cow"));
}
