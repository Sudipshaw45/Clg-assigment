class Node:
    def __init__(self, val):
        self.data = val
        self.next = None
class Solution:
    def addTwoLists(self, first, second):
        def reverse(head):
            prev = None
            curr = head
            while curr:
                next_node = curr.next
                curr.next = prev
                prev = curr
                curr = next_node
            return prev
        first = reverse(first)
        second = reverse(second)

        carry = 0
        dummy = Node(0)
        temp = dummy
        while first or second or carry:
            sum_val = carry
            if first:
                sum_val += first.data
                first = first.next
            if second:
                sum_val += second.data
                second = second.next

            carry = sum_val // 10
            temp.next = Node(sum_val % 10)
            temp = temp.next
        return reverse(dummy.next)