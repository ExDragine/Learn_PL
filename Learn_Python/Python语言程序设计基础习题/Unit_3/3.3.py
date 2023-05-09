power = 1
for i in range(365):
    if (i + 10) % 10 == 0:
        t = 7
        if t % 7 > 3:
            power *= 1.00
        t += 1
    else:
        if (i + 7) % 7 > 3:
            power *= 1.01
print(power)
