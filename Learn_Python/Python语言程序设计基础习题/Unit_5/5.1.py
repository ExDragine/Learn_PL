# Measuring programming progress by lines of code is like measuring aircraft building progress by weight
def tian():
    for i in range(1, 13):
        for j in range(1, 12):
            if (i - 1) % 5 == 0 and (j - 1) % 5 == 0:
                print("+", end="")
            elif (i - 1) % 5 == 0:
                print("-", end="")
            elif (j - 1) % 5 == 0:
                print("|", end="")
            else:
                print(" ")
            if j == 11:
                print("\n")


if __name__ == "__main__":
    tian()
