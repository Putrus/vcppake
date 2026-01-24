if(BUILD_UT)
   find_package(gtest CONFIG REQUIRED)
   set(UT_SOURCES
      src/PrettierTest.cpp
   )

   add_executable(module_ut ${UT_SOURCES})
   target_link_libraries(module_ut PRIVATE module GTest::gtest_main)

   include(GoogleTest)
   gtest_discover_tests(module_ut)
endif()
