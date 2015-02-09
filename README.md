## Self Organizing List Techniques

A [Self Organizing List][1] reorders its elements in a way, so that the elements accessed the most are moved towards the front. The algorithm is applied in sequential access of files.

---

Three main techniques are:

 - Move to front
 - Transpose
 - Count
 
### Move To Front 

The element is placed at the beginning of list after it is accessed.

### Transpose

The element is swapped with the preceding element after it is accessed.

### Count

Elements are sorted according to their frequency of access. The most accessed element will be at the front.

---

The three C programs cover these techniques. They also calculate the number of probes for the input.
Only strings with alphabets from lowercase *a-z* and whitespace *' '* are considered as valid inputs. You may alter the code to accept other elements.

### Instructions
 
> - Compile the `.c` file.
> - Run the corresponding binary.

 
 [1]: http://en.wikipedia.org/wiki/Self-organizing_list
 
