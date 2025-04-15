def MDC(a, b):
    while b != 0:
        a ,b = b, a % b

    return a

num1, num2 = map(int, input().split())

hcf = MDC(num1, num2)
print(f"The HCF of {num1} and {num2} is {hcf}")