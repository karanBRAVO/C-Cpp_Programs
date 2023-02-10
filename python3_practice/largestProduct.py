testCases = int(input("~ Enter test cases: "))


def largestProduct(n, k, number):
    numArr = []
    digitProdArr = []
    if n == len(number) and n >= k:
        for i in range(0, n - k + 1):
            num = ""
            count = 0
            j = i
            while count < k:
                num += number[j]
                count += 1
                j += 1
            numArr.append(num)
            prod = 1
            for index in range(0, k):
                prod *= int(num[index])
            digitProdArr.append(prod)
        maxProd = max(digitProdArr)
        return maxProd


for i in range(0, testCases):
    number_digit_count = int(input("~ Enter digit of number: "))
    consec_digit_count = int(input("~ Enter consecutive digit count: "))
    number = input("~ Enter number: ")
    print("Largest product = ", largestProduct(number_digit_count, consec_digit_count, number))