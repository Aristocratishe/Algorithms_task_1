//
// Created by andrew on 25.12.2021.
//

#ifndef TASK_1_ARCGRAPH_H
#define TASK_1_ARCGRAPH_H


#include "IGraph.h"
#include <cassert>

class ArcGraph: public IGraph {
public:
    explicit ArcGraph(int size);
    explicit ArcGraph(const IGraph &graph);
    ~ArcGraph() override = default;
    void AddEdge(int from, int to) override;
    int VerticesCount() const override;
    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::pair<int, int>> pairEdge;
    int verticesCount;
};

#endif //TASK_1_ARCGRAPH_H
