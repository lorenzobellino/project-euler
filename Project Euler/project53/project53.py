import numpy as np


def factorial(n):
    return np.math.factorial(n)


def combinatoric_selections():
    tot = 0
    for n in range(1, 101):
        for r in range(1, n + 1):
            comb = factorial(n) / (factorial(r) * factorial(n - r))
            if comb > 1000000:
                tot += 1
    return tot


if __name__ == "__main__":
    res = combinatoric_selections()
    print(res)
