
#include "Graph.h"
#include <vector>
#include <queue>
#include <string>


using namespace std;

class BetterPriorityQueue : public priority_queue<BPQNode, vector<BPQNode>, greater<BPQNode>> {
public: 

    // Returns true if BPQNode is in the queue
        bool Contains(BPQNode node);

    // Returns true if any changes are actually made,
    // tries to update the priority of a matching BPQNode in the queue
        bool Update(BPQNode node);

    //  Returns a string of the whole queue as seen in pdf
        string ToString();

        static string BPQNodeToString(BPQNode node);

};