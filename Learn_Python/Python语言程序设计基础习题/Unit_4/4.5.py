import random

num, target = 0, random.randint(0, 100)
while True:
    try:
        inputNumber = eval(input())
        if target > inputNumber:
            print("小了")
        elif target < inputNumber:
            print("大了")
        else:
            print("对了")
            break
        num += 1
    except NameError:
        print("input a int")

print(num)
