class Node:
	def __init__(self, data):  
		self.data = data
		self.next = None
class Solution:
    def insertInMiddle(self, head, x):
        if head is None:
            return Node(x)
        new_node = Node(x)
        slow = head
        fast = head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        new_node.next = slow.next
        slow.next = new_node
        
        return head