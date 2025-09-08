# CMake generated Testfile for 
# Source directory: C:/Users/polik/source/repos/popitka2/popitka2/test
# Build directory: C:/Users/polik/source/repos/popitka2/popitka2/build_clang/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[LoggerTest]=] "C:/Users/polik/source/repos/popitka2/popitka2/build_clang/test/Debug/LoggerTest.exe")
  set_tests_properties([=[LoggerTest]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;12;add_test;C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[LoggerTest]=] "C:/Users/polik/source/repos/popitka2/popitka2/build_clang/test/Release/LoggerTest.exe")
  set_tests_properties([=[LoggerTest]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;12;add_test;C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[LoggerTest]=] "C:/Users/polik/source/repos/popitka2/popitka2/build_clang/test/MinSizeRel/LoggerTest.exe")
  set_tests_properties([=[LoggerTest]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;12;add_test;C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[LoggerTest]=] "C:/Users/polik/source/repos/popitka2/popitka2/build_clang/test/RelWithDebInfo/LoggerTest.exe")
  set_tests_properties([=[LoggerTest]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;12;add_test;C:/Users/polik/source/repos/popitka2/popitka2/test/CMakeLists.txt;0;")
else()
  add_test([=[LoggerTest]=] NOT_AVAILABLE)
endif()
