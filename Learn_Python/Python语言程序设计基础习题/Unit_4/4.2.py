raw = str(input())
number, alphabet, sign = 0, 0, 0
for i in raw:
    if "0" <= i <= "9":
        number += 1
    elif "a" <= i <= "z":
        alphabet += 1
    else:
        sign += 1
print(number, alphabet, sign)
