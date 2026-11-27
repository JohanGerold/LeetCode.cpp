class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        isPower = False
        i = 0

        while 2 ** i <= n:
            if 2 ** i == n:
                isPower = True
                break
            i += 1

        return isPower