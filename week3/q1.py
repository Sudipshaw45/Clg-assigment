class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class Solution:
    def insertAtEnd(self, head, x):
        new_node = Node(x)
        # If list is empty, new node becomes the head
        if head is None:
            return new_node

        current = head
        # Traverse to the tail of the list
        while current.next is not None:
            current = current.next
        # Append the new node
        current.next = new_node
        return head
