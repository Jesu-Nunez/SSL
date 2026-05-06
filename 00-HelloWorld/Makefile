# Nombre del compilador
CC = gcc

# Estandar del lenguaje
STD = -std=c23

# Flags adicionales
CFLAGS = -Wall

# Nombre del ejecutable
TARGET = otuput.txt

# Archivo fuente
SRC = hello.c

# Regla principal
all: $(TARGET)

# Compilar
$(TARGET): $(SRC)
	$(CC) $(STD) $(CFLAGS) $(SRC) -o $(TARGET)

# Ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Limpiar archivos generados
clean:
	rm -f $(TARGET)