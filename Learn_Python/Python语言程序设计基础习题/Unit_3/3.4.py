num = str(input())
for i in range(2):
    if num[i] != num[-1 - i]:
        print("not")
print("yes")
