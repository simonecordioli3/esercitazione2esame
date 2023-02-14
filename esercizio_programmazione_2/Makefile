CC=gcc
CFLAGS=-std=gnu99

all: list_select remove_char

list_select: FORCE
	rm -rf *~ list_select
	$(CC) -o list_select list_select.c list_select_main.obj $(CFLAGS)

remove_char: FORCE
	rm -rf *~ remove_char
	$(CC) -o remove_char remove_char.c remove_char_main.obj $(CFLAGS)

clean:
	rm -rf *~ list_select remove_char

FORCE: