/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumIndex = function(nums) {
    var mp = new Map();
    var mp2 = new Map();

    for(let num of nums){
        mp2.set(num , (mp2.get(num) || 0 ) + 1);
    }
    var i=0;
    for(let num of nums){
        mp2.set(num , mp2.get(num) - 1 );
        mp.set(num , (mp.get(num) || 0)+1);

        if(mp.get(num) * 2 > i+1 && mp2.get(num) * 2 > nums.length-i-1) return i;
        i++;
    }
    return -1;
};