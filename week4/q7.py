class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def is_circular(head):
    if not head:
        return True
    temp = head.next
    while temp and temp != head:
        temp = temp.next
    return temp == head
head = Node(1)
head.next = head
print(is_circular(head))