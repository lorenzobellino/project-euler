def is_lyrchel(n):
    for i in range(50):
        n = n + int(str(n)[::-1])
        if str(n) == str(n)[::-1]:
            return True
    return False


def lyrchel_numbers():
    total = 0
    n = 1
    while n < 10000:
        if not is_lyrchel(n):
            total += 1
        n += 1
    return total


if __name__ == "__main__":
    res = lyrchel_numbers()
    print(res)
