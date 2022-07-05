// var arr = [9,3,7,4,4,3]
// 1- brute force 
// for(let i = 0; i < arr.length; i++) {
//     for(let j = i+1; j < arr.length; j++) {

//         if(arr[i] + arr[j] == target){
//             console.log(arr[i] , arr[j]);
//         }
//     }
// }

// 2 - 2nd method but again brute force
// for(let i = 0; i < arr.length; i++) {
//     for(let j = i+1; j < arr.length; j++) {
        
//     if((target - arr[i]) == arr[j]) {
//         console.log(arr[i], arr[j]);
//     }
//     }
// }

// 3 - optimized



























// var arr = [8,2,9,1,15];
// var obj = {
//     0: 8,
//     1: 2,
//     2: 9,
//     3: 1,
//     4: 15
// };


// var x = 5;
// var first = 0;
// var sec = 1;
// var out = 0;
// console.log(out);
// for(var i =0; i < 5; i++){
//     out = first + sec;
//     console.log("out",out);
//     first = sec;
//     sec = out;
//     console.log(first,sec);
    
// }
// var arr = [9,3,7,4,4,3]
// class Solution {
//     public int[] twoSum(int[] nums, int target) {
//       HashMap<Integer,Integer>h=new HashMap<>();
//       for(int i=0;i<nums.length;i++){
//                 h.put(nums[i],i);
//       }
//     for(int i=0;i<nums.length;i++){
//         if(h.containsKey(target-nums[i])&&h.get(target-nums[i])!=i){
//             return new int[]{i,h.get(target-nums[i])};
//         }
//     }
//         return new int[]{0,0};
//     }
// }




var target = 6;
var arr = [9,3,7,4,8,2];
var myMap = new Map();
for (let i = 0; i < arr.length; i++) {
    myMap.set(arr[i],i);
}

for (let i = 0; i < arr.length; i++) {
    // console.log(myMap.has(target-arr[i]));
    if(myMap.has(target-arr[i]) && (myMap.get(target-arr[i])!=i)){
        console.log(i, myMap.get(target-arr[i]));
        console.log(arr[i],arr[ myMap.get(target-arr[i])]);

    }
}

// console.log(myMap.get('a'));










// var nums = [2,7,11,15]
// var target = 9;

// for (var i = 0; i < nums.length; i++) {
//     for(var j = i+1; j < nums.length; j++) {
//         if(nums[i] + nums[j] === 9){
//             return console.log([i,j]);;
//         }
//     }
// }
// console.log("hellooo",nums.length);
// var num = 2365243;
// var rem = 0;
// var output= 0;
// while(num != 0){
//   rem	= num%10;
//   output = ((output*10) + rem);
//   num = num/10;
//   console.log(num);
// }
// var n = 2365243, rev=0, rem=0;
    
    // while(n!=0){
    // rem = n%10;
    // rev= (rev*10)+ rem;
    // n= n/10;
    // }
//    console.log(rev);


