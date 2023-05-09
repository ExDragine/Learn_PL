def isOdd(num):
    if num % 2 == 0 or num % 3 == 0 or num % 5 == 0:
        return False
    else:
        return True


if __name__ == "__main__":
    print(isOdd(4))
