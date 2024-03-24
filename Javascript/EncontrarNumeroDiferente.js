function findUniq(arr) {
    // do magic
    let tam=arr.length;
    let numberDifferent = arr[0];
    for (i=0;i<tam;i++){
      for (i=1;i<tam;i++){
        if ( numberDifferent != arr[i] ){
          numberDifferent = arr[i]
          break;
        }
      }
    }
    console.log(numberDifferent)
  }
  
  findUniq([ 1, 1, 1, 2, 1, 1 ])
  findUniq([ 0, 0, 0.55, 0, 0 ])