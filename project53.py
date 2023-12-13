
def permuted_multiples():
    for i in range(1, 1000000):
        if sorted(str(i)) == sorted(str(2*i)) == sorted(str(3*i)) == sorted(str(4*i)) == sorted(str(5*i)) == sorted(str(6*i)):
            return i

if __name__ == '__main__':
    permuted_multiples()