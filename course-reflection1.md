<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Algorithm Design and Graph Theory</title>
</head>
<body>

    <h1>Problems in Nature: Iteration, Recursion, and Backtracking</h1>
    <p><strong>Iteration:</strong> Iteration refers to the repetition or step-by-step processes observed in nature, such as cell division, the cycle of seasons, or the rise and fall of waves.</p>
    <p><strong>Recursion:</strong> Recursion involves a process where an answer leads to another, requiring backtracking to reach the main answer, such as in tree branching or DNA structure.</p>
    <p><strong>Backtracking:</strong> Backtracking explores all potential solutions and revises when needed to find the optimal solution, seen in scenarios like bees collecting nectar or the traveling salesman problem.</p>

    <h1>Space and Time Efficiency</h1>
    <p><strong>Space Efficiency:</strong> Refers to the amount of memory required by an algorithm, represented by space complexity.</p>
    <p><strong>Time Efficiency:</strong> Measures how fast an algorithm executes, represented by time complexity.</p>
    <p><strong>Why They Are Important:</strong> Efficient programs are critical for handling large inputs, saving memory, reducing delays, and minimizing costs.</p>
    <p><strong>Orders of Growth:</strong></p>
    <ul>
        <li>Constant (O(1)): No change in time with input size</li>
        <li>Logarithmic (O(log n)): Time grows logarithmically, e.g., binary search</li>
        <li>Linear (O(n)): Time grows proportionally, e.g., traversing an array</li>
        <li>Linearithmic (O(n log n)): Time grows slower than quadratic, e.g., heap sort</li>
        <li>Quadratic (O(n²)): Time grows quadratically, e.g., bubble sort</li>
        <li>Cubic (O(n³)): Time grows cubically, e.g., triple nested loops</li>
        <li>Exponential (O(2ⁿ)): Time doubles with input size, e.g., n-Queens problem</li>
        <li>Factorial (O(n!)): Time grows factorial, e.g., generating permutations</li>
    </ul>

    <h1>Design Principles</h1>
    <ul>
        <li><strong>Decomposition:</strong> Breaking a problem into smaller, manageable sub-problems.</li>
        <li><strong>Pattern Recognition:</strong> Identifying similarities to simplify the problem.</li>
        <li><strong>Abstraction:</strong> Ignoring unnecessary details and focusing on relevant aspects.</li>
        <li><strong>Brave and Cautious Travel:</strong> Brave explores boldly, while cautious moves carefully.</li>
        <li><strong>Pruning:</strong> Eliminating unlikely solutions to reduce computations.</li>
        <li><strong>Lazy Propagation:</strong> Delaying updates until necessary.</li>
        <li><strong>Sliding Window:</strong> Optimizing computations using dynamic ranges.</li>
        <li><strong>Level Order Traversal:</strong> Visiting nodes level by level.</li>
        <li><strong>Hierarchical Data:</strong> Organizing data in tree-like structures.</li>
        <li><strong>Edge Relaxation:</strong> Gradually refining paths in graphs (e.g., Dijkstra).</li>
        <li><strong>Balancing and Rotations:</strong> Maintaining balanced trees with rotations.</li>
        <li><strong>Kleene Closure:</strong> Representing repeated patterns.</li>
        <li><strong>Precomputing:</strong> Calculating results in advance for faster retrieval.</li>
        <li><strong>Parental Dominance:</strong> Parent nodes are always larger in heaps.</li>
        <li><strong>Prefix-Suffix:</strong> Using partial results for optimization.</li>
        <li><strong>Partitioning:</strong> Dividing data into smaller subsets for easier solving.</li>
        <li><strong>Bit Manipulation:</strong> Using binary operations to solve problems efficiently.</li>
        <li><strong>Memoization:</strong> Storing function results to avoid redundant calculations.</li>
        <li><strong>Invariants:</strong> Properties that remain constant throughout an algorithm.</li>
        <li><strong>Shortest Path Tree:</strong> A tree representing the shortest path from a source node.</li>
    </ul>

    <h1>Hierarchical Data and Tree Data Structures</h1>
    <p><strong>Tree:</strong> A tree where nodes have multiple children but lack efficiency.</p>
    <p><strong>Binary Search Tree (BST):</strong> A tree where each node’s left child is smaller and the right child is larger, used for search, insertion, and deletion.</p>
    <p><strong>AVL Tree:</strong> A self-balancing BST with a height difference of at most 1 for each node’s subtrees.</p>
    <p><strong>2-3 Tree:</strong> A balanced tree where each node has either two or three children, reducing complexity compared to AVL trees.</p>
    <p><strong>Red-Black Tree:</strong> A self-balancing BST that uses red or black nodes, with fewer rotations compared to AVL trees.</p>
    <p><strong>Heap:</strong> A complete binary tree used for priority queues, where the parent is greater (max-heap) or smaller (min-heap) than its children.</p>
    <p><strong>Trie:</strong> A tree where keys are stored in edges, useful for dictionaries and autocomplete.</p>

    <h1>Array Query Algorithms</h1>
    <p><strong>Segment Trees:</strong> Efficient for handling high-frequency updates and queries.</p>
    <p><strong>Fenwick Trees:</strong> Suitable for fast range queries with less memory usage.</p>
    <p><strong>Lookup Tables:</strong> Best for small data sets where fast access is required.</p>

    <h1>Tree vs Graph and Their Traversals</h1>
    <p><strong>Tree:</strong> A connected, cycle-free graph with one root node and one parent per node.</p>
    <p><strong>Graph:</strong> A network of nodes where cycles may exist and nodes can have multiple connections.</p>

    <h2>Tree Traversals</h2>
    <ul>
        <li><strong>Preorder:</strong> Visit root, then left subtree, then right subtree.</li>
        <li><strong>Inorder:</strong> Visit left subtree, root, then right subtree.</li>
        <li><strong>Postorder:</strong> Visit left subtree, right subtree, then root.</li>
        <li><strong>Level-order:</strong> Visit nodes level by level.</li>
    </ul>

    <h2>Graph Traversals</h2>
    <ul>
        <li><strong>DFS (Depth-First Search):</strong> Explore one branch as far as possible before backtracking.</li>
        <li><strong>BFS (Breadth-First Search):</strong> Explore all neighbors at the current depth level before moving to the next.</li>
    </ul>

    <h1>Applications of Algorithms</h1>
    <h2>Tree Applications:</h2>
    <ul>
        <li>Hierarchical data representation (e.g., file systems)</li>
        <li>Efficient searching (e.g., binary search trees)</li>
        <li>Priority management (e.g., heaps)</li>
    </ul>

    <h2>Graph Applications:</h2>
    <ul>
        <li>Network routing</li>
        <li>Social network analysis</li>
        <li>Pathfinding problems (e.g., shortest path algorithms)</li>
    </ul>

    <h1>Sorting and Searching Algorithms</h1>
    <h2>Sorting Techniques</h2>
    <ul>
        <li><strong>Bubble Sort:</strong> Repeated comparisons and swaps of adjacent elements to bubble the largest element to the top.</li>
        <li><strong>Insertion Sort:</strong> Inserts elements into their correct positions, like arranging cards in a hand.</li>
        <li><strong>Selection Sort:</strong> Finds the smallest element and places it at the start of the array.</li>
        <li><strong>Merge Sort:</strong> Divide and conquer technique that recursively splits and merges arrays.</li>
        <li><strong>Heap Sort:</strong> Removes the root, replaces it with the last element, and restores the heap property.</li>
    </ul>

    <h2>Searching Techniques</h2>
    <ul>
        <li><strong>Boyer-Moore:</strong> Skips unmatched portions using two tables (good suffix and bad character).</li>
        <li><strong>Knuth-Morris-Pratt:</strong> Computes a prefix table to avoid redundant comparisons.</li>
        <li><strong>Brute Force:</strong> Compares the pattern sequentially with the text.</li>
        <li><strong>Rabin-Karp:</strong> Uses hashing to find potential matches before comparing characters.</li>
    </ul>

