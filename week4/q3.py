class DLLNode:
    def __init__(self, val):
        self.data = val
        self.next = None
        self.prev = None

class Solution:
    def reverseDLL(self, head):
        if head is None or head.next is None:
            return head
        current = head
        prev_node = None
        while current:
            current.prev, current.next = current.next, current.prev
            prev_node = current
            current = current.prev
        
        return prev_node