<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Data Structures, Algorithms & Techniques</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      line-height: 1.6;
      background-color: #f4f4f9;
      color: #333;
      padding: 20px;
      margin: 0;
    }

    h1, h2 {
      text-align: center;
      color: #333;
    }

    h2 {
      font-size: 1.6em;
      margin-top: 20px;
      border-bottom: 2px solid #007BFF;
      padding-bottom: 5px;
    }

    p {
      font-size: 1.1em;
      margin-bottom: 15px;
    }

    .section {
      margin-bottom: 30px;
    }

    .important {
      background-color: #f0f8ff;
      padding: 10px;
      border-radius: 5px;
      font-weight: bold;
    }

    .code {
      background-color: #e0f7fa;
      padding: 5px;
      border-radius: 5px;
      font-family: monospace;
    }

    ul {
      padding-left: 20px;
      font-size: 1.1em;
    }

    .list-item {
      margin-bottom: 10px;
    }

    .example {
      font-style: italic;
      color: #007BFF;
    }

    .highlight {
      color: #28a745;
      font-weight: bold;
    }

    .description {
      margin-bottom: 20px;
    }
  </style>
</head>
<body>

  <h1>Data Structures, Algorithms & Techniques</h1>

  <div class="section">
    <h2>1. Iteration, Recursion, Backtracking</h2>
    <p><span class="important">Iteration:</span> Repeats the same activity multiple times. <span class="example">Ex: As it rains, the ground holds the water, and when the sun shines, it evaporates.</span></p>
    <p><span class="important">Recursion:</span> Breaking down a problem into smaller parts and then solving it. <span class="example">Ex: Searching for a word in a dictionary, Towers of Hanoi, calculating factorial of a number.</span></p>
    <p><span class="important">Backtracking:</span> Trial and error method. If stuck by something or get the wrong answer, stop and continue from the previous steps. <span class="example">Ex: Sudoku game, N-Queens problem, Maze solving, etc.</span></p>
  </div>

  <div class="section">
    <h2>2. Time and Space Efficiency</h2>
    <p><span class="important">Time Efficiency:</span> The time taken by the algorithm to complete the task.</p>
    <p><span class="important">Space Efficiency:</span> The extra space taken by the algorithm.</p>
    <p>These are considered key aspects for evaluating an algorithm and are necessary to know how efficient an algorithm is.</p>
    <p><span class="important">Class of Problems:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">P:</span> Problems that can be solved in polynomial time (O(n), O(n^2), etc.). Ex: Searching, Sorting.</li>
      <li class="list-item"><span class="highlight">NP:</span> Problems like the knapsack problem.</li>
      <li class="list-item"><span class="highlight">NP-hard:</span> More difficult problems.</li>
      <li class="list-item"><span class="highlight">EXPTIME:</span> Problems that take exponential time to solve.</li>
    </ul>

    <p><span class="important">Orders of Growth:</span></p>
    <ul>
      <li class="list-item">O(1): Constant time, ex: Accessing an element from an array.</li>
      <li class="list-item">O(log n): Logarithmic time, ex: Binary Search.</li>
      <li class="list-item">O(n): Linear time.</li>
      <li class="list-item">O(n^2): Quadratic time, ex: Bubble Sort.</li>
      <li class="list-item">O(n^3): Cubic time, ex: Matrix Multiplication.</li>
      <li class="list-item">O(2^n): Exponential time.</li>
      <li class="list-item">O(n!): Factorial time, used in permutation problems.</li>
    </ul>
  </div>

  <div class="section">
    <h2>3. Decomposition, Balancing, and Pattern Recognition</h2>
    <p><span class="important">Decomposition:</span> Breaking a problem into smaller, easier-to-solve parts.</p>
    <p><span class="important">Balancing and Rotation:</span> A tree structure should be balanced. If it is not, it can be balanced by rotating the nodes and placing them in the correct position.</p>
    <p><span class="important">Pattern Recognition:</span> Identifying repeated patterns in data to simplify the solution.</p>
    <p><span class="important">Abstraction:</span> Hiding the complicated details and showing only what is necessary.</p>
    <p><span class="important">Brave and Cautious Travel:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">Brave:</span> Jumping in quickly and exploring with risks.</li>
      <li class="list-item"><span class="highlight">Cautious:</span> Going step-by-step, and backtracking if the path is incorrect.</li>
    </ul>
  </div>

  <div class="section">
    <h2>4. Tree Structures</h2>
    <p><span class="important">Hierarchical Structure:</span> Trees represent a parent-child relationship, making them ideal for representing hierarchical data.</p>
    <p><span class="important">Types of Trees:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">Tree:</span> An unbalanced tree where the data is simply arranged in a tree format.</li>
      <li class="list-item"><span class="highlight">BST:</span> A binary search tree where the data is ordered.</li>
      <li class="list-item"><span class="highlight">AVL Tree:</span> A self-balancing binary search tree.</li>
      <li class="list-item"><span class="highlight">2-3 Tree:</span> A balanced search tree with 2 or 3 child nodes, often used in file systems.</li>
      <li class="list-item"><span class="highlight">Red-Black Tree:</span> A self-balancing binary search tree that uses color coding to maintain balance.</li>
      <li class="list-item"><span class="highlight">Heap:</span> A complete binary tree, either a Max-Heap or Min-Heap.</li>
      <li class="list-item"><span class="highlight">Trie:</span> A tree-like structure used to store characters and strings for efficient searching and matching.</li>
    </ul>
  </div>

  <div class="section">
    <h2>5. Segment Trees and Fenwick Trees</h2>
    <p><span class="important">Segment Trees:</span> Useful for answering queries efficiently, especially when the array is frequently changing.</p>
    <p><span class="important">Fenwick Trees:</span> Perfect for fast range queries and using less memory.</p>
    <p><span class="important">Lookup Table:</span> Used when the data size is small for quick access.</p>
  </div>

  <div class="section">
    <h2>6. Trees vs. Graphs</h2>
    <p><span class="important">Trees:</span> Acyclic, hierarchical structure. Traversals include preorder, inorder, and postorder.</p>
    <p><span class="important">Graphs:</span> Can be cyclic and used for various traversal algorithms like BFS and DFS. Graphs can be bidirectional, and revisiting nodes is allowed for pathfinding.</p>
  </div>

  <div class="section">
    <h2>7. Sorting and Searching Algorithms</h2>
    <h3>Sorting Techniques:</h3>
    <ul>
      <li class="list-item"><span class="highlight">Bubble Sort:</span> Swaps adjacent elements to sort.</li>
      <li class="list-item"><span class="highlight">Insertion Sort:</span> Places elements in their correct positions.</li>
      <li class="list-item"><span class="highlight">Selection Sort:</span> Finds the smallest element and places it at the beginning.</li>
      <li class="list-item"><span class="highlight">Merge Sort:</span> Uses divide and conquer to sort.</li>
      <li class="list-item"><span class="highlight">Heap Sort:</span> Removes the root node and rebalances the heap to create a sorted array.</li>
    </ul>

    <h3>Searching Techniques:</h3>
    <ul>
      <li class="list-item"><span class="highlight">Boyer-Moore:</span> Skips unmatched characters using two tables.</li>
      <li class="list-item"><span class="highlight">Knuth-Morris-Pratt:</span> Uses precomputed values to skip character matches.</li>
      <li class="list-item"><span class="highlight">Brute Force:</span> Compares the pattern from left to right.</li>
      <li class="list-item"><span class="highlight">Rabin-Karp:</span> Compares characters after hashing them.</li>
    </ul>
  </div>

  <div class="section">
    <h2>8. Spanning Tree and Shortest Path</h2>
    <p><span class="important">Spanning Tree:</span> A subset of the graph that connects all vertices with the minimum cost.</p>
    <p><span class="important">Shortest Path:</span> The path between two vertices with the smallest total weight. Algorithms include Dijkstra’s and Bellman-Ford.</p>
  </div>

  <div class="section">
    <h2>9. Problem Solving Techniques</h2>
    <ul>
      <li class="list-item"><span class="highlight">Divide and Conquer:</span> Breaks a problem into smaller subproblems and then combines them. Ex: MergeSort and QuickSort.</li>
      <li class="list-item"><span class="highlight">Dynamic Programming:</span> Solves problems by breaking them into overlapping subproblems. Ex: Fibonacci sequence.</li>
      <li class="list-item"><span class="highlight">Greedy Algorithms:</span> Makes the locally optimal choice at each step. Ex: Kruskal’s and Prim’s algorithms.</li>
      <li class="list-item"><span class="highlight">Backtracking:</span> Builds a solution step-by-step and abandons incorrect solutions. Ex: Sudoku, N-Queens problem.</li>
    </ul>
  </div>

</body>
</html>
