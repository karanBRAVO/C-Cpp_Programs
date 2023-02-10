testCases = int(input("~ Enter test case: "))
arr = []


def checkPrime(num):
    i = 2
    foundPrime = True
    while i <= (num ** 0.5):
        if num % i == 0:
            foundPrime = False
            break
        i += 1
    if foundPrime:
        return True
    else:
        return False


def getPrimeNumbers_usingArray(number):
    arr.clear()
    n = 1
    i = 2
    while len(arr) != number:
        n += 1
        while i <= n:
            isPrime = checkPrime(i)
            if isPrime:
                arr.append(i)
            i += 1


def getPrimeNumber(number):
    count = 0
    reqNum = 0
    num = 2
    while count < number:
        isPrime = checkPrime(num)
        if isPrime:
            reqNum = num
            count += 1
        if num < 3:
            num += 1
        else:
            num += 2
    return reqNum


if testCases >= 1 and testCases <= 10 ** 3:
    for i in range(0, testCases):
        number = int(input("~ Enter the number: "))
        if number >= 1 and number <= 10 ** 4:
            getPrimeNumbers_usingArray(number)
            print(f"{number}th prime factor(using array) is {arr[number - 1]}")
            print(
                f"{number}th prime factor(w/o using array) is {getPrimeNumber(number)}")
