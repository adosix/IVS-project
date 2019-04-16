.PHONY: profile tests
all: $(TARGET) profile
run:
	test -f $(TARGET) || make $(TARGET)
	./$(TARGET)

doc: Doxyfile
	doxygen $<

############ tests #####################################

test:
	test -f runTests || make tests 
	./runTests 

tests: tests/tests_build/Makefile
	cd tests/tests_build/ && make && cd ../..

tests/tests_build/Makefile: tests/tests_build/tests.pro
	cd tests/tests_build/ && qmake tests.pro && cd ../../

########################################################

profile: 
	test -f profile || make profile_comp
	./profile

profile_comp:
	g++ --std=c++11 -pipe -Wall -Wextra -g -pg ./profiling.cpp -o profile

pack:
	echo pack
	
