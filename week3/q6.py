class node:
    def __init__(self):
        self.data = None
        self.next = None
class Solution:
    def detectLoop(self, head):
        slow = head
        fast = head

        while fast and fast.next:
            slow = slow.next          
            fast = fast.next.next    
            if slow == fast:          
                return True
        return False