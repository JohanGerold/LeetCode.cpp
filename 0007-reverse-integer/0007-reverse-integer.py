class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1

        x = str(x).lstrip("-")
        x = x[::-1]
        x = x.lstrip("0") or "0"

        limit = "2147483648" if sign == -1 else "2147483647"

        if len(x) > len(limit):
            return 0

        if len(x) == len(limit) and x > limit:
            return 0

        return int(x) * sign