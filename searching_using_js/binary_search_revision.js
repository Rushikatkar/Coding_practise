function findnumber(arr, number) {
    let start=0;
    let end=arr.length-1;
// console.log(start +" and "+end);
    while (end>=start) {
        let mid= parseInt((start+end)/2);
// console.log(mid);
        if(number==arr[mid]){
            return mid;
        } else if(number>arr[mid]){
            start=mid+1;
        } else if(number<arr[mid]){
            end=mid-1;
        }  
    }
   
    return -1;
}

let arr=[1,2,3,4,5,6,7,8,9]
let number=4;
let result=findnumber(arr, number);

if(result==-1){
    console.log("Number not found");
}else{
    console.log("number found at index "+result);
}
