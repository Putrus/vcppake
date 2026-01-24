if(BUILD_UNIT_TESTS)
   find_package(gtest CONFIG REQUIRED)
   set(SOURCES
      src/test.cpp
   )

   add_executable(vcppake_ut ${SOURCES})
   target_link_libraries(vcppake_ut PRIVATE vcppake_lib GTest::gtest_main)

   include(GoogleTest)
   gtest_discover_tests(vcppake_ut)
endif()
