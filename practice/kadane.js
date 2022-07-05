var arr = [-5,4,3,-1,4,-2,1]; // answer - [4,3,-1,4] = 10answer
// 1 - brute force
// var newarr = [];
// var max = 0;
// for(var i = 0; i < arr.length; i++) {
//     // var t = [];
//     var sum = 1;
//     for(var j = i+1; j < arr.length; j++) {
//         newarr[j-1] = arr[i] + arr [j] 
//         sum = arr[i] + arr [j]
//         if(sum > max) max = sum;
//         arr[i] = newarr[j-1];
//     }

//     // console.log(newarr);
// }
// console.log("max", max);

// 2 - optimized
// var cursum = 0, maxsum = 0;
// for(let i of arr) {
//     cursum = cursum + arr[i];
//     if(cursum > maxsum) maxsum = cursum;
//     if(cursum < 0 ) cursum = 0;
// }
// console.log(maxsum);


