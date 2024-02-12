all: my_graph my_Knapsack

my_graph: my_graph.a

my_Knapsack: my_Knapsack.a

my_graph.a: my_mat.o my_graph.o
	ar rcs my_graph.a my_mat.o my_graph.o
	#ranlib my_graph.a

my_Knapsack.a: my_Knapsack.o
	ar rcs my_Knapsack.a my_Knapsack.o
	#ranlib my_Knapsack.a

my_graph.o: my_graph.c
	gcc -Wall -c my_graph.c

my_mat.o: my_mat.c
	gcc -Wall -c my_mat.c

my_Knapsack.o: my_Knapsack.c
	gcc -Wall -c my_Knapsack.c

clean:
	rm *.o *.a my_graph my_Knapsack
