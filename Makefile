TARGET = fill

all:$(TARGET)

fill:fill.c
	gcc -Wall -O2 -o $@ $<


clean:
	rm -rf $(TARGET)

