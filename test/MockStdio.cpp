#include "MockStdio.h"

using namespace std;

static function<FILE*(const char*, const char*)> _fopen;

MockStdio::MockStdio()
{
	_fopen = [this](const char* filename, const char* mode) {
		return fopen(filename, mode);
	};
}

MockStdio::~MockStdio() {
}

extern FILE *fopen (const char *__restrict __filename,
                    const char *__restrict __modes) __wur{
    return _fopen(__filename, __modes);
}