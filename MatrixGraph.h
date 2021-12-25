//
// Created by andrew on 25.12.2021.
//

#ifndef TASK_1_MATRIXGRAPH_H
#define TASK_1_MATRIXGRAPH_H

#include "IGraph.h"
#include <vector>
#include <cassert>

class MatrixGraph :  public IGraph {
private:
    std::vector<std::vector<bool>> adjacencyMatrix;
public:
    explicit MatrixGraph(int size);
    explicit MatrixGraph(const IGraph &graph);
    ~MatrixGraph() override = default;
    void AddEdge(int from, int to) override;
    int VerticesCount() const override;
    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;
};

#endif //TASK_1_MATRIXGRAPH_H
