const arry=[1,2,3,4,5,6]
let search =5;
let flag= false;
for(i=0; i<arry.length;i++){
    if(search== arry[i]){
        console.log("Element found "+ arry[i]);
        flag=true;
        break;
    }else{
        continue;
    }
}
if(!flag){
    console.log("Element not found");
}

