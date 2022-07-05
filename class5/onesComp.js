var n = 8;
var mask = 0;
while (mask < n){
    //shift left 1 bit of mask and 'OR' 1 in it
    mask = (mask << 1) | 1;
}
var ans = (~n) & mask;
console.log(ans);

//this is onsCompliment program but haveing some issue not working correct for 
// every test case.