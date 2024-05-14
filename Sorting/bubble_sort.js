let array=[23,54,67,87,12,2,34]

counter=1;

while (counter<array.length) {
    for(i=0 ;i<array.length-counter;i++){
        if(array[i]>array[i+1]){
            let swap=array[i+1]
            array[i+1]=array[i];
            array[i]=swap
        }
    }
    counter++;
}

console.log(array);