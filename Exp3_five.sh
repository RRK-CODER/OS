echo "Using while loop"
i=1
while [ $i -le 10 ]
do 
echo -n "$i"
i=$((i+1)) 
done
echo