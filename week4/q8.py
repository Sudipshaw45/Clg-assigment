class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
head = None
def push(data):
    global head
    new_node = Node(data)
    new_node.next = head
    head = new_node
def pairwise_swap():
    temp = head
    while temp and temp.next:
        temp.data, temp.next.data = temp.next.data, temp.data
        temp = temp.next.next
def display():
    temp = head
    while temp:
        print(temp.data, end=" ")
        temp = temp.next
push(5); push(4); push(3); push(2); push(1)
pairwise_swap()
display()