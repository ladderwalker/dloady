CC=gcc
CFLAGS=-g -Wall

BIN=dloady

all: $(BIN)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ -lcurl


clean:
	$(RM) -rf $(BIN) *dSYM	