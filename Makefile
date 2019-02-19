CFLAGS = -I ./include
##LIB    = ./libggfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: asteroids

asteroids: asteroids.cpp log.cpp timers.cpp thangH.cpp JoshuaC.cpp bryanG.cpp kyT.cpp eddieE.cpp
	g++ $(CFLAGS) asteroids.cpp log.cpp timers.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -o asteroids

clean:
	rm -f asteroids
	rm -f *.o

