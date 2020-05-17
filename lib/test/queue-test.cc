#include "gtest/gtest.h"
#include "lib/queue.h"

using namespace ds;

TEST(queue_test, empty_pop_front_test)
{
    queue<int> q;
    EXPECT_THROW(q.pop_front(), ds::empty);
}

TEST(queue_test, empty_front_test)
{
    queue<int> q;
    EXPECT_THROW(q.front(), ds::empty);
}

TEST(queue_test, empty_size_test)
{
    queue<int> q;
    EXPECT_EQ(q.size(), 0);
}

TEST(queue_test, push_back_one_test)
{
    queue<int> q;
    q.push_back(1);
    EXPECT_EQ(q.size(), 1);
    EXPECT_EQ(q.front(), 1);
}

TEST(queue_test, push_back_five_test)
{
    queue<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_back(4);
    q.push_back(5);
    EXPECT_EQ(q.size(), 5);
}

TEST(queue_test, push_back_pop_front_one_test)
{
    queue<int> q;
    q.push_back(10);
    EXPECT_EQ(q.pop_front(), 10);
    EXPECT_EQ(q.size(), 0);
}

TEST(queue_test, push_back_pop_front_five_test)
{
    queue<int> q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_back(40);
    q.push_back(50);
    EXPECT_EQ(q.size(), 5);
    EXPECT_EQ(q.pop_front(), 10);
    EXPECT_EQ(q.size(), 4);
    EXPECT_EQ(q.pop_front(), 20);
    EXPECT_EQ(q.size(), 3);
    EXPECT_EQ(q.pop_front(), 30);
    EXPECT_EQ(q.size(), 2);
    EXPECT_EQ(q.pop_front(), 40);
    EXPECT_EQ(q.size(), 1);
    EXPECT_EQ(q.pop_front(), 50);
    EXPECT_EQ(q.size(), 0);
}

TEST(queue_test, push_back_front_one_test)
{
    queue<int> q;
    q.push_back(10);
    EXPECT_EQ(q.front(), 10);
    EXPECT_EQ(q.size(), 1);
}

TEST(queue_test, push_back_front_two_test)
{
    queue<int> q;
    q.push_back(10);
    EXPECT_EQ(q.front(), 10);
    q.push_back(20);
    EXPECT_EQ(q.front(), 10);
}

TEST(queue_test, push_back_pop_back_front_two_test)
{
    queue<int> q;
    q.push_back(10);
    q.push_back(20);
    EXPECT_EQ(q.front(), 10);
    q.pop_front();
    EXPECT_EQ(q.front(), 20);
}