class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class Solution:
    def insertAtEnd(self, head, x):
        new_node = Node(x)
        if head is None:
            return new_node
        current = head
        while current.next is not None:
            current = current.next
        current.next = new_node
        return head
