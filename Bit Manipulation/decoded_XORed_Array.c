// C Solution
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

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    int * decodedArray = (int *)malloc((encodedSize +1) * sizeof(int)); 
    decodedArray[0] = first; // first is the decoded array first value according to description

    for(int i = 0; i<encodedSize; i++)
    {
        decodedArray[i+1]  = decodedArray[i] ^ encoded[i];
    }
    * returnSize = encodedSize + 1; // after calline hidden function it will show output by using returnSize
    return decodedArray;

    
}
