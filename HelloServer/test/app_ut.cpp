#define private public
#include "gtest/gtest.h"
#include "Counter.h"

namespace {
// Tests the Increment() method.

TEST(Counter, Increment) {
    Counter* c = Counter::getInstance();

    EXPECT_EQ(0, c->Increment());
    EXPECT_EQ(1, c->Increment());
    EXPECT_EQ(2, c->Increment());
    EXPECT_EQ(3, c->Increment());

    c->counter_ = 0;
}

TEST(Counter, Decrement) {
    Counter* c = Counter::getInstance();

    EXPECT_EQ(0, c->Decrement());
    EXPECT_EQ(0, c->Increment());
    EXPECT_EQ(1, c->Increment());
    EXPECT_EQ(2, c->Decrement());
    EXPECT_EQ(1, c->Decrement());

    c->counter_ = 0;
}

TEST(Counter, GetCount) {
    Counter* c = Counter::getInstance();

    EXPECT_EQ(0, c->GetCount());
    EXPECT_EQ(0, c->Increment());
    EXPECT_EQ(1, c->GetCount());
    EXPECT_EQ(1, c->Increment());
    EXPECT_EQ(2, c->GetCount());
    EXPECT_EQ(2, c->Decrement());
    EXPECT_EQ(1, c->GetCount());

    c->counter_ = 0;
}

}  // namespace
