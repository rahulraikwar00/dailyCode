def minimumSwaps(arr):
    visited = [False] * len(arr)
    numswaps = 0
    for i in range(len(arr)):
        if not visited[i]:
            visited[i] = True
            j = arr[i]-1
            while not visited[j]:
                numswaps += 1
                visited[j] = True
                j = arr[j]-1
    return numswaps


print(minimumSwaps([1,1,2,1,2,2]))
