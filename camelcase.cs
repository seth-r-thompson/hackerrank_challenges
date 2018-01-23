/* View problem: https://www.hackerrank.com/challenges/camelcase/
/* Applications: Could be modified to parse camelcase strings.
/*
/* Returns the number of words in a string that is in camelcase.
/* 
/* @param s   A string in camelcase.
/*
/* Has an average runtime of O(N) where N is the length of the string passed.
*/

int camelcase(string s) {
    int count = (s.size() != 0) ? 1 : 0; // If the string isn't empty it must contain one word
    
    for (char c : s){
        if (c >= 65 && c <= 90) count++; // Increase the count for capital letters
    }
    
    return count;
}
