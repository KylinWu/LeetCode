/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if (x < 0) return false;
    else {
        let res = parseInt(x.toString().split('').reverse().join(''));
        return res == x ? true : false;
    }
};
