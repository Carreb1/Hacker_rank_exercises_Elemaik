def find_array(n):
    arr = sorted(n)
    for i in range(0, len(arr)):
        if i + 1 != arr[i]:
            return i + 1
    return len(arr) + 1
