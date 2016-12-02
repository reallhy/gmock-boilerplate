#ifndef GMOCK_BOILERPLATE_MOCKSTDIO_H
#define GMOCK_BOILERPLATE_MOCKSTDIO_H

#include <gmock/gmock.h>

struct MockStdio{
    MockStdio();
    ~MockStdio();

    MOCK_METHOD2(fopen, FILE*(const char*, const char*));
};
#endif