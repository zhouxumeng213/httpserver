ROOT_PATH=$(shell pwd)
SERVER_BIN=httpd
CLIENT_BIN=demo_client

CC=gcc
FLAGS=
LDFLAGS=

SERVER_SRC=httpd.c
CLIENT_SRC=demo_client.c

.PHONY:all
all:$(SERVER_BIN) $(CLIENT_BIN)
$(SERVER_BIN):$(SERVER_SRC)
	$(CC) -o $@ $^ $(FLAGS) $(LDFLAGS)
.PHONY:clean
clean:

