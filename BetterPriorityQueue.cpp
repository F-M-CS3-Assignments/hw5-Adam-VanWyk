


#include "Graph.h"
#include "BetterPriorityQueue.h"
#include <vector>
#include <queue>
#include <string> 


using namespace std;


    // Returns true if BPQNode is in the queue
bool contains(BPQNode);

    // Returns true if any changes are actually made,
    // tries to update the priority of a matching BPQNode in the queue
bool update(BPQNode);

    //  Returns a string of the whole queue as seen in pdf
string ToString(vector<BPQNode>);

static string BPQNodeToString(BPQNode);
