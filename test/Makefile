BINARY_FILE?=cmake/PipBoyTest
MAKE_FILE?=cmake/Makefile

all:
	make $(BINARY_FILE)

$(MAKE_FILE): lib/* tests/* cmake/CMakeLists.txt
	cd cmake; \
	cmake .

$(BINARY_FILE): $(MAKE_FILE) lib/* cmake/CMakeLists.txt tests/*
	cd cmake; \
	make

clean:
	rm -rf \
	cmake/CMakeFiles/ \
	cmake/Makefile \
	cmake/cmake_install.cmake \
	cmake/CMakeCache.txt \
	cmake/PipBoyTest
