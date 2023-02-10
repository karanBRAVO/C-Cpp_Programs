testCases = int(input("~ Enter test cases: "))


def method1(n):
    sumN = 0
    squaresSum = 0
    for i in range(1, n + 1):
        sumN += i
        squaresSum += i ** 2
    return (sumN * sumN) - squaresSum


def method2(n):
    diff = 0
    i = 1
    while i <= n:
        j = i + 1
        while j <= n:
            diff += i * j
            j += 1
        i += 1
    return (2 * diff)


def method3(n):
    sumN = (n * (n + 1)) // 2
    squaresSum = (n * (n + 1) * (2 * n + 1)) // 6
    return ((sumN * sumN) - squaresSum)


for i in range(0, testCases):
    number = int(input("~ Enter Number: "))
    print(f"difference (method 1) = {method1(number)}")
    print(f"difference (method 2) = {method2(number)}")
    print(f"difference (method 3) = {method3(number)}")