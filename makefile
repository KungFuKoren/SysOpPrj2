my_graph: my_mat.o my_graph.o

my_Knapsack: my_Knapsack.o

my_graph.o: my_graph.c
	gcc -fPIC -Wall -c my_graph.c

my_mat.o: my_mat.c
	gcc -fPIC -Wall -c my_mat.c

my_Knapsack.o: my_Knapsack.c
	gcc -fPIC -Wall -c my_Knapsack.c

clean:
	rm *.o *.a my_graph my_Knapsack