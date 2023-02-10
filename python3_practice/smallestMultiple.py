testCases = int(input("~ Enter test cases: "))


def smallestMultiple(n):
    num = 0

    while True:
        num += 1
        isOutput = True
        for i in range(1, n + 1):
            if num % i != 0:
                isOutput = False
                break
        if isOutput:
            break

    return num


for i in range(0, testCases):
    number = int(input("~ Enter the number: "))
    print("smallest multiple =", smallestMultiple(number))
