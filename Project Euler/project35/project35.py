import string
from primePy import primes
primesNumber = []
res = 0

def possibleRotations(number):
    number = str(number)
    rotations = []
    for i in range(len(number)):
        rotations.append(int(number[i:] + number[:i]))
    return rotations

for p in range(2,1000000):
    if(primes.check(p)):
        primesNumber.append(p)

for p in primesNumber:
    if("2" in str(p) or "4" in str(p) or "5" in str(p) or "6" in str(p) or "8" in str(p)):
        continue
    else:
        rot = possibleRotations(p)
        if(all(pp in primesNumber for pp in rot)):
            res+=1
print(res)
        
