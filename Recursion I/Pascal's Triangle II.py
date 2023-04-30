# Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
# Optimize your algorithm to use only O(rowIndex)

class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        row = [1] * (rowIndex + 1) # инициализирование первой строки с помощью 1-ой
        for i in range(1, rowIndex):
            for j in range(i, 0, -1):
                    row[j] += row[j-1] # добавление соседних элементов для создания следующей строки
        return row
