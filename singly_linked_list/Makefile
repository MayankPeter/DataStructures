PATH_O=./obj_files
PATH_E=./exe_files
OBJ_FILES = main.o print.o add_mid.o count.o

all: exe
exe: $(OBJ_FILES)
	cc $(PATH_O)/main.o $(PATH_O)/print.o $(PATH_O)/add_mid.o $(PATH_O)/count.o -o $(PATH_E)/exe
%.o : %.c
	cc -c $< -o $(PATH_O)/$@ 


clean:
	rm $(PATH_O)/*.o $(PATH_E)/*exe

#dependency chain
main.o: main.c print.o
print.o: print.c add_mid.o
add_mid.o: add_mid.c count.o
count.o: count.c
