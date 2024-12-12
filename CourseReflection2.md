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
      <li class="list-item"><span class="highlight">P:</span> Problems that can be solved in polynomial time (O(n), O(n^2)) <span class="example">Ex: Searching, sorting, etc.</span></li>
      <li class="list-item"><span class="highlight">NP:</span> <span class="example">Ex: Knapsack.</span></li>
      <li class="list-item"><span class="highlight">NP-Hard:</span> More difficult problems.</li>
      <li class="list-item"><span class="highlight">EXPTIME:</span> Problems that take exponential time to solve.</li>
    </ul>
    <p><span class="important">Orders of Growth:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">O(1):</span> Takes constant time. <span class="example">Ex: Accessing an element from an array.</span></li>
      <li class="list-item"><span class="highlight">O(log n):</span> <span class="example">Ex: Binary search.</span></li>
      <li class="list-item"><span class="highlight">O(n):</span> Takes linear time.</li>
      <li class="list-item"><span class="highlight">O(n^2):</span> Takes quadratic time. For nested loops. <span class="example">Ex: Bubble sort.</span></li>
      <li class="list-item"><span class="highlight">O(n^3):</span> Takes cubic time. For triple nested loops. <span class="example">Ex: Matrix multiplication.</span></li>
      <li class="list-item"><span class="highlight">O(2^n):</span> Execution time doubles by adding an element.</li>
      <li class="list-item"><span class="highlight">O(n!):</span> Problems where permutations of elements are necessary.</li>
    </ul>
  </div>

  <div class="section">
    <h2>3. Algorithm Design Techniques</h2>
    <p><span class="important">Decomposition:</span> Breaking a problem into smaller parts, making it easier to solve.</p>
    <p><span class="important">Balancing and Rotation:</span> Ensuring the tree structure is balanced. If not, it can be balanced by rotating the nodes and placing them in the right position.</p>
    <p><span class="important">Pattern Recognition:</span> Spotting repeated patterns in data to make problems easier to solve.</p>
    <p><span class="important">Abstraction:</span> Hiding complicated details and showing only what is necessary.</p>
    <p><span class="important">Brave and Cautious Travel:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">Brave:</span> Jumping in and exploring quickly by taking risks.</li>
      <li class="list-item"><span class="highlight">Cautious:</span> Going step by step; if wrong, backtrack and try again.</li>
    </ul>
    <p><span class="important">Level Order Traversal:</span> A tree-like structure from top to bottom, visiting levels of nodes one at a time.</p>
    <p><span class="important">Hierarchical Data:</span> Data arranged in a tree structure like a family tree or folder system.</p>
  </div>

  <div class="section">
    <h2>4. Tree Data Structures</h2>
    <p><span class="important">Hierarchical Representation:</span> A structure with a parent-child relationship, best represented by a tree.</p>
    <p><span class="important">Types of Trees:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">Tree:</span> An unbalanced tree. Data is arranged in a tree format without a specific order. Operations like level traversal can be done.</li>
      <li class="list-item"><span class="highlight">BST (Binary Search Tree):</span> An ordered tree that can be balanced or unbalanced. Can create skewed trees like strictly binary trees, complete binary trees, or almost complete binary trees.</li>
      <li class="list-item"><span class="highlight">AVL Tree:</span> A self-balancing binary search tree. Balanced by keeping the balance factor between -1 and 1.</li>
      <li class="list-item"><span class="highlight">2-3 Tree:</span> A balanced search tree with 2 or 3 child nodes. Mainly used in file systems.</li>
      <li class="list-item"><span class="highlight">Red-Black Tree:</span> A self-balancing tree that uses color-coding to maintain balance. The root node is black, and alternating nodes are red and black.</li>
      <li class="list-item"><span class="highlight">Heap:</span> A complete binary tree, either max-heap or min-heap, based on parent-child value relationships.</li>
      <li class="list-item"><span class="highlight">Trie:</span> A tree-like structure used to store characters or strings, useful for string matching, searching, and prefix-based operations.</li>
    </ul>
  </div>

  <div class="section">
    <h2>5. Tree and Graph Algorithms</h2>
    <p><span class="important">Trees:</span> Acyclic, hierarchical structure used in file systems. Includes traversals like preorder, postorder, and inorder.</p>
    <p><span class="important">Graphs:</span> Can be cyclic, and nodes are connected by edges. Traversals include DFS (Depth-First Search) and BFS (Breadth-First Search). Graphs can be bidirectional, and revisiting nodes is allowed for pathfinding.</p>
  </div>

  <div class="section">
    <h2>6. Sorting and Searching Techniques</h2>
    <p><span class="important">Sorting Techniques:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">Bubble Sort:</span> Repeatedly swaps adjacent elements, placing the largest element in the correct position.</li>
      <li class="list-item"><span class="highlight">Insertion Sort:</span> Inserts elements into the correct position in a sorted list.</li>
      <li class="list-item"><span class="highlight">Selection Sort:</span> Selects the smallest element and places it at the beginning.</li>
      <li class="list-item"><span class="highlight">Merge Sort:</span> Uses divide and conquer technique to break down problems and sort.</li>
      <li class="list-item"><span class="highlight">Heap Sort:</span> Deletes the root node, swaps it with the last element, and repeats the process to sort elements.</li>
    </ul>

    <p><span class="important">Searching Techniques:</span></p>
    <ul>
      <li class="list-item"><span class="highlight">Boyer-Moore:</span> Uses two tables (bad symbol and good suffix shift) to skip unmatching characters.</li>
      <li class="list-item"><span class="highlight">Knuth-Morris-Pratt:</span> Uses substrings of the pattern and calculates pi values to skip characters.</li>
      <li class="list-item"><span class="highlight">Brute Force:</span> Matches pattern from left to right, shifting by one character if a mismatch occurs.</li>
      <li class="list-item"><span class="highlight">Rabin-Karp:</span> Improvised brute force, computes hash values to compare only when the pattern matches the text.</li>
    </ul>
  </div>

</body>
</html>
