import math

def list_primality(n: int) -> list[bool]:
	# Sieve of Eratosthenes
	result: list[bool] = [True] * (n + 1)
	result[0] = result[1] = False
	for i in range(int(math.sqrt(n)) + 1):
		if result[i]:
			for j in range(i * i, len(result), i):
				result[j] = False
	return result

def has_same_digits(x, y):
	return sorted(str(x)) == sorted(str(y))

LIMIT = 10000
isprime = list_primality(LIMIT - 1)
for base in range(1000, LIMIT):
    if isprime[base]:
        for step in range(1, LIMIT):
            a = base + step
            b = a + step
            if     a < LIMIT and isprime[a] and has_same_digits(a, base) \
            and b < LIMIT and isprime[b] and has_same_digits(b, base) \
            and (base != 1487 or a != 4817):
                print(str(base) + str(a) + str(b))


