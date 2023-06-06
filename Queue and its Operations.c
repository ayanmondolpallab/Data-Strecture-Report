
#include <stdio.h>
#include <stdlib.h>

// Maximum number of elements in the queue
#define MAX_SIZE 100

// Queue structure
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Function to initialize the queue
void initialize(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue Overflow. Cannot enqueue element %d.\n", item);
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->items[queue->rear] = item;
    printf("Enqueued element %d into the queue.\n", item);
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow. Cannot dequeue element from an empty queue.\n");
        return -1;
    }

    int item = queue->items[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    printf("Dequeued element %d from the queue.\n", item);
    return item;
}

// Function to get the front element of the queue without removing it
int front(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot get the front element.\n");
        return -1;
    }

    return queue->items[queue->front];
}

// Function to get the rear element of the queue without removing it
int rear(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot get the rear element.\n");
        return -1;
    }

    return queue->items[queue->rear];
}

int main() {
    struct Queue queue;
    initialize(&queue);

    // Enqueue elements into the queue
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    // Dequeue elements from the queue
    dequeue(&queue);
    dequeue(&queue);

    // Get the front and rear elements of the queue
    int frontElement = front(&queue);
    if (frontElement != -1) {
        printf("Front element of the queue: %d\n", frontElement);
    }

    int rearElement = rear(&queue);
    if (rearElement != -1) {
        printf("Rear element of the queue: %d\n", rearElement);
    }

    return 0;
}
