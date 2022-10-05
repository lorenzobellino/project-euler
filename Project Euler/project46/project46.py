import itertools
import eulerlib

def test_goldbach(n):
	if n % 2 == 0 or eulerlib.is_prime(n):
		return True
	for i in itertools.count(1):
		k = n - 2 * i * i
		if k <= 0:
			return False
		elif eulerlib.is_prime(k):
			return True

ans = next(itertools.filterfalse(test_goldbach, itertools.count(9, 2)))

print(str(ans))

