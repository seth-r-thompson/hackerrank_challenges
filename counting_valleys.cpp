/* View problem: https://www.hackerrank.com/challenges/counting-valleys/
* Applications: Could be applied to measuring frequency of state changes in binary input from analog devices. 
*
* Returns the number of "valleys" (times the "hiker", or instantaneous state, went below and then returned to "sea level", 
* or initial state).
* 
* @param s    The string of binary input. Composed of characters 'U' (up) or 'D' (down) in an unknown permutation.
*
* Has an average runtime of O(N) where N is the length of the string passed to the function.
*/

int counting_valleys(string s) {
    int seaLevel = 0;   // 0  = at sea level
                        // >0 = above sea level
                        // <0 = below sea level
    bool thru_valley = false;
    int valley_count = 0;
    
    for (char c : s){
        seaLevel += (c == 'U') ? 1 : -1; // Increase or decrease sea level
        if (thru_valley && seaLevel == 0) valley_count++;
        thru_valley = (seaLevel < 0) ? true : false;
    }    
    
    return valley_count;
}
