import networkx as nx
import numpy as np

G_left = nx.Graph()
edges_left = [(0,1), (0,2), (0,5), (1,2), (2,3), (2,4), (3,4), (3,5)]
G_left.add_edges_from(edges_left)

print(nx.to_numpy_array(G_left))

for line in nx.generate_adjlist(G_left):
    print(line)

G_right = nx.Graph()
edges_right = [(6,4), (4,3), (4,5), (3,2), (5,2), (5,1), (2,1)]
G_right.add_edges_from(edges_right)

nodes_right = sorted(G_right.nodes())
print(nx.to_numpy_array(G_right, nodelist=nodes_right))

for line in nx.generate_adjlist(G_right):
    print(line)
