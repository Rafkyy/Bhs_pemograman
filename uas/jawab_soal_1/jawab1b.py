def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

# Menghitung faktorial dari 5
print(factorial(5))
