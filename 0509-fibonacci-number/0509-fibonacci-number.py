class Solution:
    def fib(self, n: int) -> int:
        a = 0
        b = 1
        c = 0
        count = 0

        while count < n:
            c = a + b
            a = b
            b = c
            count += 1

        return a