[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/nODUKb4J)
# Assignment_09
1. Write a C++ program to define a structure named ‘Item‘ having members ‘id‘ (integer) and ‘cost‘ (float), declare an array of 6 ‘Item‘ structures, initialize the first four elements with sample data, and then use a ‘for‘ loop to iterate through the entire array, displaying the details of any item whose ‘cost‘ is greater than 50.00.


2. Write a C++ program to define a structure ‘Color‘ with members ‘red‘, ‘green‘, and ‘blue‘ (all integers), declare and initialize an array of 5 ‘Color‘ structures with sample RGB values, and then use a ‘for‘ loop to invert the color values of the first 3 elements in the array (by setting each component to 255−original value), finally displaying the new RGB values for all 5 elements.

3. Write a C++ program to define a structure ‘Point‘ with members ‘x‘ and ‘y‘ (both floats), declare an array of 7 ‘Point‘ structures, use a ‘for‘ loop to read the x and y coordinates for all 7 points from user input, and then iterate through the array again to count and display how many of the entered points lie in the first quadrant (where both x>0 and y>0).
   
Test Case 1: 

Enter coordinates for 7 points (x, y):

Point 1 - x: 1.2 

Point 1 - y: 3.4

Point 2 - x: -1.2 

Point 2 - y: 3.4 

Point 3 - x: 2.5 

Point 3 - y: -4.6 

Point 4 - x: 3.1 

Point 4 - y: 2.3 

Point 5 - x: -0.5 

Point 5 - y: -1.2 

Point 6 - x: 4.0 

Point 6 - y: 5.1 

Point 7 - x: -2.0 

Point 7 - y: 2.0

Output: Number of points in the first quadrant: 3

Test Case 2: 

Enter coordinates for 7 points (x, y): 

Point 1 - x: -3.0 

Point 1 - y: 4.5 

Point 2 - x: 2.0

Point 2 - y: -1.0

Point 3 - x: 5.0

Point 3 - y: 6.0 

Point 4 - x: -1.5 

Point 4 - y: -2.0 

Point 5 - x: 0.0 

Point 5 - y: 0.0 

Point 6 - x: 7.0

Point 6 - y: 3.0

Point 7 - x: 4.5

Point 7 - y: -3.5

Output: Number of points in the first quadrant: 2

4. Write a C++ program to define a structure ‘SalesRecord‘ with members ‘month‘ (string) and ‘amount‘ (float), declare an array of 12 ‘SalesRecord‘ structures (representing a year), use a ‘for‘ loop to accept user input for the ‘month‘ name and the ‘amount‘ for all 12 months, and then, using a single pass with a ‘for‘ loop, find and display the ‘month‘ with the maximum sales ‘amount‘ and the ‘month‘ with the minimum sales ‘amount‘.

Test Case 1: 

Enter sales data for each month: 

Month 1 Name: January 

Sales Amount: 12000 

Month 2 Name: February 

Sales Amount: 9500 

Month 3 Name: March 

Sales Amount: 16000 

Month 4 Name: April 

Sales Amount: 8000

Month 5 Name: May 

Sales Amount: 14000 

Month 6 Name: June 

Sales Amount: 11000 

Month 7 Name: July 

Sales Amount: 10000 

Month 8 Name: August 

Sales Amount: 11500 

Month 9 Name: September 

Sales Amount: 13000 

Month 10 Name: October 

Sales Amount: 12500 

Month 11 Name: November 

Sales Amount: 13500 

Month 12 Name: December 

Sales Amount: 15500

Output: Month with maximum sales: December with amount 15500 

Month with minimum sales: April with amount 8000

Test Case 2: 

Enter sales data for each month: 

Month 1: Month Name: January 

Sales Amount: 4500 

Month 2: Month Name: February

Sales Amount: 5200

Month 3: Month Name: March

Sales Amount: 5100 

Month 4: Month Name: April

Sales Amount: 4900 

Month 5: Month Name: May

Sales Amount: 5300

Month 6: Month Name: June

Sales Amount: 5700 

Month 7: Month Name: July

Sales Amount: 5500 

Month 8: Month Name: August

Sales Amount: 4800 

Month 9: Month Name: September

Sales Amount: 5100

Month 10: Month Name: October

Sales Amount: 5300

Month 11: Month Name: November

Sales Amount: 4900 

Month 12: Month Name: December

Sales Amount: 5100

Output: Month with maximum sales: June with amount 5700 

Month with minimum sales: January with amount 4500
