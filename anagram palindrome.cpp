
  We can do it in O(n) time using a count array. Following are detailed steps. 
1) Create a count array of alphabet size which is typically 256. Initialize all values of count array as 0. 
2) Traverse the given string and increment count of every character. 
3) Traverse the count array and if the **count array has more than one odd values, return false. Otherwise, return true**. 
