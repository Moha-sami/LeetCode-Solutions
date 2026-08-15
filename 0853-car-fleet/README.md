<h2><a href="https://leetcode.com/problems/car-fleet">853. Car Fleet</a></h2><h3>Medium</h3><hr><p>There are <code>n</code> cars at given miles away from the starting mile 0, traveling to reach the mile <code>target</code>.</p>

<p>You are given two integer arrays <code>position</code> and <code>speed</code>, both of length <code>n</code>, where <code>position[i]</code> is the starting position of the <code>i<sup>th</sup></code> car and <code>speed[i]</code> is the speed of the <code>i<sup>th</sup></code> car in miles per hour.</p>

<p>A car cannot pass another car, but it can catch up and then travel at the speed of the slower car behind it.</p>

<p>A <strong>car fleet</strong> is a car or a group of cars driving next to each other. The speed of the car fleet is the <strong>minimum</strong> speed of any car in the fleet.</p>

<p>If a car catches up to a car fleet at the milestone <code>target</code>, it will still be considered as part of the car fleet.</p>

<p>Return the number of car fleets that will arrive at the destination.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> target = 12, position = [10,8,0,5,3], speed = [2,4,1,1,3]
<strong>Output:</strong> 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> target = 10, position = [3], speed = [3]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> target = 100, position = [0,2,4], speed = [4,2,1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == position.length == speed.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt; position[i] &lt; target</code></li>
	<li>All the values of <code>position</code> are <strong>unique</strong>.</li>
	<li><code>0 &lt; target &lt;= 10<sup>6</sup></code></li>
	<li><code>0 &lt; speed[i] &lt;= 10<sup>6</sup></code></li>
</ul>
