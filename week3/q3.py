class node:
    def __init__(self):
        self.data = None
        self.next = None

def deleteNode(head, x):
    if x == 1:
        return head.next
    curr = head
    for i in range(1, x - 1):
        if curr is None:
            return head 
        curr = curr.next
    if curr is None or curr.next is None:
        return head
    curr.next = curr.next.next

    return head