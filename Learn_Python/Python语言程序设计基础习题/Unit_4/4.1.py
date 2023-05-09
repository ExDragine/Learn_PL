# The function of good software is to make the complex appear to be simple.

num, target = 0, 4
while True:
    inputNumber = int(input())
    if target > inputNumber:
        print("小了")
    elif target < inputNumber:
        print("大了")
    else:
        print("对了")
        break
    num += 1
print(num)
