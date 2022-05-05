for fname in new Exp3_five.sh
do
if [ -f $fname ]
then 
echo "$fname IS A REGULAR FILE"

echo "NUMBER OF LINES IN $fname ARE:"
echo ` wc -l $fname `
else
echo "$fname IS A DIRECTORY FILE" 
fi 
done 
