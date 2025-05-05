BINARY_FILE?=cmake/PipBoyTest
MAKE_FILE?=cmake/Makefile
REQUIRED_FILES=lib/* tests/* cmake/CMakeLists.txt

all:
	make $(BINARY_FILE)

$(MAKE_FILE): $(REQUIRED_FILES)

	cd cmake; \
	cmake .

$(BINARY_FILE): $(MAKE_FILE) $(REQUIRED_FILES)
	cd cmake; \
	make

clean:
	rm -rf \
	cmake/CMakeFiles/ \
	cmake/Makefile \
	cmake/cmake_install.cmake \
	cmake/CMakeCache.txt \
	cmake/PipBoyTest
