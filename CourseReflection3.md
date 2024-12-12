<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Design and Analysis of Algorithms</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      line-height: 1.6;
      margin: 0;
      padding: 20px;
      background-color: #f4f4f4;
    }

    h1, h2 {
      color: #333;
    }

    h3 {
      color: #444;
      margin-top: 20px;
    }

    ul {
      list-style-type: square;
      padding-left: 20px;
    }

    p {
      margin: 10px 0;
    }

    code {
      background-color: #f1f1f1;
      padding: 4px;
      font-size: 1.1em;
    }

    .section {
      margin-bottom: 30px;
      background-color: #fff;
      padding: 15px;
      border-radius: 5px;
      box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
    }

    .section h2 {
      text-decoration: underline;
    }

    .section p {
      font-size: 1.1em;
    }

    .important {
      color: #D32F2F;
    }
  </style>
</head>
<body>

  <div class="section">
    <h1>Design and Analysis of Algorithms</h1>
    <p>In this course, we explore various data structures and algorithms that enable efficient problem-solving. Here is an overview of the topics covered:</p>
  </div>

  <div class="section">
    <h2>1. Types of Problems in Nature</h2>
    <ul>
      <li><strong>Iteration:</strong> Adding items in cart, completing a to-do list, plant growth cycle.</li>
      <li><strong>Recursion:</strong> Revising the concepts, tree branching.</li>
      <li><strong>Backtracking:</strong> Solving Sudoku puzzle, finding a path in maze.</li>
    </ul>
  </div>

  <div class="section">
    <h2>2. Time and Space Complexity</h2>
    <p><strong>Time Complexity:</strong> The rate at which time taken increases with respect to input size.</p>
    <p><strong>Space Complexity:</strong> The amount of memory required to run a program, including both auxiliary space and input space.</p>
    <ul>
      <li><strong>Auxiliary Space:</strong> Space required to solve the problem.</li>
      <li><strong>Input Space:</strong> Space required to store inputs.</li>
    </ul>
    <p>Considering both complexities is essential for building effective algorithms for real-world applications, focusing on faster performance and lower memory usage.</p>
  </div>

  <div class="section">
    <h2>3. Different Class Problems and Their Orders of Growth</h2>
    <p><strong>Sorting Problems:</strong></p>
    <ul>
      <li><strong>Merge Sort:</strong> O(n log n)</li>
      <li><strong>Quick Sort:</strong> O(n log n)</li>
      <li><strong>Bubble Sort:</strong> O(n²)</li>
      <li><strong>Insertion Sort:</strong> O(n²)</li>
      <li><strong>Heap Sort:</strong> O(n log n)</li>
    </ul>
    <p><strong>Searching Problems:</strong></p>
    <ul>
      <li><strong>Linear Search:</strong> O(n)</li>
      <li><strong>Binary Search:</strong> O(log n)</li>
    </ul>
    <p><strong>Graph Problems:</strong></p>
    <ul>
      <li><strong>Depth-First Search (DFS):</strong> O(V + E)</li>
      <li><strong>Breadth-First Search (BFS):</strong> O(V + E)</li>
      <li><strong>Dijkstra’s Algorithm:</strong> O(E + V log V)</li>
    </ul>
  </div>

  <div class="section">
    <h2>4. Hierarchical Data Structures</h2>
    <p>To represent hierarchical data, we start with tree structures. Over time, we used:</p>
    <ul>
      <li><strong>Binary Tree:</strong> A basic tree structure.</li>
      <li><strong>Binary Search Tree (BST):</strong> Efficient searching, but can be skewed.</li>
      <li><strong>AVL Tree:</strong> Balanced tree to avoid skewness.</li>
      <li><strong>Red-Black Tree:</strong> A self-balancing binary search tree with lower rotation overhead.</li>
      <li><strong>Heap:</strong> For implementing a priority queue.</li>
      <li><strong>Trie:</strong> Used for fast prefix matching and autocomplete operations.</li>
    </ul>
  </div>

  <div class="section">
    <h2>5. Array Query Algorithms</h2>
    <p>When dealing with large arrays and multiple queries, we use array query algorithms to enhance performance:</p>
    <ul>
      <li><strong>Lookup Table:</strong> Precomputes data to avoid recalculating for every query, speeding up operations.</li>
      <li><strong>Segment Tree:</strong> Breaks the array into segments, providing efficient updates and range queries with O(log n) time complexity.</li>
    </ul>
  </div>

  <div class="section">
    <h2>6. Differences Between Trees and Graphs</h2>
    <p><strong>Tree:</strong> A hierarchical structure with a single root and no cycles. Each node has one parent, and it is always connected.</p>
    <p><strong>Graph:</strong> A collection of nodes connected by edges, which may have cycles and multiple connections.</p>
  </div>

  <div class="section">
    <h2>7. Sorting and Searching Algorithms</h2>
    <h3>Sorting Algorithms</h3>
    <ul>
      <li><strong>Bubble Sort:</strong> O(n²), compares adjacent elements and swaps them.</li>
      <li><strong>Selection Sort:</strong> O(n²), selects the smallest element from the unsorted list.</li>
      <li><strong>Insertion Sort:</strong> O(n²), builds a sorted list by inserting elements into their correct positions.</li>
      <li><strong>Merge Sort:</strong> O(n log n), divides and conquers to sort elements.</li>
      <li><strong>Quick Sort:</strong> O(n log n), sorts by partitioning around a pivot.</li>
      <li><strong>Heap Sort:</strong> O(n log n), uses a binary heap for sorting.</li>
    </ul>
    <h3>Searching Algorithms</h3>
    <ul>
      <li><strong>Linear Search:</strong> O(n), checks each element one by one.</li>
      <li><strong>Binary Search:</strong> O(log n), divides the range in half to find the target.</li>
      <li><strong>Hashing:</strong> O(1) on average, uses a hash function for fast access.</li>
    </ul>
  </div>

  <div class="section">
    <h2>8. Graph Algorithms Importance</h2>
    <ul>
      <li><strong>Dijkstra's Algorithm:</strong> Finds the shortest path from a single source.</li>
      <li><strong>Bellman-Ford Algorithm:</strong> Handles graphs with negative weights.</li>
      <li><strong>Prim’s and Kruskal’s Algorithms:</strong> Used for finding minimum spanning trees.</li>
      <li><strong>Floyd-Warshall Algorithm:</strong> Computes shortest paths for all pairs of nodes.</li>
    </ul>
  </div>

  <div class="section">
    <h2>9. Algorithm Design Techniques</h2>
    <ul>
      <li><strong>Brute Force:</strong> Tries all possible solutions (e.g., linear search).</li>
      <li><strong>Divide and Conquer:</strong> Breaks problems into smaller parts (e.g., merge sort, binary search).</li>
      <li><strong>Greedy Algorithm:</strong> Makes the optimal choice at each step (e.g., Prim’s Algorithm for MST).</li>
      <li><strong>Dynamic Programming:</strong> Solves problems by breaking them into overlapping subproblems (e.g., Fibonacci, Knapsack problem).</li>
      <li><strong>Backtracking:</strong> Explores all possible solutions and abandons invalid ones (e.g., Sudoku solving, N-Queens problem).</li>
    </ul>
  </div>

</body>
</html>
