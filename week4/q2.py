class Solution:
    def delete_node(self, head, x):
        if x == 1:
            head = head.next
            if head:
                head.prev = None
            return head
        current = head
        count = 1
        while current and count < x:
            current = current.next
            count += 1
        if current:
            if current.prev:
                current.prev.next = current.next
            if current.next:
                current.next.prev = current.prev
        
        return head