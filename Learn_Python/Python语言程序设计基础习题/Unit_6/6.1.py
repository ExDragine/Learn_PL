# Computers are good at following instructions, but not at reading your mind.
import random

alphabet = []

for j in [chr(i) for i in range(ord('a'), ord('z'))]:
    alphabet.append(j)
for i in range(ord('A'), ord('Z')):
    alphabet.append(chr(i))
for i in range(10):
    alphabet.append(str(i))

for i in range(10):
    print(random.sample(alphabet,8))
