# There are only two kinds of programming languages: those people always bitch about and those nobody use.

earth = [100]
for i in range(1, 11):
    earth.append(earth[i - 1] + 0.5)
print(earth)
