class node:
    def __init__(self):
        self.data = None
        self.next = None
class Solution:
    def getKthFromLast(self, head, k):
        first = head
        second = head
        for _ in range(k):
            if first is None:
                return -1
            first = first.next
        while first:
            first = first.next
            second = second.next

        return second.data if second else -1