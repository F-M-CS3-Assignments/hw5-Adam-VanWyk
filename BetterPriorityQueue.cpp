


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
        if (node.gnode == this->c.at(i).gnode){ //node.pri == this->c.at(i).pri && 
            found = true;
            break;
        }
    }
    return found;
}

    // Returns true if any changes are actually made,
    // tries to update the priority of a matching BPQNode in the queue
bool BetterPriorityQueue::Update(BPQNode node){
    bool found = false;
    //int index;
    for (size_t i = 0; i < this->c.size(); i++){
        if (this->c.at(i).gnode == node.gnode){
            if(node.pri < this->c.at(i).pri){
                found = true;
                //index = i;
                this->c.erase(this->c.begin() + i); // erase old node
                this->c.push_back(node); // add new node
                push_heap(this->c.begin(), this->c.end(), this->comp); // from better priority queue
            }
            break; // found node
        }
    }
    if (!found){return found;} // if there is no matching again, double check

    return found;
}

    //  Returns a string of the whole queue as seen in pdf
string BetterPriorityQueue::ToString(){
    string whole_bpq = "[";

    for (size_t i = 0; i < this->c.size(); i++)
    {
        if (i == this->c.size()-1){
            whole_bpq = whole_bpq + "(" + to_string(this->c[i].gnode) + ", pri: " + to_string(this->c[i].pri) + ")";
        } else{
            whole_bpq = whole_bpq + "(" + to_string(this->c[i].gnode) + ", pri: " + to_string(this->c[i].pri) + "), ";
        }
    }
    whole_bpq += "]";
    return whole_bpq;
}

string BetterPriorityQueue::BPQNodeToString(BPQNode node){
    return "(" + to_string(node.gnode) + ", pri: " + to_string(node.pri) + ")";
}
