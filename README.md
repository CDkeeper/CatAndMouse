# CatAndMouse
坐标轴上有一只猫， k 只老鼠和一个洞。猫位于点 0 ，洞位于点 n 。所有老鼠都位于猫和洞之间：第 i 只老鼠位于点 x  i ​  (0&lt;x  i ​  &lt;n)。在每个点，可以有很多老鼠。  在一秒发生一下情况：首先，一只老鼠向右移动一个单位。如果老鼠到达洞口，它就会隐藏起来（即老鼠不会再移动到任何一个位置，也不会被猫吃掉）。然后（在老鼠完成移动之后），猫向右移动一个单位。如果在猫的新位置，一些老鼠也在这个位置，就会被吃掉（之后它们无法移动）。执行这些操作，直到没有任何老鼠进洞或者没被吃掉。  换句话说，第一个动作是由老鼠完成的。如果老鼠已经到达洞，它就不会被吃掉。然后猫开始行动了。猫吃位于猫到达的位置的老鼠.
c++编写
算法题
重点注意思路和解题步骤
