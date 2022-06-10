#include <iostream>
#include <list>
using namespace std;
//class graph untuk DFS travesal
class DFSGraph
{
int V; // Banyaknya vertex
list<int> *adjList; // Banyaknya list yang dimasukkan
void DFS_util(int v, bool visited[]); // sebuah fungsi yang akan digunakan DFS
public:
// Konstruktor class
DFSGraph(int V)
{
this->V = V;
adjList = new list<int>[V];
}
// Fungsi untuk menambahkan link ke dalam graph
void addEdge(int v, int w){
adjList[v].push_back(w); // Add w to v’s list. }
void DFS(); // FUngsi transversal DFS
};
void DFSGraph::DFS_util(int v, bool visited[])
{
// node sekarang yang mana sebagai variabel v sedang dikunjungi
visited[v] = true;
cout << v <<"";
// proses rekursif semua vertex yang ada dalam node
list<int>::iterator i;
for(i = adjList[v].begin(); i != adjList[v].end(); ++i)
if(!visited[*i])
DFS_util(*i, visited);
}
// DFS traversal
void DFSGraph::DFS()
{
// inisialisasi bahwa tidak ada vertex yang sedang atau akan dikunjungi.
bool * visited = new bool[V];
for (int i = 0; i < V; i++)
visited[i] = false;
// mengekspolrasi semua vertex yang ada satu persatu dengan cara rekursif dengan memanggil
//fungsi DFS_util
for (int i = 0; i < V; i++)
if (visited[i] == false)
DFS_util(i, visited);
}
int main()
{
// Membuat sebuah graph
DFSGraph gdfs(5);
gdfs.addEdge(0, 1);
gdfs.addEdge(0, 2);
gdfs.addEdge(0, 3);
gdfs.addEdge(1, 2);
gdfs.addEdge(2, 4);
gdfs.addEdge(3, 3);
gdfs.addEdge(4, 4);
cout <<"Depth-first traversal untuk graph ini adalah:"<<endl;
gdfs.DFS();
return 0; 
}