</body>
</html>

<style>
    body {
        font-family: Arial, sans-serif;
        line-height: 1.6;
        background-color: #f4f4f4;
        color: #333;
        margin: 0;
        padding: 0;
    }

    h1, h2 {
        color: #2C3E50;
    }

    h1 {
        font-size: 2.5em;
        margin-top: 20px;
    }

    h2 {
        font-size: 2em;
        margin-top: 15px;
    }

    p {
        font-size: 1.1em;
        margin: 10px 0;
    }

    strong {
        font-weight: bold;
    }

    ul {
        list-style-type: square;
        margin-left: 20px;
    }

    ul li {
        margin: 8px 0;
    }

    code {
        background-color: #f4f4f4;
        padding: 2px 5px;
        font-family: monospace;
    }

    .highlight {
        background-color: #fffcf5;
        border-left: 4px solid #3498db;
        padding: 10px;
        margin: 20px 0;
    }

    .custom-table {
        width: 100%;
        border-collapse: collapse;
        margin-top: 20px;
    }

    .custom-table th, .custom-table td {
        padding: 10px;
        border: 1px solid #ddd;
        text-align: left;
    }

    .custom-table th {
        background-color: #3498db;
        color: white;
    }

    .custom-table td {
        background-color: #fff;
    }

    .custom-table tr:nth-child(even) td {
        background-color: #f2f2f2;
    }

    a {
        color: #3498db;
        text-decoration: none;
    }

    a:hover {
        text-decoration: underline;
    }

    .note {
        background-color: #e7f7ff;
        border: 1px solid #3498db;
        padding: 10px;
        margin-top: 15px;
    }
</style>
