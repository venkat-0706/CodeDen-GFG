<h2><a href="https://www.geeksforgeeks.org/problems/bird-and-maximum-fruit-gathering--170645/1">Bird and Max Fruit Gathering</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p class="isSelectedEnd"><span style="font-size: 14pt;">Given an array <strong>arr[]</strong> representing the fruit values of trees arranged in a circle and an integer <strong>m</strong>, f</span><span style="font-size: 14pt;">ind the maximum total fruits the bird can collect by visiting at most <strong>m</strong> trees.</span></p>
<ul>
<li class="isSelectedEnd"><span style="font-size: 14pt;">Bird can start from any tree and move to a neighboring tree. </span></li>
<li class="isSelectedEnd"><span style="font-size: 14pt;">The first and last trees are also considered neighbors. </span></li>
<li class="isSelectedEnd"><span style="font-size: 14pt;">The bird collects the fruit value of every tree it visits.</span></li>
</ul>
<p><span style="font-size: 12pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 1, 3, 5, 0, 1, 4], m = 3<br><strong>Output:</strong> 9
<strong>Explanation</strong>: The bird can start from the second tree and visit the second, third, and fourth trees.<br>The total fruit value collected is 1 + 3 + 5 = 9.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 6, 2, 5, 3, 4], m = 2<br><strong>Output:</strong> 8
<strong>Explanation</strong>: The bird can start from the second tree and visit the second and third trees, collecting 6 + 2 = 8. It can also start from the fourth tree and visit the fourth and fifth trees, collecting 5 + 3 = 8. The maximum total fruit value is 8.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [7, 2, 1, 3, 4], m = 2<br><strong>Output:</strong> 11
<strong>Explanation</strong>: The bird can start from the fifth tree and visit the fifth and first trees, collecting 4 + 7 = 11. These trees are neighbors because the trees are arranged in a circle. The maximum total fruit value is 11.</span></pre></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;