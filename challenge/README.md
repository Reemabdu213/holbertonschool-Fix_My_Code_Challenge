# Fix My Code Challenge

A project where we fix existing buggy code without rewriting it from scratch.

## Files

### 0-fizzbuzz.py
**Bug:** The condition `i % 3 == 0 and i % 5 == 0` (FizzBuzz) was checked *after* the individual Fizz/Buzz checks, so 15 printed `Fizz` instead of `FizzBuzz`.  
**Fix:** Move the combined FizzBuzz check to be first.

### 1-print_square.js
**Bug:** The inner loop used a hardcoded size (e.g., `i * 2`) instead of the `size` variable, making 10×10 print as 16×16.  
**Fix:** Use `size` for both loop bounds.

### 2-sort.rb
**Bug:** Sorting was done on strings (lexicographic order), so `-9` and `-1` were misplaced.  
**Fix:** Filter numeric arguments, convert to integers with `.to_i`, then sort and reverse.

### 3-user.py
**Bug:** The `is_valid_password` method compared the plain text password against the stored MD5 hash.  
**Fix:** Hash the input password with MD5 before comparing.

### 4-delete_dnodeint/delete_dnodeint_at_index.c
**Bug:** When deleting a node, the function updated `next->prev` but forgot to update `prev->next`, breaking the backwards links.  
**Fix:** Added `current->prev->next = current->next` before freeing the node.
