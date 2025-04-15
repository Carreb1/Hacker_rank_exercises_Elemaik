num = int(input('here: '))
a = [1,2,3,4,6,7,8,9]
def sum_pair(num, a):
    for i in range(len(a)-1):
        for j in range(i + 1, (len(a))):
            if a[i] + a[j] == num:
                return a[i], a[j]
            
    return None


print(sum_pair(num, a))