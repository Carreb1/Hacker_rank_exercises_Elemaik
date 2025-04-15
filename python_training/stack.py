def insertion_sort(arr):
    for i in range(1, len(arr)):
        chave = arr[i]
        j = i - 1
        while j >= 0 and arr[j] < chave:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = chave

    return arr

arr = [2,4,5,6,3,4,6]

print(insertion_sort(arr))


