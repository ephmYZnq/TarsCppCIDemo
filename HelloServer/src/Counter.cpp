#include <stdio.h>

#include "Counter.h"

// using namespace tars;

// Returns the current counter value, and increments it.
int Counter::Increment() {
    tars::TC_ThreadWLock wlock(rwlocker_);
    return counter_++;
}

// Returns the current counter value, and decrements it.
// counter can not be less than 0, return 0 in this case
int Counter::Decrement() {
    if (counter_ == 0) {
        tars::TC_ThreadRLock rlock(rwlocker_);
        return counter_;
    } else  {
        tars::TC_ThreadWLock wlock(rwlocker_);
        return counter_--;
    }
}

// Prints the current counter value to STDOUT.
int Counter::GetCount() {
    tars::TC_ThreadRLock rlock(rwlocker_);
    return counter_;
}
