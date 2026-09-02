<h2><a href="https://www.geeksforgeeks.org/problems/unoccupied-computers-1646661078/1">Unoccupied Computers</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">A cafe has n computers. The customer events are represented by a string s of uppercase English letters, where each distinct letter appears exactly twice:</span></p>
<ul>
<li><span style="font-size: 18px;">The first occurrence denotes the customer's arrival.</span></li>
<li><span style="font-size: 18px;">The second occurrence denotes the customer's departure.</span></li>
</ul>
<p><span style="font-size: 18px;">A customer is assigned a computer only if one is available at the time of arrival, otherwise the customer is rejected and does not use a computer.</span></p>
<p><span style="font-size: 18px;">Return the number of customers who could not be assigned a computer upon arrival.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 3, s = "GACCBDDBAGEE"
<strong>Output: </strong>1
<strong>Explanation:</strong> Only D will not be able to get any computer. So the answer is 1.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: n = 1, s = "ABCBAC"
<strong>Output: </strong>2
<strong>Explanation: </strong>B and C will not be able to get any computers. So the answer is 2.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 26<br>1 ≤ |s| ≤ 52<br></span><span style="font-size: 18px;">s consists of uppercase English letters and each letter occurs exactly 2 times.</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;