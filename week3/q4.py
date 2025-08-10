class node:
    def __init__(self):
        self.data = None
        self.next = None

class Solution:
    def searchKey(self, n, head, key):
        current = head
        while current:
            if current.data == key:
                return True
            current = current.next
        return False