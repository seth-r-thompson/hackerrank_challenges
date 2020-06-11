/* View problem: https://www.hackerrank.com/challenges/time-conversion/
* Applications: Converting standard time format to military time.
*
* Returns a time in "hh:mm:ss" format.
* 
* @param s		A time in "hh:mm:ss:AM" format.
*
* Has an average runtime of O(1).
*/
string to_military_time(string s) {
	string hr = (stoi(s.substr(0,2)) == 12) ? "00" : s.substr(0,2);
	if (s[8] == 'P') hr = to_string(stoi(hr) + 12);
	
	return hr + s.substr(2,6);
}
