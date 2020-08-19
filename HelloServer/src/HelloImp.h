#ifndef _HelloImp_H_
#define _HelloImp_H_

#include "servant/Application.h"
#include "Hello.h"

/**
 *
 *
 */
class HelloImp : public TarsCppCIDemo::Hello
{
public:
    /**
     *
     */
    virtual ~HelloImp() {}

    /**
     *
     */
    virtual void initialize();

    /**
     *
     */
    virtual void destroy();

    /**
     *
     */
    virtual int test(tars::TarsCurrentPtr current) { return 0;};

    
    /**
     * @param count out 返回计数值
     * @return 服务状态码
     */
    virtual int increment(int& count, tars::TarsCurrentPtr current);
    
    /**
     * @param count out 返回计数值
     * @return 服务状态码
     */
    virtual int decrement(int& count, tars::TarsCurrentPtr current);
    
    /**
     * @param count out 返回计数值
     * @return 服务状态码
     */
    virtual int getCount(int& count, tars::TarsCurrentPtr current);
};
/////////////////////////////////////////////////////
#endif
