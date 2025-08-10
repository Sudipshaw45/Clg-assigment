class node:
    def __init__(self):
        self.data = None
        self.next = None
class Solution:
    def removeLoop(self, head):
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                break
        else:
            return 
        slow = head
        if slow != fast:
            while slow.next != fast.next:
                slow = slow.next
                fast = fast.next
        else:
            while fast.next != slow:
                fast = fast.next
        fast.next = None