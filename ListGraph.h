//
// Created by andrew on 24.12.2021.
//

#ifndef TASK_1_LISTGRAPH_H
#define TASK_1_LISTGRAPH_H

#include "IGraph.h"
#include <cassert>

class ListGraph: public IGraph {
public:
    explicit ListGraph(int size);
    explicit ListGraph(const IGraph &graph);
    ~ListGraph() override = default;
    void AddEdge(int from, int to) override;
    int VerticesCount() const override;
    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::vector<int>> adjacencyLists;
};

#endif //TASK_1_LISTGRAPH_H
