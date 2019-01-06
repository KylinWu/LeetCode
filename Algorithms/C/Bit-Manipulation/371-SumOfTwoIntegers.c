int getSum(int a, int b) {
    while(b != 0){
        int carry = (a & b) << 1; /* Carry in bit */
        int sum = a ^ b; /*add without Carry*/
        a = sum;
        b = carry;
    }
    return a;
}
