CC=gcc

PKGS = raylib

CFLAGS += -Wall -Wextra -pedantic 
CFLAGS += -Isrc/include
CFLAGS += $$(pkg-config --cflags $(PKGS))

LIBS += -lalloc -lm
LIBS += $$(pkg-config --libs $(PKGS))


OBJS += $(CACHE)/main.o


$(CACHE)/main.o: src/spiritale/main.c
	$(CC) $(CFLAGS) -c src/spiritale/main.c -o $@


$(RELEASE)/$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LIBS) -o $(RELEASE)/$(TARGET)






