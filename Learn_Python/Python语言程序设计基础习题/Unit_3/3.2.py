power = 1
for i in range(365):
    if (i + 7) % 7 > 3:
        power *= 1.01
print(power)
