#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>
#include <climits>

using namespace std; // }}}

enum Colour{
	YELLOW,
	WHITE,
	GRAY,
	BLACK
};

class Node{
public:
	int id;
	int name;
	int distance;
	Colour colour;

	Node(){}

	Node(int _name, Colour _colour){
		id = NULL;
		name = _name;
		colour = _colour;

		distance = 0;
	}

	bool operator <(const Node& n2) const
	{
		return id < n2.id;
	}
};

class Edge {
public:
	Node * from, * to;
	int weight;

	Edge(Node * _from, Node * _to){
		from = _from;
		to = _to;
		weight = 1;
	}
};

class Graph {
public:
	int lastIndex = 0; // temporario para contabilizar indices dos vertices no grafo
	map<int, Node *> vertices; // vetor de vertices indexados por 'id'
	multimap<Node *, Edge *> edgeByVertices; // lista de adjacencia
	int vertexTotal, edgeTotal; // total de vertices e arestas no grafo

	int brothers;

	void addNode(Node * node){
		node->id = node->name;
		vertices.insert(pair<int, Node *>(node->id, node));
	}


	void calculateDfs(){
		int numberOfVertices = vertices.size();
		long long total = 0;
	
		//cout << "DFS 1";
		long long yellowNodes = 0;
		vector<long long> pieces;
		for (map<int, Node *>::iterator it = vertices.begin(); it != vertices.end(); ++it) {
			Node * vertex = it->second;
			
			if (vertex->colour == Colour::WHITE){
				brothers = 0;
				dfs(vertex);
				pieces.push_back(brothers);
			}
			else if (vertex->colour == Colour::YELLOW){
				yellowNodes++;
				vertex->colour = Colour::BLACK;
			}
		}
		if (yellowNodes > 0){
			pieces.push_back(yellowNodes);
		}

		
		int piecesSize = pieces.size();

		//cout << "DFS 2:" << piecesSize << endl;
		for (int i = 0; i < piecesSize; i++){
			for (int j = i + 1; j < piecesSize; j++){
				total += (pieces[i] * pieces[j]);
			}
		}

		total += yellowNodes * (yellowNodes - 1) / 2;
		cout << (total) << endl;
	}

	void dfs(Node * vertex){
		vertex->colour = Colour::GRAY;

		brothers++;
		//cout << "(" << vertex->id << ",";
		std::pair <std::multimap<Node *, Edge * >::iterator, std::multimap<Node *, Edge *>::iterator> mmit = edgeByVertices.equal_range(vertex);

		for (std::multimap<Node *, Edge *>::iterator it = mmit.first; it != mmit.second; ++it){
			Edge * edge = it->second;
			
			if (edge->to->colour == Colour::WHITE){
				//cout << "From : " << vertex->id << " to: " << edge->to->id << endl;
				
				dfs(edge->to);
				
			}
		}

		vertex->colour = Colour::BLACK;

		//cout << vertex->id << ")";
	}

	
	void breadthFirstSearch(Node *source){
		queue<Node * > queue;

		for (map<int, Node *>::iterator it = vertices.begin(); it != vertices.end(); ++it) {
			Node * node = it->second;
			node->colour = Colour::WHITE;
			node->distance = INT_MAX;
		}

		source->distance = 0;
		source->colour = Colour::GRAY;

		queue.push(source);
		
		while (queue.size() > 0 ){
			Node * node = queue.front();
			queue.pop();

			std::pair <std::multimap<Node *, Edge * >::iterator, std::multimap<Node *, Edge *>::iterator> mmit = edgeByVertices.equal_range(node);
			
			for (std::multimap<Node *, Edge *>::iterator it = mmit.first; it != mmit.second; ++it){
				Edge * edge = it->second;
				if (edge->to->colour == Colour::WHITE){
					edge->to->distance = node->distance + 1;
					edge->to->colour = Colour::GRAY;
					queue.push(edge->to);
				}
				node->colour = Colour::BLACK;
			}
		}
	
	}

	void calculateDistanceMatrix() {
		int numberOfVertices = vertices.size();
		long long total = 0;
//		cout << "calculateDistanceMatrix" << endl;
		vector< vector<int> > distanceMatrix(numberOfVertices);
//		cout << "calculateDistanceMatrix 1" << endl;
		/*
		for (int i = 0; i < numberOfVertices; i++){
			distanceMatrix[i].resize(numberOfVertices);
		}
		*/

//		cout << "calculateDistanceMatrix 2" << endl;
		for (map<int, Node *>::iterator it = vertices.begin(); it != vertices.end(); ++it) {
			//cout << "BFS" << endl;
			Node * vertex = it->second;
			breadthFirstSearch(vertex);

			for (map<int, Node *>::iterator it2 = vertices.begin(); it2 != vertices.end(); ++it2) {
				Node * other = it2->second;
				if (vertex->id != other->id && other->distance == INT_MAX){
					total++;
				}
				//distanceMatrix[vertex->id][other->id] = other->distance;

			}
			
		}

		
//		cout << "calculateDistanceMatrix 3" << endl;

		/*
		for (int i = 0; i < numberOfVertices; i++){
///			cout << "Name: " << vertices[i]->name << "| ";
			vector<int> temp = distanceMatrix[i];
			for (int j = 0; j < numberOfVertices; j++){
//				cout << distanceMatrix[i][j] << " ";
				if (i != j && temp[j] == INT_MAX){
					total++;
				}
			}
//			cout << endl;
		}
		*/
		total /= 2;
		cout << total << endl;
	}
};

int main()
{
	Graph graph;
	int N, I;
	cin >> N >> I;
	vector<vector<int> > pairs(N);
	for (int i = 0; i < I; ++i) {
		int a, b;
		cin >> a >> b;
		pairs[a].push_back(b);
		pairs[b].push_back(a);

		Node * aNode, * bNode;
		if (graph.vertices.count(a) == 0){
			aNode = new Node(a, Colour::WHITE);
			graph.addNode( aNode );
		}
		else{
			aNode = graph.vertices[a];
		}

		if (graph.vertices.count(b) == 0){
			bNode = new Node(b, Colour::WHITE);
			graph.addNode( bNode );
		}
		else{
			bNode = graph.vertices[b];
		}

		Edge * edgeA = new Edge(aNode, bNode);
		Edge * edgeB = new Edge(bNode, aNode);

		graph.edgeByVertices.insert(pair<Node*, Edge*>(aNode, edgeA));
		graph.edgeByVertices.insert(pair<Node*, Edge*>(bNode, edgeB));
	}

	for (int i = 0; i < N; ++i) {
		Node * aNode;
		if (graph.vertices.count(i) == 0){
			aNode = new Node(i, Colour::YELLOW);
			graph.addNode(aNode);
		}
	}

	graph.calculateDfs();

	return 0;
}
