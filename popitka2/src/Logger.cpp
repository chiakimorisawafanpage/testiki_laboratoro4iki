#include "Logger.h"
using namespace std;

Logger::Logger(LogLevel level) : currentLevel(level) {}

void Logger::log(LogLevel level, const string& message) {
    if (level >= currentLevel) {
        cout << "[" << levelToString(level) << "] " << message << endl;
    }
}

    string Logger::levelToString(LogLevel level) {
    switch (level) {
    case LogLevel::DEBUG:   return "DEBUG";
    case LogLevel::INFO:    return "INFO";
    case LogLevel::WARNING: return "WARNING";
    case LogLevel::ERROR:   return "ERROR";
    default:                return "UNKNOWN";
    }
}
