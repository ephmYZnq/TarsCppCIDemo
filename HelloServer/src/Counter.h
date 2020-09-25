#ifndef __COUNTER_H_
#define __COUNTER_H_
#include "util/tc_singleton.h"
#include "util/tc_thread.h"
#include "util/tc_thread_rwlock.h"

// A simple monotonic counter.
class Counter: public tars::TC_Singleton<Counter> {
public:
    // Creates a counter that starts at 0.
    Counter() : counter_(0) {}

    // Returns the current counter value, and increments it.
    int Increment();

    // Returns the current counter value, and decrements it.
    int Decrement();

    // Prints the current counter value to STDOUT.
    int GetCount();

private:
    int counter_;
    tars::TC_ThreadRWLocker rwlocker_;

};

#endif  // __COUNTER_H_
