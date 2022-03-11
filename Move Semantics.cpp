#include <iostream>
#include <vector>
class Node
{
public:
    std::vector<Node*> adjs;
    int id;
    uint16_t numAdj;

    Node(int idNum)
    {
        printf("Created! id=%d\n", idNum);
        id = idNum;
        numAdj = 0;
        adjs.reserve(5);
    }

    Node(int idNum, uint16_t adjCount)
    {
        printf("Created! id=%d\n", idNum);
        id = idNum;
        adjs.reserve(adjCount);
    }

    //move constructor
    Node(int idNum, std::vector<Node*>&& adjacents)
    :id(idNum), adjs(adjacents), numAdj(adjacents.size())
    {
        printf("Created! id=%d\n", idNum);
    }

    //copy constructor
    Node(const Node& node)
    :id(node.id), adjs(node.adjs)
    {
        printf("Copied! id=%d\n", node.id);
    }

    // Move
    Node(Node&& other)
    {
        printf("Moved!\n");
        id = other.id;
        adjs = other.adjs;
        numAdj = other.numAdj;

        other.numAdj = 0;
        other.adjs.clear();
    }

    ~Node()
    {
        printf("destructed id=%d \n", id);
    }

    void printAdjs()
    {
        printf("%d adjacent to: ", id);
        if (numAdj == 0)
        {
            printf("none\n");
            return;
        }
        for(int i=0; i<adjs.size(); ++i)
            printf("%d, ", adjs[i]->id);
        printf("\n");
    }

    // l-value connect
    void connectDir(Node& n)
    {
        adjs.push_back(&n);
        ++numAdj;
        printf("%d->%d\n", id, n.id);
    }
    // pointer connect
    void connectDir(Node* n)
    {
        adjs.push_back(n);
        ++numAdj;
        printf("%d->%d\n", id, n->id);
    }
    // r-value connect
    void connectDir(Node&& n) noexcept
    {
        adjs.push_back(&n);
        ++numAdj;
        printf("%d->%d\n", id, n.id);
    }

    // l-value connect undirected
    void connectUndir(Node& n)
    {
        adjs.push_back(&n);
        ++numAdj;
        n.adjs.push_back(this);
        ++n.numAdj;
        printf("%d<->%d\n", id, n.id);
    }
    // pointer connect undirected
    void connectUndir(Node* n)
    {
        adjs.push_back(n);
        ++numAdj;
        n->adjs.push_back(this);
        ++n->numAdj;
        printf("%d<->%d\n", id, n->id);
    }
    // r-value connect undirected
    void connectUndir(Node&& n) noexcept
    {
        adjs.push_back(&n);
        ++numAdj;
        n.adjs.push_back(this);
        ++n.numAdj;
        printf("%d<->%d\n", id, n.id);
    }

};

class Graph
{
private:
    size_t nodeCnt;
public:
    std::vector<Node> nodes;

    Graph(Node&& firstNode, size_t numNodes)
    {
        nodes.reserve(numNodes);
        nodes.push_back(firstNode);
        nodeCnt = 0;
    }

    Graph(uint16_t numNodes)
    {
        nodes.reserve(numNodes);
        nodeCnt = 0;
    }

    Graph(Node&& firstNode)
    {
    }

    void addNode(Node& node)
    {
        nodes.push_back(node);
        ++nodeCnt;
    }
    void addNode(Node&& node) noexcept
    {
        nodes.push_back(std::move(node));
        ++nodeCnt;
    }

    void printNodes()
    {
        printf("%d nodes: ", nodes.size());
        for (int i=0; i<nodeCnt; ++i)
            printf("id%d = %d, ", i, nodes[i].id);
        printf("\n");
    }

    size_t size()
    {
        return nodeCnt;
    }

    ~Graph()
    {
        /*for (Node* node : nodes)
            printf("descructed id=%d\n", node.id);*/
    }
};

int main()
{
    Graph graph(5);

    graph.addNode(Node(0)); // move
    graph.addNode(Node(1)); // move
    graph.nodes[1].id++;

    graph.printNodes();

    Node n1(66);
    graph.addNode(n1); // copy
    graph.nodes[2].id = 77;

    graph.printNodes();

    /*Node one(1);
    one.connectUndir(Node(2));
    Node three(3);
    Node four(4);

    one.connectDir(three);
    one.connectUndir(&four);
    one.printAdjs();
    one.adjs[1]->printAdjs();*/

    //std::cin.get();
}
