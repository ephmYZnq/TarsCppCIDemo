#include "HelloImp.h"
#include "servant/Application.h"
#include "Counter.h"

using namespace std;

//////////////////////////////////////////////////////
void HelloImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void HelloImp::destroy()
{
    //destroy servant here:
    //...
}

int HelloImp::increment(int& count, tars::TarsCurrentPtr current) {
    count = Counter::getInstance()->Increment();
    return 0;
}

int HelloImp::decrement(int& count, tars::TarsCurrentPtr current) {
    count = Counter::getInstance()->Decrement();
    return 0;
}

int HelloImp::getCount(int& count, tars::TarsCurrentPtr current) {
    count = Counter::getInstance()->GetCount();
    return 0;
}