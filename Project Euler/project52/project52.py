def permuted_multiples():
    n = 1
    while not (
        sorted(str(n))
        == sorted(str(2 * n))
        == sorted(str(3 * n))
        == sorted(str(4 * n))
        == sorted(str(5 * n))
        == sorted(str(6 * n))
    ):
        n += 1
    return n
    # for i in range(1, 1000000):
    #     if (
    #         sorted(str(i))
    #         == sorted(str(2 * i))
    #         == sorted(str(3 * i))
    #         == sorted(str(4 * i))
    #         == sorted(str(5 * i))
    #         == sorted(str(6 * i))
    #     ):
    #         return i


if __name__ == "__main__":
    n = permuted_multiples()
    print(n)
