#include <stdio.h>

#define MAX_NODES 10

// Function to add an edge between two nodes in the graph
void addEdge(int adjacencyMatrix[][MAX_NODES], int startNode, int endNode) {
    adjacencyMatrix[startNode][endNode] = 1;
    adjacencyMatrix[endNode][startNode] = 1;
}

// Function to display the adjacency matrix representation of the graph
void displayGraph(int adjacencyMatrix[][MAX_NODES], int numNodes) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numNodes, numEdges;

    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &numNodes);

    int adjacencyMatrix[MAX_NODES][MAX_NODES] = {0};

    printf("Enter the number of edges in the graph: ");
    scanf("%d", &numEdges);

    printf("Enter the edges (node pairs):\n");
    for (int i = 0; i < numEdges; i++) {
        int startNode, endNode;
        scanf("%d %d", &startNode, &endNode);
        addEdge(adjacencyMatrix, startNode, endNode);
    }

    displayGraph(adjacencyMatrix, numNodes);

    return 0;
}

