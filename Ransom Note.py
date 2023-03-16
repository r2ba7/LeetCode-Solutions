from collections import Counter
class Solution:

    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        magazine = Counter(magazine)
        ransomNote = Counter(ransomNote)
        return all(magazine[x] >= ransomNote[x] for x in ransomNote)
        #return not Counter(ransomNote) - Counter(magazine)
