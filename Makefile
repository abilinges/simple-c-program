CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = addition

.PHONY: all clean check distcheck

all: $(TARGET)

$(TARGET): addition.c
	$(CC) $(CFLAGS) -o $(TARGET) addition.c

check: $(TARGET)
	@printf "2 3\n" | ./$(TARGET) > /tmp/addition_output.txt
	@grep -q "sum = 5" /tmp/addition_output.txt

distcheck: check

clean:
	rm -f $(TARGET)
