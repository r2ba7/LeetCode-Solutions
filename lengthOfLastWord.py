class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip()
        chars = 0
        for c in reversed(s):
            if c == ' ':
                return chars
            chars+=1
        return chars
