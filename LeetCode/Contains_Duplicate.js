const containsDuplicate = (arr) => {
    arr.sort((a, b) => a - b)
    let flag = false;
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] == arr[i + 1]) {
            flag = true;
        }
    }
    return flag;
}

let arr = [1, 3, 2, 8, 0]
console.log(containsDuplicate(arr))