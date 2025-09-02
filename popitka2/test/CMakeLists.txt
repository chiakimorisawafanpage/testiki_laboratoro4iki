add_executable(test_logger main.cpp)
target_link_libraries(test_logger logger)

target_include_directories(test_logger PRIVATE ${CMAKE_SOURCE_DIR}/src)
