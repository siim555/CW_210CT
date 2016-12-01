#!/usr/bin/python3
def add_node(key, tomod={}):
    graph[key]=[]
    tomod.update(graph)
    return tomod
def add_edge(key, numb, tomod={}):
    graph[key].append(numb)
    tomod.update(graph)
    return tomod
def dfs(graph, begin, visited=[]):
    visited.append(begin)
    for node in graph[begin]:
        if(not node in visited):
            dfs(graph, node, visited)
    return visited
def bfs(graph, begin, visited=[]):
    que=[begin]
    while(len(que) != 0):
        node=que.pop(0)
        if not node in visited:
            visited.append(node)
            que=que+graph[node]
    return visited
    
graph={}
add_node(1, graph)
add_node(2, graph)
add_node(3, graph)
add_node(4, graph)
add_node(5, graph)
add_node(6, graph)
add_node(7, graph)
add_node(8, graph)
add_node(9, graph)
add_node(10, graph)
add_edge(1,2,graph)
add_edge(2,1,graph)
add_edge(2,4,graph)
add_edge(2,10,graph)
add_edge(3,4,graph)
add_edge(3,5,graph)
add_edge(3,6,graph)
add_edge(3,8,graph)
add_edge(4,2,graph)
add_edge(4,3,graph)
add_edge(4,5,graph)
add_edge(5,3,graph)
add_edge(5,4,graph)
add_edge(5,7,graph)
add_edge(6,3,graph)
add_edge(6,9,graph)
add_edge(7,5,graph)
add_edge(7,8,graph)
add_edge(8,3,graph)
add_edge(8,7,graph)
add_edge(8,9,graph)
add_edge(9,6,graph)
add_edge(9,8,graph)
add_edge(10,2,graph)
print(graph)
gtxt=open("graphs.txt", "w")
gtxt.write("DFS: " + str(dfs(graph,1)))
gtxt.write("BFS: " + str(bfs(graph,1)))
gtxt.close()
print(dfs(graph,1))
print(bfs(graph,1))










