testCases = int(input("~ Enter test cases: "))


def checkPrime(num):
    i = 2
    isPrime = True
    while i <= num ** 0.5:
        if num % i == 0:
            isPrime = False
            break
        i += 1
    return isPrime


def getMax_primeFactors(number):
    if checkPrime(number):
        return number
    else:
        primeFactorArr = []
        quotient = number
        primeNum = 2

        while quotient > 1:
            while True:
                if checkPrime(primeNum):
                    break
                if primeNum >= 3:
                    primeNum += 2
                else:
                    primeNum += 1

            if quotient % primeNum == 0:
                quotient = quotient // primeNum
                if quotient == 1:
                    break
                primeFactorArr.append(primeNum)
                if checkPrime(quotient):
                    primeNum = quotient
                    primeFactorArr.append(primeNum)
                    break
                else:
                    primeNum = 2
                continue

            if primeNum >= 3:
                primeNum += 2
            else:
                primeNum += 1

        return max(primeFactorArr)


for i in range(0, testCases):
    number = int(input("~ Enter the number: "))
    print(f"largest prime factor of {number} is {getMax_primeFactors(number)}")
