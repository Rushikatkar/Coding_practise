


function findbinarysearch(array,search){
    
    let start=0;
    let end = array.length-1;

    // console.log(start, end);
    while(end>=start){
    let mid= parseInt((start+end)/2);
// console.log(mid);
        if(array[mid]==search){
            return mid;
        }
        if(array[mid]>search){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}


let search=8;
let array=[0,1,2,3,4,5,6,7,8,9]
let result=findbinarysearch(array,search);
// console.log(result);
if(result!=-1){
    console.log("element found at "+result);
}else{
    console.log("element not found");
}


