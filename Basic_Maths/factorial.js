function number(n){
    j=1;
    for(i=1; i<=n;i++){
        j=j*i;
    }
    rev=0;
    while(j%10==0){
        rev++;
        j=j/10;
    }
    return rev;
}

console.log(number(100));