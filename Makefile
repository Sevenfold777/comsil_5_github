cc=g++
cflags = -W -g -O2
target = main

objects = main.o array.o rangearray.o

$(target) : $(objects)
	$(cc) $(cflags) -o $(target) $(objects)

$(objects) : *.h

.PHONY : clean
clean :
	rm $(target) $(objects)