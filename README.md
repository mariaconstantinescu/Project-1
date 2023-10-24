# Project-1
Data Structures and Algorithms
In a train station, there is a train carrying goods. Its wagons are inventoried on a list, in their order.
The list contains, for each wagon, the following details:
- wagon’s code (9 digits);
- code of the wagon’s content (9 digits);
- sender/return address;
- destination/recipient address.
Since in the station, the position of the wagons is reversed, then the listing of data about those
wagons is required, in a new order.
In view of this, we create a stack in which we keep the data of each wagon. The data corresponding
to a wagon becomes an element of the stack (a node of the simple linked list). After the data is inserted in the stack, then the
elements of the stack are listed, and subsequently removed during this process. During the listing we
will obtain the list of the wagons in reverse order (the more recent, the closer to the beginning of the
list displayed).
