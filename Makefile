LIBS = cmocka

test: random_test.c
	gcc -o random_test random_test.c -l $(LIBS)
	./random_test

