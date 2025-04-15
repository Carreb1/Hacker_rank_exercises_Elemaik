def max_subarray_sum(a):
    max_so_far = float('-inf')  # Inicializa com um valor muito baixo para lidar com arrays negativos
    max_ending_here = 0

    for i in range(len(a)):
        max_ending_here = max(max_ending_here + a[i], 0)
        print('here:', max_ending_here)
        max_so_far = max(max_so_far, max_ending_here)
        print('far,', max_so_far)
        
        print('here2', max_ending_here, '\n')

    return max_so_far  # Corrigida a indentação

a = [2, -8, 4]
print('\nthis', max_subarray_sum(a))
