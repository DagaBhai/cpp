//Q7) Write a Program to accept a directed graph G and compute the in-degree and out-degree of each vertex

#include <iostream>
using namespace std;

int indegreevertex(int **graph ,int v,int len){
    int count=0;
    for(int i=0;i<len;++i){
        if(graph[i][v]==1){
            count++;
        }
    }
    return count;
}

int outdegreevertex(int **graph,int v,int len){
    int count=0;
    for(int i=0;i<len;++i){
        if(graph[i][v]==1){
            count++;
        }
    }
    return count;
}

int degreecount(int **graph, int len){
    int count = 0;
    cout<<"Vertics\tIndegree Outdegree"<<endl;
    for (int i=0; i<len; i++) {
        cout<<i<<"\t"<<indegreevertex(graph, i,len)<<"\t"<<outdegreevertex(graph, i, len)<<endl;
    }
}


int main(){

    cout<<"enter the number of vertices: ";
    int v;
    cin>>v;

    int **graph= new int*[v];
    for(int i=0;i<v;++i){
        graph[i]=new int[v];
    }

    cout<<"enter the graph (1-vertex exists, 0-vertex does not exsist)";
    for(int i=0;i<v;++i){
        for(int j=0;j<v;++j){
            cin>>graph[i][j];
        }
    }

    degreecount(graph, v);

    return 0;
}