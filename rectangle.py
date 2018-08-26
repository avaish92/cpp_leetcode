class Solution(object):
    def isRectangleOverlap(self, rec1, rec2):
        """
        :type rec1: List[int]
        :type rec2: List[int]
        :rtype: bool
        """
        
        if(rec1[0] < rec2[0] < rec1[2] or rec1[0] < rec2[2] < rec1[2]):
            if(rec1[1] <= rec2[1] <= rec1[3] or rec1[1] <= rec2[3] <= rec1[3]):
                return True
        if(rec1[1] < rec2[1] < rec1[3] or rec1[1] < rec2[3] < rec1[3]):
            if(rec1[0] <= rec2[0] <= rec1[2] or rec1[0] <= rec2[2] <= rec1[2]):
                return True
        return False