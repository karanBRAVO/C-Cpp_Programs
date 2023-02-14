# pending -> optimal solution

testCases = int(input("~ Enter test cases: "))


def checkPrime(num):
    i = 2
    isFound = True
    while i <= num ** 0.5:
        if num % i == 0:
            isFound = False
            break
        i += 1
    return isFound


def sumOfPrimes(n):
    primeNumArr = []
    num = 2
    isPrime = False
    while num <= n:
        isPrime = checkPrime(num)
        if isPrime:
            primeNumArr.append(num)
        num += 1
    sumEle = 0
    for ele in primeNumArr:
        sumEle += ele
    return sumEle


for i in range(0, testCases):
    number = int(input("~ Enter the number: "))
    if number > 1:
        print("Sum = ", sumOfPrimes(number))
    else:
        print("Sum = 0")