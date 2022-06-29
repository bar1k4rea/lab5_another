#ifndef LAB5_GRAPH_H
#define LAB5_GRAPH_H



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <float.h>
#include <time.h>

#include "../Messages/Messages.h"

typedef struct Info {
    char* name;
    int x;
    int y;
} Info;

//  Узел графа
typedef struct Node {
    Info* info;
    struct GraphNode* list;
} Node;

//  Узел списка смежности
typedef struct GraphNode {
    Node* node;
    double weight;
    struct GraphNode* next;
} GraphNode;

//  Структура графа
typedef struct Graph {
    int count;
    Node* adjList;
} Graph;

//  Добавление вершины в граф. Сложность O(1)
Node* addVert(Graph* graph, Info* info);
//  Поиск вершины в графе. Сложность O(N)
Node* findVert(Graph* graph, char* name);
//  Добавление вершины в граф. Сложность O(N)
GraphNode* addEdge(Graph* graph, char* out, char* in, int weight);
//  Удаление вершины в графе. Сложность O(N^2)
Node* removeVert(Graph* graph, char* name);
//  Удаление ребра в графе. Сложность O(N)
Node* removeEdg(Graph* graph, char* from, char* to);
//  Поиск в ширину. Сложность O(N^2)
bool bfs(Graph* graph, Node* node, Node* nodeToFind, int* parent);
//  Алгоритм Дейкстра. Сложность O(N^3)
double dijkstra(Graph* graph, char* name, char* distName);

//  Возващает вес ребра между двумя вершинами
double getWeight(Node* first, Node* second);
//  Удаление списка смежности
void removeList(GraphNode* node);
//  Возвращает индекс вершины в массиве
int indexOfNode(Graph* graph, Node* node);
//  Возвращает минимальное расстояние в массиве
int minDistance(int V, double* dist, bool* sptSet);

//  Создаёт структуру информации.
Info* createInfo(char* name, int x, int y);
//  Создаёт узел списка смежности. Выделяет память
GraphNode* createGNode(Node* node, double weigh);
//  Добавляет новый элемент в список смежности
GraphNode* addGNode(Node* node, Node* toAdd, int weight);
//  Удаляет элемент из списка смежности
Node* removeGNode(Node* node, Node* toDel);
//  Поиск элемента в списке смежности
GraphNode* findGNode(Node* node, Node* toFind);
//  Выделяется память под пустой граф
Graph* createGraph();

int findIndexOfNode(Graph *graph, char *name);

#include "../Queue/Queue.h"
#endif
