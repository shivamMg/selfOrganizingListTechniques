## Self Organizing List Techniques

A [Self Organizing List][http://en.wikipedia.org/wiki/Self-organizing_list] reorders its elements in a way, so that the elements accessed the most are moved towards front. This algorithm is applied in sequential access of files.

---

Three main techniques are:

 - Move to front
 - Transpose
 - Count
 
### Move To Front 

The element is placed at the beginning of list after it is accessed.

### Transpose

The element is swapped with the preceding after it is accessed.

### Count

Elements are sorted according to their frequency of being accessed. The most accessed will be at the front.

---

The three C programs cover these techniques. They also calculate the number of probes for the input.

> Compile the `.c` files.
> Run the binaries.
 
