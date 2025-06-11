CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -pedantic

all: TablasDeConversion

TablasDeConversion: TablasDeConversion.o Conversion.o
	$(CC) $(CFLAGS) -o TablasDeConversion TablasDeConversion.o Conversion.o

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c

test: ConversionTest.o Conversion.o
	$(CC) $(CFLAGS) -o ConversionTest ConversionTest.o Conversion.o
	./ConversionTest

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c

clean:
	rm -f *.o TablasDeConversion ConversionTest
