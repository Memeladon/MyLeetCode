# Given a linked list, swap every two adjacent nodes and return its head. 
# You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        
        # Если список пуст или содержит только один элемент
        if not head or not head.next:
            return head
        
        # Настройка указателей для отслеживания узлов
        prev, curr = None, head
        new_head = head.next  # Новая голова после замены
        
        # Проход по списку и замена местами узлов попарно
        while curr and curr.next:
            first_node = curr
            second_node = curr.next
            
            # Обновите указатели для подключения замененных узлов
            if prev:
                prev.next = second_node
            first_node.next = second_node.next
            second_node.next = first_node
            
            # Переходим к следующей паре узлов
            prev = first_node
            curr = first_node.next
            
        return new_head
        
