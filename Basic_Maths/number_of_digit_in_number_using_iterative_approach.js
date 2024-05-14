
/// Iterative Approach
// function checknum(n){
//     let count=0;
//     while(n>0){
//         n=Math.floor(n/10);
//         count++;
//         // console.log(count);
//     }
//     return count;
// }

let num=1234;
// let result=checknum(num);
let result=logcheck(num);

console.log(result);

// Recursive Approach
 function logcheck(n) {
    if(n==0){
        return 0;
    }
    return 1+logcheck(Math.floor(n/10));
    
 }