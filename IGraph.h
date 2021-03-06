//
// Created by andrew on 24.12.2021.
//

#ifndef TASK_1_IGRAPH_H
#define TASK_1_IGRAPH_H

#include <vector>

struct IGraph {
    virtual ~IGraph() = default;
    virtual void AddEdge(int from, int to) = 0;
    virtual int VerticesCount() const = 0;
    virtual std::vector<int> GetNextVertices(int vertex) const = 0;
    virtual std::vector<int> GetPrevVertices(int vertex) const = 0;
};

#endif //TASK_1_IGRAPH_H
