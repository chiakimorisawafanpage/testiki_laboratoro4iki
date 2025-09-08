
cmake -S . -B build_clang -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Debug
cmake --build build_clang

Write-Host "`n=== starto test_logger.exe ==="
& .\build_clang\test\Debug\test_logger.exe

Write-Host "`n=== pusk LoggerTest.exe ==="
& .\build_clang\test\Debug\LoggerTest.exe
