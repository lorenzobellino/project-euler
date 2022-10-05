from primePy import primes

findedPrimes = 0
p = 11
res = 0

def truncetedPrimes(p):
    p = str(p)
    if(p[0]=='1' or p[-1]=='1'):
        return False
    for i in range(1,len(p)):
        if(not primes.check(int(p[i:])) or not primes.check(int(p[:-i]))):
            return False
    return True

while p< 1000000:
    if(primes.check(p)):
        if(truncetedPrimes(p)):
            findedPrimes += 1
            res+=p
    p+=2
print(res)



