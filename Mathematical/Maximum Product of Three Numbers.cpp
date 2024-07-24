class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int first1 = INT_MIN ;
        int second2 = INT_MIN ;
        int third3 = INT_MIN ;

        int first_min = INT_MAX ;
        int second_min = INT_MAX ;

        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if( nums[i] < first_min )
            {
                second_min = first_min ;
                first_min = nums[i] ;
            }
            else if( nums[i] < second_min )
                second_min = nums[i] ;
            if( nums[i] > first1 )
            {
                third3 = second2 ;
                second2 = first1 ;
                first1 = nums[i] ;
            }
            else if( nums[i] > second2 )
            {
                third3 = second2 ;
                second2 = nums[i] ;
            }
            else if( nums[i] > third3)
                third3 = nums[i] ;
        }
        return max ( first1* second2 * third3 , first_min * second_min * first1 );
    }
};