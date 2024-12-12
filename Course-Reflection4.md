<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Course Reflections</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      line-height: 1.6;
      background-color: #f4f4f4;
      color: #333;
      margin: 0;
      padding: 20px;
    }

    h1, h2 {
      color: #0056b3;
    }

    h2 {
      margin-top: 20px;
    }

    .question {
      background-color: #e0f7fa;
      padding: 10px;
      margin-top: 10px;
      border-left: 4px solid #00796b;
      font-weight: bold;
    }

    .answer {
      margin: 10px 0 20px;
      background-color: #ffffff;
      padding: 15px;
      border: 1px solid #ccc;
      border-radius: 4px;
    }

    .list-item {
      margin-left: 20px;
    }

    .example {
      margin-left: 40px;
      font-style: italic;
    }

    .code {
      background-color: #f5f5f5;
      padding: 10px;
      font-family: "Courier New", Courier, monospace;
      border-radius: 4px;
    }

    .answer p {
      font-size: 1.1rem;
      margin: 8px 0;
    }
  </style>
</head>
<body>

  <h1>Course Reflections</h1>

  <div class="question">Q1: What are the kinds of problems we see in nature? (iteration, recursion, backtracking)</div>
  <div class="answer">
    <p>Nature presents us with a variety of problems that mirror how we solve challenges in algorithms. Three common approaches help us make sense of these problems and find solutions:</p>
    <ul>
      <li class="list-item">Iteration:
        <ul>
          <li class="example">Counting coins from your piggy bank one coin at a time.</li>
          <li class="example">Cell division where cells replicate through a series of iterative steps.</li>
        </ul>
      </li>
      <li class="list-item">Recursion:
        <ul>
          <li class="example">Growth of a tree, where each branch splits into smaller branches.</li>
        </ul>
      </li>
      <li class="list-item">Backtracking:
        <ul>
          <li class="example">Sudoku game puzzle.</li>
          <li class="example">Animal foraging, when an animal retraces paths if it doesn't find food.</li>
        </ul>
      </li>
    </ul>
  </div>

  <div class="question">Q2: Time and Space Efficiency</div>
  <div class="answer">
    <p><strong>Space Efficiency</strong>: This refers to the additional memory required by an algorithm during execution.</p>
    <p><strong>Time Efficiency</strong>: This measures how long an algorithm takes to complete a task. Both metrics help evaluate how practical and efficient an algorithm is.</p>
    <p><strong>Orders of Growth</strong> (Growth rates of algorithms):
      <ul>
        <li class="list-item">O(1) < O(log(n)) < O(n) < O(n log(n)) < O(n²) < O(n³) < O(2ⁿ) < O(n!)</li>
      </ul>
    </p>
  </div>

  <div class="question">Q3: Take away from different design principles from chapter 2.</div>
  <div class="answer">
    <ul>
      <li class="list-item">Decomposition: Breaking a problem into smaller subproblems, solving them individually, and combining results.</li>
      <li class="list-item">Abstraction: Simplifying problems by ignoring irrelevant details and focusing on the core logic.</li>
      <li class="list-item">Brave and Cautious Travel: Exploring paths optimistically or conservatively to navigate decision trees.</li>
      <li class="list-item">Level Order Traversal: Visiting nodes level by level in tree structures.</li>
      <li class="list-item">Hierarchical Data: Organizing data in layered structures to facilitate efficient access.</li>
      <li class="list-item">Edge Relaxation: Iteratively updating edge weights to find the shortest paths.</li>
      <li class="list-item">Balancing and Rotations: Ensuring structures like trees remain balanced to maintain optimal operation times.</li>
      <li class="list-item">Parental Dominance: Maintaining relationships where a parent node dominates its child.</li>
      <li class="list-item">Partitioning: Dividing data into segments for focused computation.</li>
      <li class="list-item">Shortest Path Trees: Constructing trees where paths from the root to all nodes represent the shortest distances.</li>
    </ul>
  </div>

  <div class="question">Q4: Hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, BST, AVL, 2-3, red-black, heap, trie)</div>
  <div class="answer">
    <ul>
      <li class="list-item"><strong>Tree</strong>: Trees are built for handling hierarchical data. For example, a family tree is a good representation.</li>
      <li class="list-item"><strong>BST</strong>: A binary search tree where each node has up to two children, optimized for quick searching and maintaining sorted data.</li>
      <li class="list-item"><strong>AVL Tree</strong>: A self-balancing binary search tree that ensures faster search, insert, and delete operations.</li>
      <li class="list-item"><strong>2-3 Tree</strong>: A multi-way search tree that maintains balance and optimizes search and insertion operations.</li>
      <li class="list-item"><strong>Red-Black Tree</strong>: A self-balancing binary search tree that maintains logarithmic height for faster operations.</li>
      <li class="list-item"><strong>Heap</strong>: A complete binary tree used in priority queues to retrieve the maximum or minimum element efficiently.</li>
      <li class="list-item"><strong>Trie</strong>: A tree-like data structure used to store a set of strings, optimized for prefix-based searches.</li>
    </ul>
  </div>

  <div class="question">Q5: Differences Between Trees and Graphs</div>
  <div class="answer">
    <ul>
      <li class="list-item"><strong>Tree</strong>: Hierarchical structure with a single root node and no cycles. Example: File system.</li>
      <li class="list-item"><strong>Graph</strong>: More general data structure with nodes connected by edges, can have cycles. Example: Social network.</li>
    </ul>
  </div>

  <div class="question">Q6: Tree vs. Graphs and their Traversals</div>
  <div class="answer">
    <p><strong>Tree:</strong> A tree is a type of graph that is connected and acyclic, with a unique path between any two nodes.</p>
    <p><strong>Graph:</strong> Graphs can have cycles, multiple paths, and no specific root node. They are more complex structures.</p>
    <ul>
      <li class="list-item">Tree Traversals: Preorder, Inorder, Postorder, Level-order.</li>
      <li class="list-item">Graph Traversals: DFS (Depth-First Search), BFS (Breadth-First Search).</li>
    </ul>
  </div>

  <div class="question">Q7: Sorting and Searching Algorithms</div>
  <div class="answer">
    <p><strong>Sorting Algorithms:</strong></p>
    <ul>
      <li class="list-item">Bubble Sort: Repeatedly swaps adjacent elements.</li>
      <li class="list-item">Selection Sort: Finds and swaps the minimum element.</li>
      <li class="list-item">Insertion Sort: Inserts each element into its correct position.</li>
      <li class="list-item">Merge Sort: Divides the array and merges sorted halves.</li>
      <li class="list-item">Quick Sort: Uses a pivot to partition and sort sublists.</li>
      <li class="list-item">Heap Sort: Builds a heap and removes elements for sorting.</li>
    </ul>
    <p><strong>Searching Algorithms:</strong></p>
    <ul>
      <li class="list-item">Linear Search: Checks each item until the target is found.</li>
      <li class="list-item">Binary Search: Divides a sorted list to quickly find the target.</li>
    </ul>
  </div>

  <div class="question">Q8: Importance of Graph Algorithms with Respect to Spanning Trees and Shortest Paths</div>
  <div class="answer">
    <ul>
      <li class="list-item"><strong>Spanning Trees</strong>: Essential in network design and distributed systems. Algorithms: Prim's, Kruskal's.</li>
      <li class="list-item"><strong>Shortest Path</strong>: Used in network routing and transportation systems. Algorithms: Dijkstra's, Bellman-Ford, Floyd-Warshall.</li>
    </ul>
  </div>

  <div class="question">Q9: Different Studied Algorithm Design Techniques</div>
  <div class="answer">
    <ul>
      <li class="list-item"><strong>Brute Force</strong>: Tries all possible solutions.</li>
      <li class="list-item"><strong>Decrease and Conquer</strong>: Solves smaller problems to build the solution.</li>
      <li class="list-item"><strong>Divide and Conquer</strong>: Breaks a problem into subproblems, solves, and combines.</li>
      <li class="list-item"><strong>Transform and Conquer</strong>: Transforms the problem into a simpler form.</li>
      <li class="list-item"><strong>Dynamic Programming</strong>: Solves overlapping subproblems and stores results.</li>
      <li class="list-item"><strong>Greedy Technique</strong>: Makes the best choice at each step.</li>
      <li class="list-item"><strong>Backtracking</strong>: Builds solutions incrementally, abandoning wrong paths.</li>
    </ul>
  </div>

</body>
</html>
