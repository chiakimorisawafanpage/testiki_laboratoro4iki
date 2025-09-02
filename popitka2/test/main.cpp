#include "../src/Logger.h"
#include <iostream>
using namespace std;

void runCalculator(Logger& logger) {
    double a, b;
    char op;

    cout << "=== Simple Dimple ===" << std::endl;

    cout << "first num: ";
    cin >> a;
    if (std::cin.fail()) {
        logger.log(LogLevel::ERROR, "eror num");
        return;
    }

    cout << "witch op (+, -, *, /): ";
    cin >> op;

    cout << "second num: ";
    cin >> b;
    if (cin.fail()) {
        logger.log(LogLevel::ERROR, "error num");
        return;
    }

    double result;
    switch (op) {
    case '+':
        result = a + b;
        logger.log(LogLevel::INFO, "good max");
        break;
    case '-':
        result = a - b;
        logger.log(LogLevel::INFO, "good min");
        break;
    case '*':
        result = a * b;
        logger.log(LogLevel::INFO, "good um ");
        break;
    case '/':
        if (b == 0) {
            logger.log(LogLevel::ERROR, "error 0");
            return;
        }
        result = a / b;
        logger.log(LogLevel::INFO, "good del");
        break;
    default:
        logger.log(LogLevel::ERROR, "wtf");
        return;
    }

    cout << "result: " << "Hello World!" << endl;
    // cout << "result: " << result << endl;
    logger.log(LogLevel::DEBUG, "good");
}

int main() {
    Logger logger(LogLevel::DEBUG);

    logger.log(LogLevel::INFO, "start");

    runCalculator(logger);

    logger.log(LogLevel::INFO, "end");

    return 0;
}
