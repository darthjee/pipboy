BINARY_FILE?=tests/cmake/PipBoyTest
MAKE_FILE?=tests/Makefile

all:
	make $BINARY_FILE

$MAKE_FILE:
	cd cmake; \
	cmake .

$BINARY_FILE: $MAKE_FILE
	cd cmake; \
	make

clean:
	rm -rf \
	test/cmake/CMakeFiles/ \
	test/cmake/Makefile \
	test/cmake/cmake_install.cmake \
	test/cmake/CMakeCache.txt \
	test/cmake/PipBoyTest