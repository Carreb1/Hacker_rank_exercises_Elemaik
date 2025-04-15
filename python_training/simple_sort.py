def sort(a):
    for i in range(len(a) - 1):
        for j in range(len(a) - i - 1):
            if a[j] > a [j+1]:
                a[j], a[j + 1] = a[j + 1], a[j]

    return a

a = [2, 4,1,5,6,7,3,7]
print(sort(a))
                