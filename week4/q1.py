class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
head = None
def insert_at_beginning(data):
    global head
    new_node = Node(data)
    new_node.next = head
    if head:
        head.prev = new_node
    head = new_node
def display():
    temp = head
    while temp:
        print(temp.data, end=" ")
        temp = temp.next
insert_at_beginning(3)
insert_at_beginning(2)
insert_at_beginning(1)
display()