my_graph: my_mat.o my_graph.o
# my_graph: my_graph.o

my_graph.o: my_graph.c
	gcc -fPIC -Wall -c my_graph.c

my_mat.o: my_mat.c
	gcc -fPIC -Wall -c my_mat.c

clean:
	rm *.o *.a my_graph