//
// Created by andrew on 25.12.2021.
//

#ifndef TASK_1_SETGRAPH_H
#define TASK_1_SETGRAPH_H

#include "IGraph.h"
#include <vector>
#include <cassert>
#include <set>

class SetGraph : public IGraph {
private:
    std::vector<std::set<int>> adjacencyLists;
public:
    explicit SetGraph(int size);
    explicit SetGraph(const IGraph &graph);
    ~SetGraph() override = default;
    void AddEdge(int from, int to) override;
    int VerticesCount() const override;
    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;
};

#endif //TASK_1_SETGRAPH_H
