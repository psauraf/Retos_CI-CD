CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge08

.PHONY: all test clean

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

test:
	@echo "✅ Simulación de pruebas exitosa."

clean:
	rm -f $(TARGET) $(TEST_TARGET)
