#ifndef LAB5_MENU_H
#define LAB5_MENU_H

#include "../Graph/Graph.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "../Messages/Messages.h"

//  Максимальное количество вершин при таймированни
#define TIMING_MAX_COUNT 30

#define textMenu    "1. New empty graph\n"          \
                    "2. Add vertex\n"               \
                    "3. Add edge\n"                 \
                    "4. Display graph\n"            \
                    "5. Remove vertex\n"            \
                    "6. Remove edge\n"              \
                    "7. Breadth first search\n"     \
                    "8. Dijkstra\n"                 \
                    "9. Topological sorting\n"      \
                    "0. exit\n"                     \


//  Основная функция меню.
void menu();

//  Возвращает новую строку из пользовательского ввода.
char* getStr();
//  Возвращает число из пользовательского ввода в заданном диапазоне.
int getInt(int min, int max);


//  Обёртка. Выделяется память под пустой граф
void createNewGraph(Graph** graph);
//  Обёртка. Добавление новой вершины
void addNewVertex(Graph* graph);
//  Обёртка. Добавление нового ребра
void addNewEdge(Graph* graph);
//  Вывести списки смежности на экран
void displayGraph(Graph* graph);
//  Обёртка. Удаление вершины
void removeVertex(Graph* graph);
//  Обёртка. Удалнеие ребра
void removeEdge(Graph* graph);
//  Удаление всего графа
void deleteGraph(Graph* graph);
//  Обёртка. Поиск в ширину
void startBFS(Graph* graph);
//  Обёртка. Дейкстра
void dijkstraAlg(Graph* graph);

// Обёртка. Топологическая сортировка
void topologicalSorting(Graph *graph);

void checkTopSort(Graph *graph, int *colors, int current_index, int *sort, int *signal, int *counter);



#endif
