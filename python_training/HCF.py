def find_hcf(a, b):
    while b:
        a, b = b, a % b
    return a

# Example usage
num1, num2 = map(int, input().split())

hcf = find_hcf(num1, num2)
print(f"The HCF of {num1} and {num2} is {hcf}")
