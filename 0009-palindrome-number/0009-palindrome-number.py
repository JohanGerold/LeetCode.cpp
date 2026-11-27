class Solution:
    def isPalindrome(self, x: int) -> bool:
        copy_num = x
        store = ""

        if x == 0:
            return True

        while x > 0:
            num = x % 10
            store += str(num)
            x //= 10

        if store == str(copy_num):
            return True
        else:
            return False