# Algorithms Used – TravelPlanner

This document explains the algorithms used in the TravelPlanner project,
their purpose, and how they integrate with the system design.

The project prioritizes **classical, well-understood algorithms** to
ensure correctness, explainability, and extensibility.

---

## 1. Geographic Distance Calculation (Haversine Formula)

### Purpose
To compute realistic travel distances between tourist locations using
latitude and longitude.

### Why Haversine?
- Accounts for Earth’s curvature
- More accurate than Euclidean distance for geographic data
- Widely used in navigation and mapping systems

### Where Used
- Assigning edge weights in the graph
- Ensuring distance-based optimization is realistic

### Time Complexity
- O(1) per distance computation

---

## 2. Shortest Path Algorithm (Dijkstra)

### Purpose
To determine the shortest travel distance from a starting location to
all other places within a city.

### Why Dijkstra?
- Handles non-negative edge weights (distance ≥ 0)
- Efficient and deterministic
- Easy to explain and justify in interviews

### Where Used
- Ordering tourist locations in an itinerary
- Reducing unnecessary travel between visits

### Time Complexity
- O((V + E) log V) using a priority queue

---

## 3. Minimum Spanning Tree (Kruskal)

### Purpose
To connect all selected tourist locations using the minimum total travel
distance while avoiding cycles.

### Why Kruskal?
- Simple and effective for sparse graphs
- Strong theoretical guarantees
- Complements shortest-path algorithms

### Where Used
- Creating a minimal travel backbone
- Reducing redundant movement across an itinerary

### Time Complexity
- O(E log E)

---

## 4. Algorithm Interaction Summary

The system uses algorithms in a layered manner:

1. Haversine formula computes geographic distances
2. Graph edges are weighted using these distances
3. Dijkstra optimizes local travel order
4. Kruskal minimizes overall travel network cost

Each algorithm is isolated and reusable, ensuring clean integration and
future extensibility.

---

## 5. Design Philosophy

- Algorithms are decoupled from data models
- No algorithm is hardcoded into entity classes
- The system remains testable and explainable

This approach mirrors real-world engineering systems rather than
monolithic academic implementations.
