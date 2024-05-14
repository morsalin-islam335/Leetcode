// Java Solution
// problem linK:  https://leetcode.com/problems/decode-xored-array/
/*
    example:
    encoded_array =[1,2,3] =>  [0001, 0010, 0011]
    decoded_array =[1,0,2,1] =>[0001, 0000, 0011, 0001]
    decoded_array =[0] = 1 which will provided(first as paramemter)
    decoded_array[1] = decoded_array[0] ^ encoded_array[0] //0001 ^ 0001 = 0000

*/

// formula :  if a ^ b = c than c = a ^b 
// if we imagine encoded[i] = a, decoded[i] = b, decoded[i+1] = c


class Solution {
    public int[] decode(int[] encoded, int first) {
        int decoded[] = new int[encoded.length + 1];
        decoded[0] = first;// first is the decoded array first element
        for(int i = 0; i<encoded.length; i++)
        {
            decoded[i + 1] = decoded[i] ^ encoded[i];
        }
        return decoded;
    }
}