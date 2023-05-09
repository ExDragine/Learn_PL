def isNum(num):
    try:
        eval(num)
        return True
    except NameError:
        return False


if __name__ == "__main__":
    print(isNum("1e-9"))
