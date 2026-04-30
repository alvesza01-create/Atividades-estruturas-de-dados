import networkx as nx
import matplotlib.pyplot as plt
import numpy as np

adj_matrix_a = np.array([
    [0, 1, 1, 0, 0],
    [1, 0, 1, 0, 1],
    [1, 1, 0, 1, 0],
    [0, 0, 1, 0, 1],
    [0, 1, 0, 1, 0]
])

G_a = nx.from_numpy_array(adj_matrix_a)
mapping = {i: i + 1 for i in range(5)}
G_a = nx.relabel_nodes(G_a, mapping)

plt.figure(figsize=(6, 4))
nx.draw(G_a, with_labels=True, node_color='lightblue', node_size=800, font_weight='bold')
plt.show()

G_b1 = nx.Graph()
G_b1.add_edges_from([(1,2), (2,3), (3,4), (1,5), (2,6), (3,7), (4,8), (5,6), (6,7), (7,8), (1,4), (5,8)])

print(nx.adjacency_matrix(G_b1).todense())

G_b2 = nx.Graph()
G_b2.add_edges_from([(1,3), (3,5), (5,1), (2,4), (4,6), (6,2)])

print(nx.adjacency_matrix(G_b2).todense())
