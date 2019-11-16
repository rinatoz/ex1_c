CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_BASIC_MATH=basicMath.o
OBJECTS_POWER=power.o
FLAGS= -Wall -g

all: limymath.so limymath.a mains maind	
mains: $(OBJECTS_MAIN) limymath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) limymath.a
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./limymath.so
limymath.so: $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
	$(CC) -shared -o limymath.so $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
limymath.a: $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
	$(AR) -rcs limymath.a $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER) 	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains progmaind
