class Node:
	def __init__(self, data):  
		self.data = data
		self.next = None
class Solution:
    def insertInMiddle(self, head, x):
        if head is None:
            return Node(x)
        # Prepare the new node
        new_node = Node(x)
        slow = head
        fast = head.next
        
        # Move fast by 2, slow by 1 to find middle
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        # Insert after slow
        new_node.next = slow.next
        slow.next = new_node
        
        return head