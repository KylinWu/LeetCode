/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const map = {
        "": 0,
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000,
    };
    let current=0, next=0, result=0;
    for (let i=s.length-1; i>=0; i--) {
        current = map[s[i]];
        prev = map[s[i-1]];
        result += current;
        if (current > prev) {
            result -= prev;
            i--;
        }
    }
    return result;
};
