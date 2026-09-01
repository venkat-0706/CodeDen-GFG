<h2><a href="https://www.geeksforgeeks.org/problems/number-of-palindromic-strings2706/1">Count Palindromic Strings with Constraints</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given two integers <strong>n</strong>&nbsp; and <strong>k</strong>, consider an alphabet consisting of the first k lowercase English letters. </span><span style="font-size: 18px;">Find the number of palindromic strings whose length is less than or equal to n, such that:</span></p>
<ul>
<li><span style="font-size: 18px;">Every character in the string belongs to the given alphabet.</span></li>
<li><span style="font-size: 18px;">No character appears more than twice in the string.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Note: </strong>Since the answer can be very large, return it modulo <strong>10^9+7</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> n = 3, k = 2
<strong>Output:</strong> 6
<strong>Explanation:</strong> </span><span style="font-size: 20px;">The possible strings are: "a", "b", "aa", "bb", "aba", "bab".</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> n = 4, k = 3
<strong>Output:</strong> 18
<strong>Explanation:</strong> </span><span style="font-size: 20px;">The possible strings are:"a", "b", "c", "aa", "bb", "cc", "aba", "aca", "bab", "bcb", "cac", "cbc", "abba", "acca", "baab", "bccb", "caac", "cbbc". </span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ k ≤ 26<br>1 ≤ n ≤ 52<br>n ≤ 2*k</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Mathematics</code>&nbsp;<code>Combinatorial</code>&nbsp;