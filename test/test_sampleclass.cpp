#include "../src/sampleclass.h"

#include "gtest/gtest.h"

namespace appname {
namespace {

// The fixture for testing the class.
class SampleClassTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SampleClassTest() {
     // You can do set-up work for each test here.
  }

  ~SampleClassTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  // Class members declared here can be used by all tests in the test suite
};

TEST_F(SampleClassTest, MethodXDoesY) {
  SampleClass sc;
  ASSERT_EQ(0,1);
}

}  // namespace
}  // namespace appname