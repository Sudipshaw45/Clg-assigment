class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
last = None
def insert(data):
    global last
    new_node = Node(data)
    if not last:
        last = new_node
        last.next = last
    else:
        new_node.next = last.next
        last.next = new_node
        last = new_node
def display():
    if not last:
        return
    temp = last.next
    while True:
        print(temp.data, end=" ")
        temp = temp.next
        if temp == last.next:
            break
insert(1); insert(2); insert(3)
display()