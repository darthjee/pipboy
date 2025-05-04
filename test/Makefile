all:
	make tests/Makefile

tests/Makefile:
	cd cmake; \
	cmake .

tests/cmake/PipBoyTest: tests/Makefile
	cd cmake; \
	make

clean:
	rm -rf \
	test/cmake/CMakeFiles/ \
	test/cmake/Makefile \
	test/cmake/cmake_install.cmake \
	test/cmake/CMakeCache.txt \
	test/cmake/PipBoyTest