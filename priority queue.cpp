#include<iostream>
using namespace std;

int extract_max( int heap[], int heap_size)
{
    int max_item = heap[1];

    heap[1] = heap[heap_size];

    heap_size--;

    max_heapify(heap, heap_size, 1);

    return max_item;
}

int insert_node( int heap[], int heap_size, int node)
{
    int i, p, t;

    heap_size++;
    heap[heap_size] = node;
    i = heap_size;

    while( i > 1 && heap[i] > heap[parent(i])
          {
              p = parent(i);

              t = heap[p];
              heap[p] = heap[i];
              heap[i] = t;

              i = p;
          }

          return heap_size;
}

int main()
{



    return 0;
}
