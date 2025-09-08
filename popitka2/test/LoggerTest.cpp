#include <gtest/gtest.h>
#include <sstream>
#include "../src/Logger.h"

class LoggerTestFixture : public ::testing::Test {
protected:
    std::ostringstream buffer;
    std::streambuf* oldCout;

    void SetUp() override {
        oldCout = std::cout.rdbuf(buffer.rdbuf());
    }

    void TearDown() override {
        std::cout.rdbuf(oldCout);
    }

    std::string getOutput() {
        return buffer.str();
    }
};

TEST_F(LoggerTestFixture, DefaultLevel) {
    Logger logger;
    logger.log(LogLevel::INFO, "test");
    std::string out = getOutput();
    EXPECT_NE(out.find("INFO"), std::string::npos);
    EXPECT_NE(out.find("test"), std::string::npos);
}

TEST_F(LoggerTestFixture, SetGetLevel) {
    Logger logger(LogLevel::WARNING);
    logger.log(LogLevel::INFO, "invisible");
    std::string out = getOutput();
    EXPECT_EQ(out, "");
}

TEST_F(LoggerTestFixture, OutputPositive) {
    Logger logger(LogLevel::DEBUG);
    logger.log(LogLevel::ERROR, "error test");
    std::string out = getOutput();
    EXPECT_NE(out.find("ERROR"), std::string::npos);
    EXPECT_NE(out.find("error test"), std::string::npos);
}

TEST_F(LoggerTestFixture, OutputFiltered) {
    Logger logger(LogLevel::ERROR);
    logger.log(LogLevel::DEBUG, "debug msg");
    std::string out = getOutput();
    EXPECT_EQ(out, "");
}
