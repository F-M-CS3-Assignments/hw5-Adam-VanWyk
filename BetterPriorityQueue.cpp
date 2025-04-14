


#include "Graph.h"
#include "BetterPriorityQueue.h"
#include <vector>
#include <queue>
#include <string> 


using namespace std;


    // Returns true if BPQNode is in the queue
bool BetterPriorityQueue::Contains(BPQNode node){
    bool found = false;
    for (size_t i = 0; i < this->c.size(); i++){
        if (node.pri == this->c.at(i).pri && node.gnode == this->c.at(i).gnode){
            found = true;
            break;
        }
    }
    return found;
}

    // Returns true if any changes are actually made,
    // tries to update the priority of a matching BPQNode in the queue
bool BetterPriorityQueue::Update(BPQNode node){


    return false;
}

    //  Returns a string of the whole queue as seen in pdf
string BetterPriorityQueue::ToString(){


    return " ";
}

string BetterPriorityQueue::BPQNodeToString(BPQNode node){


    return " ";
}
