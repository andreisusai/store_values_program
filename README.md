# Groupe de susai_a 860857

Program to allow storing, deleting and retrieving values associated with keys. Both keys and values are positive, possibly big integers. The program receive commands and display results.

For that, I implemented a linked list that supports all the operations listed below to execute the commands properly:

1.Inserting an entry with a key and a value
2.Removing an entry given its key
3.Looking up an entry given its key
4.The program does not take any argument. Commands are read from standard input, and results are displayed on standard output.
4.You are able to compile the program using the Makefile: the resulting program name is my_crd, and is located at the root of your repository.

# Start make

# Execute program ./my_crd

# The insertion command

The insertion command obey the following rules:

If the key does not already exist, it is inserted
If the key already exists, its current value is updated
In both cases, the key must be displayed as a result
Format:

<key> <value>
Eg 34 5

# The removal command obey the following rules:

If the key exists, it is removed, and its value is displayed as a result
If the key does not exist, -1 is displayed as a result
Format:

<key> D
Eg 34 D

# The lookup command obey the following rules:

If the key exists, its value is displayed as a result
If the key does not exist, -1 is displayed as a result
Format:

<key>
34

You can also use the program with the commad.lst file ti check the results.

# Use ./my_crd < command.lst
