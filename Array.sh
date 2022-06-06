os=('Ram' 'shayam' 'Sita')
os[0]='Bharat'
echo "${os[@]}"
echo "${os[0]}"
echo "${!os[@]}"
echo "${#os[@]}"



array=('Dell' 'HP' 'Apple')
array[0]='Acer'
unset array[2]
echo "${array[@]}"
echo "${array[1]}"
echo "${!array[@]}"
echo "${#array[@]}"

arr=('7' '6' '1999')
arr[7]='26'
echo ${arr[@]}
echo "${arr[2]}"
echo "${!arr[@]}"
echo "${#arr[@]}"