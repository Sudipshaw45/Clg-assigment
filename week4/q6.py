class Solution:
    def sortedInsert(self, head, data,Node):
        newNode = Node(data)
        if head is None:
            newNode.next = newNode
            return newNode
        if data <= head.data:
            curr = head
            while curr.next != head:
                curr = curr.next
            curr.next = newNode
            newNode.next = head
            return newNode 
        curr = head
        while curr.next != head and curr.next.data < data:
            curr = curr.next

        newNode.next = curr.next
        curr.next = newNode

        return head