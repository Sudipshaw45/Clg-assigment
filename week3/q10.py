class SinglyLinkedListNode:
    def __init__(self, data):
        self.data = data
        self.next = None
def printLinkedList(head):
    current = head
    while current:
        print(current.data)
        current = current.next