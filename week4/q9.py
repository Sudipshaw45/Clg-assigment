class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def get_count(head):
    count = 0
    while head:
        count += 1
        head = head.next
    return count
def get_intersection(d, head1, head2):
    for _ in range(d):
        head1 = head1.next
    while head1 and head2:
        if head1 == head2:
            return head1.data
        head1 = head1.next
        head2 = head2.next
    return -1
head1 = Node(10)
head2 = Node(3)
new_node = Node(15)
head1.next = new_node
head2.next = new_node
print(get_intersection(0, head1, head2))