.PHONY: profile
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
	g++ --std=c++11 -pipe -Wall -Wextra -O2 -g -pg ./profiling.cpp -o profile

pack:
	echo pack
	
