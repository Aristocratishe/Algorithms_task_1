//
// Created by andrew on 25.12.2021.
//

#include "ArcGraph.h"

ArcGraph::ArcGraph(int size)
         : verticesCount(size)
{
};

ArcGraph::ArcGraph(const IGraph &graph)
         : ArcGraph(graph.VerticesCount())
{
    for (auto i = 0; i < verticesCount; ++i)
    {
        for (auto &j : graph.GetNextVertices(i))
        {
            pairEdge.emplace_back(i, j);
        }
    }
}

void ArcGraph::AddEdge(int from, int to)
{
    assert(0 <= from && from < verticesCount);
    assert(0 <= to && to < verticesCount);
    pairEdge.emplace_back(from, to);
}

std::vector<int> ArcGraph::GetNextVertices(int vertex) const
{
    assert(0 <= vertex && vertex < verticesCount);
    std::vector<int> nextVertices;
    for (auto &i : pairEdge)
    {
        if (i.first == vertex)
            nextVertices.push_back(i.second);
    }
    return  nextVertices;
}

std::vector<int> ArcGraph::GetPrevVertices(int vertex) const
{
    assert(0 <= vertex && vertex < verticesCount);
    std::vector<int> prevVertices;
    for (auto &i : pairEdge)
    {
        if (i.second == vertex)
            prevVertices.push_back(i.first);
    }
    return prevVertices;
}

int ArcGraph::VerticesCount() const {
    return (int)verticesCount;
}
