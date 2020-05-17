#include "gtest/gtest.h"
#include "lib/stack.h"

using namespace ds;

TEST(stack_test, empty_pop_test)
{
    stack<int> s;
    try
    {
        s.pop();
        FAIL();
    }
    catch (ds::empty const & err)
    {
        SUCCEED();
    }
    catch(...)
    {
        FAIL();
    }
}

TEST(stack_test, empty_peek_test)
{
    stack<int> s;
    try
    {
        s.peek();
        FAIL();
    }
    catch (ds::empty const & err)
    {
        SUCCEED();
    }
    catch(...)
    {
        FAIL();
    }
}

TEST(stack_test, empty_size_test)
{
    stack<int> s;
    EXPECT_EQ(s.size(), 0);
}

TEST(stack_test, push_one_test)
{
    stack<int> s;
    s.push(1);
    EXPECT_EQ(s.size(), 1);
}

TEST(stack_test, push_five_test)
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    EXPECT_EQ(s.size(), 5);
}

TEST(stack_test, push_pop_one_test)
{
    stack<int> s;
    s.push(10);
    EXPECT_EQ(s.pop(), 10);
    EXPECT_EQ(s.size(), 0);
}

TEST(stack_test, push_pop_five_test)
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    EXPECT_EQ(s.size(), 5);
    EXPECT_EQ(s.pop(), 50);
    EXPECT_EQ(s.size(), 4);
    EXPECT_EQ(s.pop(), 40);
    EXPECT_EQ(s.size(), 3);
    EXPECT_EQ(s.pop(), 30);
    EXPECT_EQ(s.size(), 2);
    EXPECT_EQ(s.pop(), 20);
    EXPECT_EQ(s.size(), 1);
    EXPECT_EQ(s.pop(), 10);
    EXPECT_EQ(s.size(), 0);
}

TEST(stack_test, push_peek_one_test)
{
    stack<int> s;
    s.push(10);
    EXPECT_EQ(s.peek(), 10);
    EXPECT_EQ(s.size(), 1);
}

TEST(stack_test, push_peek_five_test)
{
    stack<int> s;
    s.push(10);
    EXPECT_EQ(s.peek(), 10);
    EXPECT_EQ(s.size(), 1);
    s.push(20);
    EXPECT_EQ(s.peek(), 20);
    EXPECT_EQ(s.size(), 2);
    s.push(30);
    EXPECT_EQ(s.peek(), 30);
    EXPECT_EQ(s.size(), 3);
    s.push(40);
    EXPECT_EQ(s.peek(), 40);
    EXPECT_EQ(s.size(), 4);
    s.push(50);
    EXPECT_EQ(s.peek(), 50);
    EXPECT_EQ(s.size(), 5);
}

TEST(stack_test, push_peek_pop_one_test)
{
    stack<int> s;
    s.push(1);
    EXPECT_EQ(s.peek(), 1);
    EXPECT_EQ(s.pop(), 1);
    EXPECT_EQ(s.size(), 0);
}