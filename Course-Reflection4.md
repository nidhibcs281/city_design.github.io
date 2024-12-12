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
      margin: 0;
      padding: 0;
      color: #333;
    }
    header {
      background-color: #4CAF50;
      color: white;
      text-align: center;
      padding: 1rem;
    }
    h1 {
      font-size: 2em;
      margin: 0;
    }
    h2 {
      font-size: 1.6em;
      margin-top: 2rem;
      color: #4CAF50;
    }
    section {
      margin: 2rem;
      background-color: white;
      border-radius: 8px;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
      padding: 2rem;
    }
    p {
      margin-bottom: 1.2rem;
      font-size: 1.1em;
    }
    ul {
      margin-left: 20px;
    }
    li {
      margin-bottom: 0.5rem;
    }
    .question {
      color: #555;
      font-weight: bold;
    }
    .answer {
      margin-top: 0.5rem;
      padding-left: 1rem;
      border-left: 4px solid #4CAF50;
    }
  </style>
</head>
<body>

  <header>
    <h1>Course Reflections</h1>
  </header>

  <section>
    <div class="question">
      <h2>Q1: What are the kinds of problems we see in nature? (iteration, recursion, backtracking)?</h2>
    </div>
    <div class="answer">
      <p>Nature presents us with a fascinating variety of problems that often mirror how we solve challenges in the world of algorithms. I learned this when we were given a portfolio assignment. Three common approaches—iteration, recursion, and backtracking—help us make sense of these problems and find solutions. Let’s dive into each one:</p>
      <ul>
        <li><strong>Iteration:</strong> Counting coins from your piggy bank one coin at a time, cell division where cells replicate through iterative steps.</li>
        <li><strong>Recursion:</strong> Growth of a tree, each branch split into smaller branches, which further split into even smaller ones.</li>
        <li><strong>Backtracking:</strong> Solving a Sudoku puzzle, or animal foraging when an animal retraces its steps after exploring different paths.</li>
      </ul>
    </div>

    <div class="question">
      <h2>Q2: Time and Space Efficiency</h2>
    </div>
    <div class="answer">
      <p><strong>Space Efficiency:</strong> Refers to the additional memory required by an algorithm during execution.</p>
      <p><strong>Time Efficiency:</strong> Measures how long an algorithm takes to complete a task. Both metrics help evaluate how practical and efficient an algorithm is for a specific problem.</p>
      <p><strong>Orders of Growth:</strong> The growth rates of algorithms are classified as:
      <ul>
        <li>O(1) &lt; O(log(n)) &lt; O(n) &lt; O(n log(n)) &lt; O(n²) &lt; O(n³) &lt; O(2ⁿ) &lt; O(n!)</li>
      </ul>
      </p>
    </div>

    <div class="question">
      <h2>Q3: Takeaway from different design principles from chapter 2</h2>
    </div>
    <div class="answer">
      <ul>
        <li><strong>Decomposition:</strong> Breaking a problem into smaller subproblems, like Merge Sort.</li>
        <li><strong>Abstraction:</strong> Simplifying problems by focusing on core logic, like graph representations.</li>
        <li><strong>Brave and Cautious Travel:</strong> Exploring paths optimistically (DFS) vs. conservatively (BFS).</li>
        <li><strong>Level Order Traversal:</strong> Traversing nodes level by level, used in BFS for trees and graphs.</li>
        <li><strong>Hierarchical Data:</strong> Organizing data in layers, like Binary Trees and Heaps.</li>
        <li><strong>Edge Relaxation:</strong> Updating edge weights iteratively, used in Bellman-Ford and Dijkstra’s algorithms.</li>
      </ul>
    </div>
    
    <div class="question">
      <h2>Q4: How do different tree data structures optimize hierarchical data?</h2>
    </div>
    <div class="answer">
      <p><strong>Tree:</strong> Trees handle hierarchical data more effectively, for example, family trees.</p>
      <p><strong>BST:</strong> A binary tree with smaller values on the left and larger on the right, optimized for searching.</p>
      <p><strong>AVL Tree:</strong> A self-balancing BST that optimizes height for faster operations.</p>
      <p><strong>Red-Black Tree:</strong> A self-balancing binary search tree that uses color properties for efficient insertions and deletions.</p>
      <p><strong>Heap:</strong> A binary tree optimized for retrieving the max or min element efficiently.</p>
      <p><strong>Trie:</strong> Optimized for storing strings and performing fast prefix searches.</p>
    </div>

  </section>

</body>
</html>
