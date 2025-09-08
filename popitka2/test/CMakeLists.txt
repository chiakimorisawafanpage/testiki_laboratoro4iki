
enable_testing()

add_executable(test_logger main.cpp)
target_link_libraries(test_logger logger)

find_package(GTest REQUIRED)

add_executable(LoggerTest LoggerTest.cpp)
target_link_libraries(LoggerTest PRIVATE logger GTest::gtest_main)

add_test(NAME LoggerTest COMMAND LoggerTest)
