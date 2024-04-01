
.PHONY: all run clean

all:
	gcc cube.c -lm -o cube

run:
	./cube

clean:
	rm -i cube

