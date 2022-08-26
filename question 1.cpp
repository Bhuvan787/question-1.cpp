function findSum(arr, k){
  //Length of array
  var len = arr.length;

  //Initialize to false so that it can be checked
  var isFound = false;

   //Check each element
   for(var i = 0; i < len; i++){

    //Check with every next element
    for(var j = i+1; j < len; j++){

     //If matched
     if(arr[i] + arr[j] === k){

        //Mark true and break;
        isFound = true;
        break;

      }

    }

  }
  //Return
  return isFound;
}

console.log(findSum([15, 4, 9 ,3 ,2, 12, 11, 14, 21, 24, 1, 10], 25));
console.log(findSum([15, 4, 9 ,3 ,2, 12, 11, 14, 21, 24, 1, 10], 100));Copy
Output:
true (15+10) (4 + 21) (11 + 14) (24 + 1)
false
