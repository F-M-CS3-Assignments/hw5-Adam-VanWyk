

#include "Dijkstra.h"
#include "Graph.h"
#include "BetterPriorityQueue.h"
#include <map>
#include <set>

using namespace std;

int dijkstra(nodekey_t start, nodekey_t end, const Graph *g){
    int answer_final = -1;
    map<nodekey_t, int> distances;
    set <nodekey_t> Nodes = g->GetNodes();
    BetterPriorityQueue bpq;
    BPQNode startNode;
    startNode.gnode = start;
    startNode.pri = 0;
    bpq.push(startNode); // initialize bpq and put starting node in


    for (nodekey_t node : Nodes){
        distances[node] = INT16_MAX; // set all values to large
    }
    distances[start] = 0; // initialize starting node

    while (!bpq.empty()){
        BPQNode curr_node = bpq.top(); // get top prioroity node
        bpq.pop();

        if (curr_node.gnode == end){ // if curr_node is the ending node, we have finished the path
            answer_final = distances[end];
            break;
        }
        set<const GraphEdge*> neighbors = g->GetOutwardEdgesFrom(curr_node.gnode);
        for (const GraphEdge* edge : neighbors){
            nodekey_t neighbor = edge->to;
            int dist = distances[curr_node.gnode] + edge->weight;

            if (dist < distances[neighbor]){
                distances[neighbor] = dist;

                BPQNode next_node;
                next_node.gnode = neighbor;
                next_node.pri = dist;

                if (bpq.Contains(next_node)){bpq.Update(next_node);} 
                else{bpq.push(next_node);}
            }
        }
    }
    return answer_final;
}

