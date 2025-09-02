#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class LogLevel {
    DEBUG = 0,
    INFO,
    WARNING,
    ERROR
};

class Logger {
public:
    Logger(LogLevel level = LogLevel::INFO);
    void log(LogLevel level, const string& message);

private:
    LogLevel currentLevel;
    string levelToString(LogLevel level);
};
