# gmock-boilerplate

### boilerplate project to show how to test with gtest and gmock
- how to mock interface with virtual methods
- how to mock global functions which have no class body
- how to make code coverage report in the browser
- how to make cobertura report to integrate with CI Build

## Prerequisites

```
sudo apt-get install cmake gcovr lcov
```

## How to generate Mock class
```
cd test/generator
./gmock_gen.py ../../include/Shape.h
```

## How to build

```
mkdir build
cd build
cmake ..
make gmock-boilerplate_test -j 8
```

## How to test

```
cd build/test
./gmock-boilerplate_test
```
or
```
cd build/test
ctest -VV
```

## How to make code coverage report

### coverage report with browser
```
cd build
make gmock-boilerplate_coverage
```
- open build/coverage/index.html in your favorite browser

### cobertura report (xml format supported by Jenkins)
```
cd build
make gmock-boilerplate_cobertura
```
- add build/cobertura.xml to Jenkins Job (should install Jenkins Cobertura Plugin)
