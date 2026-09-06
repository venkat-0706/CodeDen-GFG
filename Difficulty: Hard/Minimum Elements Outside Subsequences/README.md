<h2><a href="https://www.geeksforgeeks.org/problems/minimum-number-of-elements-which-are-not-part-of-increasing-or-decreasing-subsequence2617/1">Minimum Elements Outside Subsequences</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of size <strong>n</strong>, partition its elements into a strictly increasing subsequence and a strictly decreasing subsequence. </span></p>
<p><span style="font-size: 18px;">Each element can belong to at most one of these subsequences, and some elements may remain unused. </span></p>
<p><span style="font-size: 18px;">Determine the minimum number of elements that cannot be included in either subsequence.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [7, 8, 1, 2, 4, 6, 3, 5, 2, 1, 8, 7]
<strong>Output:</strong> 2
<strong>Explanation</strong>: One possible increasing subsequence is: [1, 2, 4, 5, 8]. One possible decreasing subsequence is: [7, 6, 3, 2, 1]. The remaining elements are 8 and 7, so the minimum number of unselected elements is 2.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [1, 4, 2, 3, 3, 2, 4]
<strong>Output:</strong> 0
<strong>Explanation</strong>: One possible increasing subsequence is: [1, 2, 3, 4]. One possible decreasing subsequence is: [4, 3, 2]. All elements are included in one of the two subsequences.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ n ≤ 100<br></span><span style="font-size: 18px;">1 ≤ arr[i] ≤ 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Arrays</code>&nbsp;