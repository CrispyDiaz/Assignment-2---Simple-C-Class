CS 210 - Assignment 2
(25 points)

Due: Upload .cpp source code file to Canvas by Wed. 9/16 @ 4:00 pm

Objectives:
Write and run a C++ program with a custom class.

Practice concepts from Ch. 1.

Tasks:
Create a class with a custom name (detailed below) and implement the following:

Instance variables (use these names and types):

title - string
department – string
courseNumber – int
capacity – int
Methods:

Write two constructors that will initialize the instance variables of the class. Consider and experiment with differing ways to code this.  Just make sure it works as follows:
Constructing the object via passing four arguments – two strings, and two ints, corresponding to the order the instance variables are listed above. The constructor will assign each parameter to the corresponding instance variable.
Providing a no-argument (zero-parameter) option that will set the title to “TBD”, the department to “TBD”, the courseNumber to 0 and the capacity to –1.
NOTE: You do not need to override any other "Big Five" methods, but are welcome to experiment on your own with them.
Add accessor methods for each of the four fields of the class, prefixing each with get – e.g. getTitle(), etc.
Add mutator methods for each of the fields, prefixing each with set – e.g. setTitle(), etc.
Write print() method that will display your full (first and last) name on the first line, the title on second line, department and courseNumber on the third line, and capacity on the fourth line. The only variable to be captioned is the capacity.  Use accessors to retrieve the values rather than directly accessing the variables.  This will use the same signature as the print() in the Square example on p. 40
Overload the << operator, using the same model as in the Square example, so that calling it will output an instance of your class on the screen.
Write a simple main() in the same class that will create a vector with at least five instances of your class – one created with the zero-parameter constructor and the rest with the four-parameter constructor.
Add code to main() that will iterate through the vector and print each object with a blank line in between each instance.
