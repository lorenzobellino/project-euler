class PokerHand(object):
    RESULT = ["Loss", "Tie", "Win"]

    def __init__(self, hand):
        VALUES = {
            "2": 2,
            "3": 3,
            "4": 4,
            "5": 5,
            "6": 6,
            "7": 7,
            "8": 8,
            "9": 9,
            "T": 10,
            "J": 11,
            "Q": 12,
            "K": 13,
            "A": 14,
        }
        self.hand = hand
        self.cards = hand.split(" ")
        self.values = [VALUES[self.cards[i][0]] for i in range(len(self.cards))]
        self.suits = [self.cards[i][1] for i in range(len(self.cards))]
        self.values.sort(reverse=True)

    def isFlush(self):
        return len(set(self.suits)) == 1

    def isStraight(self):
        return self.values == [
            _ for _ in range(self.values[0], self.values[-1] - 1, -1)
        ]

    def isStraightFlush(self):
        return self.isFlush() and self.isStraight()

    def isFourOfKind(self):
        unique = list(set(self.values))
        return len(unique) == 2 and (
            self.values.count(unique[0]) == 4 or self.values.count(unique[1]) == 4
        )

    def isFullHouse(self):
        unique = list(set(self.values))
        return len(unique) == 2 and (
            self.values.count(unique[0]) == 3 or self.values.count(unique[1]) == 3
        )

    def isThreeOfKind(self):
        unique = list(set(self.values))
        return len(unique) == 3 and (
            self.values.count(unique[0]) == 3
            or self.values.count(unique[1]) == 3
            or self.values.count(unique[2]) == 3
        )

    def isTwoPair(self):
        unique = list(set(self.values))
        return len(unique) == 3 and (
            self.values.count(unique[0]) == 2
            or self.values.count(unique[1]) == 2
            or self.values.count(unique[2]) == 2
        )

    def isPair(self):
        unique = list(set(self.values))
        return len(unique) == 4 and (
            self.values.count(unique[0]) == 2
            or self.values.count(unique[1]) == 2
            or self.values.count(unique[2]) == 2
            or self.values.count(unique[3]) == 2
        )

    def get_rank(self):
        if self.isStraightFlush():
            highest = self.values[0]
            return (8, highest, highest)
        elif self.isFourOfKind():
            unique = list(set(self.values))
            kicker = unique[0] if self.values.count(unique[0]) == 1 else unique[1]
            poker = unique[0] if self.values.count(unique[0]) == 4 else unique[1]
            return (7, poker, kicker)
        elif self.isFullHouse():
            unique = list(set(self.values))
            three = unique[0] if self.values.count(unique[0]) == 3 else unique[1]
            two = unique[0] if self.values.count(unique[0]) == 2 else unique[1]
            return (6, three, two)
        elif self.isFlush():
            return (5, self.values, self.values)
        elif self.isStraight():
            return (4, self.values[0], self.values[0])
        elif self.isThreeOfKind():
            unique = list(set(self.values))
            unique_values = [self.values.count(unique[i]) for i in range(len(unique))]
            three = unique[unique_values.index(3)]
            kickers = [unique[i] for i in range(len(unique)) if unique_values[i] == 1]
            return (3, [three], kickers)
        elif self.isTwoPair():
            unique = list(set(self.values))
            unique_values = [self.values.count(unique[i]) for i in range(len(unique))]
            pairs = [unique[i] for i in range(len(unique)) if unique_values[i] == 2]
            kicker = unique[unique_values.index(1)]
            return (2, pairs, [kicker])
        elif self.isPair():
            unique = list(set(self.values))
            unique_values = [self.values.count(unique[i]) for i in range(len(unique))]
            pair = unique[unique_values.index(2)]
            kickers = [unique[i] for i in range(len(unique)) if unique_values[i] == 1]
            return (1, [pair], kickers)
        else:
            return (0, self.values[0], self.values[0])

    def compare_with(self, other):
        rank = self.get_rank()
        other_rank = other.get_rank()

        if rank[0] > other_rank[0]:
            return "Win"
        elif rank[0] < other_rank[0]:
            return "Loss"
        else:
            if rank[0] == 8 or rank[0] == 7 or rank[0] == 6 or rank[0] == 4:
                if rank[1] > other_rank[1]:
                    return "Win"
                elif rank[1] < other_rank[1]:
                    return "Loss"
                else:
                    if rank[2] > other_rank[2]:
                        return "Win"
                    elif rank[2] < other_rank[2]:
                        return "Loss"
                    else:
                        return "Tie"
            elif rank[0] == 3 or rank[0] == 2 or rank[0] == 1 or rank[0] == 5:
                if sum(rank[1]) > sum(other_rank[1]):
                    return "Win"
                elif sum(rank[1]) < sum(other_rank[1]):
                    return "Loss"
                else:
                    if sum(rank[2]) > sum(other_rank[2]):
                        return "Win"
                    elif sum(rank[2]) < sum(other_rank[2]):
                        return "Loss"
                    else:
                        return "Tie"
            else:
                for c1, c2 in zip(self.values, other.values):
                    if c1 > c2:
                        return "Win"
                    elif c1 < c2:
                        return "Loss"
                return "Tie"


def main():
    res = 0
    with open("p054_poker.txt", "r") as f:
        while True:
            try:
                line = f.readline()
                # print(line)
                cards = line.split(" ")
                p1 = PokerHand(" ".join(cards[:5]))
                p2 = PokerHand(" ".join(cards[5:]))
                outcome = p1.compare_with(p2)
                # print(outcome)
                if outcome == "Win":
                    res += 1
            except:
                break
    print(res)


if __name__ == "__main__":
    main()
