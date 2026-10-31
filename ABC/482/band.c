/*
Using prefix sum technique for rows and cols is one way, but the memory usage has to be computed.
H and W (height and width) are upto 10^9. So if we store information for every row and every col
about how many cells are occupied, it will take 2 x 10^9 x 4 bytes ~ 8GB which exceeds the memory
limit (1GB).

We can store the rows or cols where there's a cell occupied in ascending order and perform binary 
search for each query. It will take 2 x 3 x 10^5 x 4 bytes which is ~ 2.4MB (bruh!!, the. difference).
*/
