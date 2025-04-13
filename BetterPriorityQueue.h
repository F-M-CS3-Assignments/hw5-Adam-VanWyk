
#include "Graph.h"
#include <vector>
#include <queue>


using namespace std;

class BetterPriorityQueue: 
    public priority_queue<BPQNode, vector<BPQNode>, greater<BPQNode>>::priority_queue {

    // Returns true if BPQNode is in the queue
    bool contains(BPQNode);

    // Returns true if any changes are actually made,
    // tries to update the priority of a matching BPQNode in the queue
    bool update(BPQNode);

    //  Returns a string of the whole queue as seen in pdf
    string ToString(vector<BPQNode>);

    static string BPQNodeToString(BPQNode);

};