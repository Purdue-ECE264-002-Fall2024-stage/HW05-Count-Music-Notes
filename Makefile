# ***
# *** DO NOT modify this file 
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR)
VALGRIND = valgrind --tool=memcheck --leak-check=full --verbose

SRCS = main.c hw05.c
OBJS = $(SRCS:%.c=%.o)

hw05: $(OBJS) 
	$(GCC) $(OBJS) -o hw05

.c.o: 
	$(GCC) -c $*.c 

testall: test1 test2 test3

test1: hw05
	./hw05 inputs/FMP_C1_F01_Beethoven_FateMotive_Sibelius.csv > output1
	diff output1 expected/expected1

test2: hw05
	./hw05 inputs/FMP_C1_F10_Beethoven_Fifth-MM1-21_Sibelius-Orchestra.csv > output2
	diff output2 expected/expected2

test3: hw05
	./hw05 inputs/FMP_C1_F12_Bach_BWV846_Sibelius-Tracks.csv > output3
	diff output3 expected/expected3


clean: # remove all machine generated files
	rm -f hw05 *.o output?? *~

memory: $(hw05)
	$(VALGRIND) --log-file=log1 ./hw05 inputs/FMP_C1_F01_Beethoven_FateMotive_Sibelius.csv > output1
	$(VALGRIND) --log-file=log2 ./hw05 inputs/FMP_C1_F10_Beethoven_Fifth-MM1-21_Sibelius-Orchestra.csv > output2
	$(VALGRIND) --log-file=log3 ./hw05 inputs/FMP_C1_F12_Bach_BWV846_Sibelius-Tracks.csv > output3

