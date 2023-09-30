#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Mocks
#include "mock/MockTurtle.h"

// UUT
#include "main/Painter.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

using ::testing::AtLeast;                         // #1

TEST(PainterTest, CanDrawSomething) {
  MockTurtle turtle;                              // #2
  EXPECT_CALL(turtle, PenDown())                  // #3
      .Times(AtLeast(1));

  Painter painter(&turtle);                       // #4

  EXPECT_TRUE(painter.DrawCircle(0, 0, 10));      // #5
}
