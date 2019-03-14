CFLAGS = -I ./include
##LIB   = ./libbfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandlr

all: asteroids

asteroids: asteroids.cpp log.cpp timers.cpp thangH.cpp bryanG.cpp eddieE.cpp kyT.cpp JoshuaC.cpp
	g++ $(CFLAGS) asteroids.cpp log.cpp timers.cpp thangH.cpp bryanG.cpp eddieE.cpp kyT.cpp JoshuaC.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -o asteroids

clean:
	rm -f asteroids
	rm -f *.o

