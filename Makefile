.PHONY: all clean

all:
	g++ deleteself.cpp -o deleteself
	g++ heapoverflow.cpp -o heapoverflow
	g++ multithreading.cpp -pthread -o multithreading

clean: 
	rm heapoverflow deleteself multithreading
