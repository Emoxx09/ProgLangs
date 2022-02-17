const nums = [1, 2, 5, 10, 12, 15, 99];
var sum = 0;

for (let i = 0; i < nums.length; i++) {
  sum += nums[i];
}
var avg = sum/nums.length;

console.log(avg);