import random

num, target = 0, random.randint(0, 100)
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
