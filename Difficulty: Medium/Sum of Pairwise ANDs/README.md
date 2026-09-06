<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-products5049/1">Sum of Pairwise ANDs</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of integers, calculate the sum of bitwise AND for all pairs of elements such that the first index is less than the second index.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = [5, 10, 15]
<strong>Output: </strong>15
<strong>Explanation: <br></strong></span><span style="font-size: 18px;">Consider all pairs of elements where the first index is less than the second index (i &lt; j).
For the array [5, 10, 15], the valid pairs are:
(5, 10)  -&gt; 5 &amp; 10  = 0
(5, 15)  -&gt; 5 &amp; 15  = 5
(10, 15) -&gt; 10 &amp; 15 = 10
Now, add all these results: 0 + 5 + 10 = 15
So, the total sum of bitwise ANDs for all such pairs is 15</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = [10, 20, 30, 40]
<strong>Output: </strong>46
<strong>Explanation: <br></strong>Consider all pairs of elements where the first index is less than the second index (i &lt; j).
For the array [10, 20, 30, 40], the valid pairs are:
(10, 20) -&gt; 10 &amp; 20 = 0
(10, 30) -&gt; 10 &amp; 30 = 10
(10, 40) -&gt; 10 &amp; 40 = 8
(20, 30) -&gt; 20 &amp; 30 = 20
(20, 40) -&gt; 20 &amp; 40 = 0
(30, 40) -&gt; 30 &amp; 40 = 8
Now, add all these results: 0 + 10 + 8 + 20 + 0 + 8 = 46
So, the total sum of bitwise ANDs for all such pairs is 46</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematics</code>&nbsp;<code>Bit Magic</code>&nbsp;