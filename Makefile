all:
	time gcc -oobj_runner main.c obj.c
	echo time taken for compilation
	time ./obj_runner
	echo time taken for complilation
clean:
	rm ./obj_runner
