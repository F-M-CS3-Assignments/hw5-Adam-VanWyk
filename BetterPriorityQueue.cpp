


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
    if(!Contains(node)){
        return false;
    } 
    bool found = false;
    int index;
    for (size_t i = 0; i < this->c.size(); i++){ //const auto& item : this->c
        if (this->c.at(i).gnode == node.gnode && this->c.at(i).pri >= node.pri){
            found = true;
            index = i;
            break;
        }
    }
    if (!found){return found;} // if there is no matching again, double check

    this->c.at(index).pri = node.pri;

    make_heap(this->c.begin(), this->c.end(), this->comp); // from better priority queue

    return true;
}

    //  Returns a string of the whole queue as seen in pdf
string BetterPriorityQueue::ToString(){


    return " ";
}

string BetterPriorityQueue::BPQNodeToString(BPQNode node){


    return " ";
}
