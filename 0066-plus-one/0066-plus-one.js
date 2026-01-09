/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (a) {

    let carry = 1;
    for (let i = a.length - 1; i >= 0; i--) {
        if (a[i] == 9 && carry) {
            a[i] = 0;
            carry = 1;
        }
        else {
            a[i] = a[i] + carry;
            carry = 0;
            break;
        }
    }
    if(carry)  a.unshift(1);

    return a;
};