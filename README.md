# modularMadness
C++ 

Modular Madness
In audio software, sound processing is done using a network of modules, each executing a simple task like applying a filter or summing signals. In this task, we process strings instead of audio using a similar module-based approach.
The input defines a network of modules and a stream of input into this network. This input stream should be fed into the first module (in the order of definition) and the output of the program should correspond to the output of the last module. If there are multiple input connections for a module, they should be “summed” before feeding to the module. Summing works by appending the strings in the order in which the input connections have been made. The individual modules should be processed in the order they have been defined.1 The network should only process one string at a time. Each process statement should let the network run empty (see also the example below).
If you encounter ambiguities while solving this task, make an assumption about the behavior of the network and document it in an appropriate way.

Input description:
Each line starting with the keyword module defines a new module to be added to the network. A line starting with the keyword connect connects the output of one module to the input of another module. A line starting with process feeds the rest of the line into the first module. This input consists of one or more strings made of the characters a-z. Individual strings are separated with a single space character. If there are several process lines, each of them should behave the same way as if input alone.
A module definition looks like this:
module <name> <operation>
Here name is an arbitrary name (no whitespace) for the module and operation specifies
what the module should do with its input. The following operations should be supported:
- echo : The output string is the input string concatenated to itself.
- reverse : The output string is the input string reversed.
- delay: The output string is the previous input string. The initial output is “hello”. - noop: The input appears unchanged at the output.

A connection is made like this:
connect <module_name1> <module_name2>
This connects the output of module module_name1 to the input of module module_name2.
Modules will always be defined before they are connected. Output description
For each process line in the input, an output line should be created that contains the outputs of the last module separated by a single space character. The number of output strings should be limited to sixteen times the number of input strings in the corresponding process line.

Example Input
module alpha reverse
module beta delay
connect alpha beta
process hello world

Output
hello olleh dlrow
