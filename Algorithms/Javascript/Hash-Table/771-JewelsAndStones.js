/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    var num = 0;
    for(j of J)
        for(s of S)
            if(j === s)
                num += 1;
    return num;
};
