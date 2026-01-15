# TravelPlanner

TravelPlanner is a C++ based intelligent travel itinerary planning system
designed to model real-world tourist locations and generate optimized,
personalized travel plans using classical graph algorithms.

The project focuses on **algorithmic optimization and system design**
rather than UI, making it suitable for demonstrating strong foundations
in Data Structures, Object-Oriented Programming, and problem-solving.

---

## Project Motivation

Planning a trip involves choosing the right places, minimizing travel
time between locations, and adapting the plan to different traveler
preferences (budget, pace, comfort).

Most beginner projects focus on UI or static lists.  
**TravelPlanner instead focuses on the core logic** behind intelligent
travel planning — how data is modeled and optimized.

---

##  Key Concepts Used

- Object-Oriented Design in C++
- Graph Representation of city locations
- Shortest path optimization (Dijkstra)
- Minimum travel network optimization (Kruskal – MST)
- Rule-based personalization using traveler personas

---

##  Traveler Personas

The system classifies users into four core traveler types:

- **Explorer** – prioritizes covering maximum landmarks
- **Budgeted** – minimizes cost and prefers free/low-cost attractions
- **Relaxed** – prefers fewer places with minimal travel stress
- **Luxury** – prioritizes premium, high-rated experiences

Each tourist location is tagged with supported traveler types, allowing
dynamic filtering and itinerary customization.

---

##  Cities Covered

The project currently models four diverse Indian cities:

- Delhi – Heritage & cultural landmarks
- Mumbai – Urban life, coastlines, and city icons
- Bangalore – Parks, cafés, and relaxed urban experiences
- Goa – Beaches, leisure, and luxury travel

Each city contains a carefully curated set of tourist locations
(9–10 per city) to keep the dataset realistic yet algorithm-friendly.

---

##  System Design Overview

### Place Modeling
Each tourist location is represented using a `Place` class containing:
- Name and full postal address
- Geographic coordinates (latitude & longitude)
- Category (heritage, leisure, market, etc.)
- Rating, visit duration, and cost level
- Supported traveler types

This design enables accurate distance calculation and personalization.

### Graph Abstraction
- Tourist places are treated as **nodes**
- Travel distance/time between places forms **edges**
- Graph algorithms are applied to optimize itineraries

---

##  Planned Algorithmic Features

- **Dijkstra’s Algorithm**
  - To compute shortest travel paths between selected places

- **Kruskal’s Algorithm (MST)**
  - To build a minimal travel backbone connecting all chosen locations
    while reducing total travel distance

- **Greedy Scheduling**
  - To fit activities into daily time constraints based on traveler type

---

##  Current Status

✔ Traveler personas defined  
✔ Place class implemented with geographic data  
✔ City-wise curated datasets prepared  
⬜ Distance calculation module  
⬜ Graph construction  
⬜ Itinerary generation engine  

---

##  Tech Stack

- **Language:** C++
- **Concepts:** STL, OOP, Graph Algorithms
- **Version Control:** GitHub

---

##  Why This Project?

This project is intentionally designed to:
- Demonstrate **strong DSA foundations**
- Show **clean system modeling**
- Be extendable to web or mobile platforms later
- Reflect real-world engineering thinking, not toy examples

---

##  Future Extensions

- City-level graph visualization
- Web interface using a backend wrapper
- Real-time distance integration via APIs
- Hotel and transport optimization modules

---

##  Author
Simran Pundir
Nayessha Marya


