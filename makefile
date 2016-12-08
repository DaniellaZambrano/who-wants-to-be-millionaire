HEADERS_PATH = ./include./
SOURCES_PATH = ./src

SOURCES = $(SOURCES_PATH)/*.c 
OBJECTS = *.o
MAIN = main.c

CC = gcc
EXECUTABLE = wwtbm.out

all:$(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS)
	$(CC) -I $(HEADERS_PATH) $^ $(MAIN) -o $@

$(OBJECTS):$(SOURCES)
	$(CC) -I $(HEADERS_PATH) -c $^

clean:
	$(RM) -v $(EXECUTABLE) $(OBJECTS)
