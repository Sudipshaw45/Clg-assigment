def is_palindrome(s):
    left, right = 0, len(s)-1
    while left < right:
        if s[left] != s[right]:
            return 0
        left += 1
        right -= 1
    return 1

s = "abba"
print(is_palindrome(s)) 