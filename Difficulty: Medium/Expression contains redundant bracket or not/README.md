<h2><a href="https://www.geeksforgeeks.org/problems/expression-contains-redundant-bracket-or-not/1">Expression contains redundant bracket or not</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string of balanced expression <strong>s</strong>, check if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets.</span><span style="font-size: 18px;"><br></span><span style="font-size: 18px;"><strong>Note:</strong>&nbsp;Expression may contain <strong>+ , - ,&nbsp;*,</strong> and<strong> /</strong> operators. Given expression is&nbsp;<strong>valid</strong>&nbsp;and there are&nbsp;<strong>no white</strong>&nbsp;spaces present.</span><br><br><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "((a+b))"</span><span style="font-size: 18px;">
<strong>Output: </strong>true 
<strong>Explanation: </strong>((a+b)) can reduced to (a+b).</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "(a+(b)/c)"
<strong>Output:</strong> true
<strong>Explanation:</strong> (a+(b)/c) can reduced to (a+b/c) because b is surrounded by () which is redundant.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "(a+b+(c+d))"</span><span style="font-size: 18px;">
<strong>Output: </strong>false
<strong>Explanation:</strong>(a+b+(c+d)) doesn't have any redundant or multiple brackets.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ |s| ≤10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Strings</code>&nbsp;