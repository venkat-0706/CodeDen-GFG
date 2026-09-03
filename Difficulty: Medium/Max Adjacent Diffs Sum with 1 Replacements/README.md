<h2><a href="https://www.geeksforgeeks.org/problems/modify-array-to-maximize-sum-of-adjacent-differences1729/1">Max Adjacent Diffs Sum with 1 Replacements</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an integer array <strong>arr[]</strong>, you are allowed to replace any elements with 1.&nbsp; </span><span style="font-size: 18px;">Find the maximum sum of absolute differences between consecutive elements after any number of modifications.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [3, 2, 1, 4, 5]
<strong>Output</strong>: 8
<strong>Explanation</strong>: Modify the array as arr[] = [3, 1, 1, 4, 1]. <br>Sum = |1-3| + |1-1| + |4-1| + |1-4| = 8, the maximum possible.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [1, 5]<strong>
Output: </strong>4<strong>
Explanation: </strong>No modification needed. Sum = |5-1| = 4.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Arrays</code>&nbsp;